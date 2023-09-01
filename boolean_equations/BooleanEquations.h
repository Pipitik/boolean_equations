#ifndef BOOLEAN_EQUATIONS
#define BOOLEAN_EQUATIONS
#pragma once

#include <cliext/map>
#include <cliext/stack>
#include <cliext/vector>
#include <wchar.h>


using namespace System;

namespace BooleanEquations 
{
	ref struct Solutions
	{
		wchar_t operand;
		cliext::vector<bool> vars;
	};
	
	typedef cliext::vector<String^>    Equations;
	typedef cliext::vector<bool>       RightSideOfEquations;
	typedef cliext::map<wchar_t, bool> Map;

	Equations rPolishNotation(Equations equations);
	Map giveValues(Map vars, unsigned int val);
	cliext::vector<Solutions^> copyOperands(cliext::vector<Solutions^> s, Map m);
	cliext::vector<Solutions^> insertVars(cliext::vector<Solutions^> s, Map m);
	System::Boolean isSolution(cliext::vector<bool> vars, RightSideOfEquations rsoe);
	cliext::vector<Solutions^> findSolution(Equations equations, RightSideOfEquations rightSideOfEquations, Map variables);
}


#endif // BOOLEAN_EQUATIONS