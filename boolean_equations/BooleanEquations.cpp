#include "BooleanEquations.h"
#include <cmath>

namespace BooleanEquations
{
	Equations rPolishNotation(Equations equations)
	{
		Equations rpnEquations; // Уравнения, представленные в виде обратной польской нотации
		String^ rpnEquation = "";
		cliext::stack<wchar_t> operators;
		String^ equation;
		wchar_t sym;
		for (size_t num = 0; num < equations.size(); ++num) {
			equation = equations[num];
			for (size_t i = 0; i < equation->Length; ++i) {
				sym = equation[i];
				switch (sym)
				{
				case L'(':
					operators.push(sym);
					break;
				case L')':
					for (wchar_t ch = operators.top(); ch != L'('; ch = operators.top()) {
						rpnEquation += operators.top();
						operators.pop();
					}
					operators.pop();
					break;
				case L'∨':
				case L'→':
				case L'←':
				case L'⊕':
				case L'~':
				case L'↓':
				case L'/':
					if (!operators.empty() && wcschr(L"∨→←⊕~↓/∧¬", operators.top())) {
						rpnEquation += operators.top();
						operators.pop();
						operators.push(sym);
					}
					else {
						operators.push(sym);
					}
					break;
				case L'∧':
					if (!operators.empty() && wcschr(L"∧", operators.top())) {
						rpnEquation += operators.top();
						operators.pop();
						operators.push(sym);
					}
					else {
						operators.push(sym);
					}
					break;
				case L'¬':
					operators.push(sym);
					break;
				default:
					rpnEquation += sym;
					break;
				}
			}
			while (!operators.empty()) {
				rpnEquation += operators.top();
				operators.pop();
			}

			rpnEquations.push_back(rpnEquation);
			rpnEquation = "";
		}
		return rpnEquations;
	}

	Map giveValues(Map vars, unsigned int val)
	{
		for (Map::reverse_iterator rit = vars.rbegin(); rit != vars.rend(); ++rit) {
			(*rit)->second = val % 2;
			val /= 2;
		}
		return vars;
	}

	cliext::vector<Solutions^> copyOperands(cliext::vector<Solutions^> s, Map m)
	{
		for (auto it = m.begin(); it != m.end(); ++it) {
			Solutions^ temp = gcnew Solutions();
			temp->operand = (*it)->first;
			s.push_back(temp);
		}
		return s;
	}

	cliext::vector<Solutions^> insertVars(cliext::vector<Solutions^> s, Map m)
	{
		int i = 0;
		for (auto it = m.begin(); it != m.end(); ++it) {
			s[i]->vars.push_back((*it)->second);
			++i;
		}
		return s;
	}

	System::Boolean isSolution(cliext::vector<bool> vars, RightSideOfEquations rsoe)
	{
		for (size_t i = 0; i < vars.size(); ++i) {
			if (vars[i] != rsoe[i]) return false;
		}
		return true;
	}

	cliext::vector<Solutions^> findSolution(Equations equations, RightSideOfEquations rightSideOfEquations, Map variables)
	{
		cliext::vector<Solutions^> solutions;
		solutions = copyOperands(solutions, variables);
		cliext::stack<bool> stack;
		cliext::vector<bool> tempVars;
		String^ equation;
		wchar_t sym;
		bool op1;    // Операнд №1
		bool op2;    // Операнд №2
		
		for (size_t i = 0; i < std::pow(2, variables.size()); ++i) {
			variables = giveValues(variables, i);
			for (size_t numEquation = 0; numEquation < equations.size(); ++numEquation) {
				equation = equations[numEquation];
				for (size_t j = 0; j < equation->Length; ++j) {
					sym = equation[j];
					switch (sym)
					{
					case L'¬':
						op1 = stack.top();
						stack.pop();
						stack.push(!op1);
						break;
					case L'∨':
						op2 = stack.top();
						stack.pop();
						op1 = stack.top();
						stack.pop();
						stack.push(op1 || op2);
						break;
					case L'∧':
						op2 = stack.top();
						stack.pop();
						op1 = stack.top();
						stack.pop();
						stack.push(op1 && op2);
						break;
					case L'→':
						op2 = stack.top();
						stack.pop();
						op1 = stack.top();
						stack.pop();
						stack.push(!op1 || op2);
						break;
					case L'←':
						op2 = stack.top();
						stack.pop();
						op1 = stack.top();
						stack.pop();
						stack.push(op1 || !op2);
						break;
					case L'⊕':
						op2 = stack.top();
						stack.pop();
						op1 = stack.top();
						stack.pop();
						stack.push(op1 != op2);
						break;
					case L'~':
						op2 = stack.top();
						stack.pop();
						op1 = stack.top();
						stack.pop();
						stack.push(op1 == op2);
						break;
					case L'↓':
						op2 = stack.top();
						stack.pop();
						op1 = stack.top();
						stack.pop();
						stack.push(!(op1 || op2));
						break;
					case L'/':
						op2 = stack.top();
						stack.pop();
						op1 = stack.top();
						stack.pop();
						stack.push(!(op1 && op2));
						break;
					case L'0':
					case L'1':
						stack.push(sym == L'1');
						break;
					default:
						stack.push((*variables.find(sym))->second);
						break;
					}
				}
				tempVars.push_back(stack.top());
				stack.pop();
			}
			if (isSolution(tempVars, rightSideOfEquations)) {
				solutions = insertVars(solutions, variables);
			}
			tempVars.clear();
		}

		return solutions;
	}
}