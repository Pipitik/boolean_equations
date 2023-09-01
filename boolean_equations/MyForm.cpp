#include "MyForm.h"
#include "BooleanEquations.h"

using namespace BooleanEquations;

System::Boolean isAllBracketsClosed(Equations eq)
{
	cliext::stack<wchar_t> brackets;
	String^ equation;
	wchar_t sym;
	for (int num = 0; num < eq.size(); ++num) {
		equation = eq[num];
		for (int i = 0; i < equation->Length; ++i) {
			sym = equation[i];
			switch (sym)
			{
			case L'(':
				brackets.push(sym);
				break;
			case L')':
				if (brackets.empty()) {
					System::Windows::Forms::MessageBox::Show("В уравнении №" + (num + 1) + " отсутствует скобка");
					return false;
				}
				else brackets.pop();
				break;
			default:
				break;
			}
		}
		if (!(brackets.empty())) {
			System::Windows::Forms::MessageBox::Show("В уравнении №" + (num + 1) + " отсутствует скобка");
			return false;
		}
	}
	return true;
}

System::Boolean isRightSideOfEquations(String^ eq, unsigned int numEq)
{
	for (std::size_t num = 0; num < eq->Length; ++num) {
		if ( !(wcschr(L"=", eq[eq->Length - 2])) ||
			 !(wcschr(L"01", eq[eq->Length - 1])) ) {
			System::Windows::Forms::MessageBox::Show("Уравнение №" + (numEq + 1) + " должно равняться 0 или 1!");
			return false;
		}
	}
	return true;
}

System::Void showSolution(Equations lsoe, RightSideOfEquations rsoe, 
						  cliext::vector<Solutions^> sols, System::Windows::Forms::DataGridView^ dgv)
{
	dgv->Columns->Clear();
	dgv->Refresh();

	if (sols.empty() || (*sols.begin())->vars.empty()) {
		System::Windows::Forms::MessageBox::Show("НЕТ РЕШЕНИЙ");
		return;
	}

	// Добавляем столбцы операндов в таблицу.
	for (auto it = sols.begin(); it != sols.end(); ++it) {
		dgv->Columns->Add((*it)->operand.ToString(), (*it)->operand.ToString());
	}
	// Добавляем столбцы уравнений в таблицу.
	for (auto it = lsoe.begin(); it != lsoe.end(); ++it) {
		dgv->Columns->Add((*it) + "1", (*it));
	}

	// Добавляем количество строк, равное количеству решений уравнений.
	for (int i = 1; i < (*sols.begin())->vars.size(); ++i) {
		dgv->Rows->Add();
	}

	// Нумеруем строки.
	for (int i = 0; i < dgv->RowCount; i++) {
		dgv->Rows[i]->HeaderCell->Value = (i + 1).ToString();
	}

	// Заносим в таблицу значения операндов.
	for (auto it = sols.begin(); it != sols.end(); ++it) {
		for (int i = 0; i < (*it)->vars.size(); ++i) {
			dgv[(*it)->operand.ToString(), i]->Value = int((*it)->vars[i]);
		}
	}
	// Заносим в таблицу правую часть уравнений.
	int numEqs = 0;
	for (auto it = lsoe.begin(); it != lsoe.end(); ++it) {
		for (int i = 0; i < dgv->RowCount; ++i) {
			dgv[(*it) + "1", i]->Value = int(rsoe[numEqs]);
		}
		++numEqs;
	}

	return System::Void();
}

System::Void booleanequations::MyForm::not_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L"01abcdxyzk=", equation[equation->Length - 1])) ) {
		listEquations->Items[indexOfStr] += L"¬";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::or_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if (wcschr(L"01abcdxyzk)", equation[equation->Length - 1]) &&
		!(wcschr(L"=", equation[equation->Length - 2])) ) {
		listEquations->Items[indexOfStr] += L"∨";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::and_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if (  wcschr(L"01abcdxyzk)", equation[equation->Length - 1]) &&
		!(wcschr(L"=", equation[equation->Length - 2])) ) {
		listEquations->Items[indexOfStr] += L"∧";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::implication_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if (  wcschr(L"01abcdxyzk)", equation[equation->Length - 1]) &&
		!(wcschr(L"=", equation[equation->Length - 2])) ) {
		listEquations->Items[indexOfStr] += L"→";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::rImplication_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if (  wcschr(L"01abcdxyzk)", equation[equation->Length - 1]) &&
		!(wcschr(L"=", equation[equation->Length - 2])) ) {
		listEquations->Items[indexOfStr] += L"←";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::xor_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if (  wcschr(L"01abcdxyzk)", equation[equation->Length - 1]) &&
		!(wcschr(L"=", equation[equation->Length - 2])) ) {
		listEquations->Items[indexOfStr] += L"⊕";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::equivalence_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if (  wcschr(L"01abcdxyzk)", equation[equation->Length - 1]) &&
		!(wcschr(L"=", equation[equation->Length - 2])) ) {
		listEquations->Items[indexOfStr] += L"~";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::peirce_arrow_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if (  wcschr(L"01abcdxyzk)", equation[equation->Length - 1]) &&
		!(wcschr(L"=", equation[equation->Length - 2])) ) {
		listEquations->Items[indexOfStr] += L"↓";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::sheffer_stroke_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if (  wcschr(L"01abcdxyzk)", equation[equation->Length - 1]) &&
		!(wcschr(L"=", equation[equation->Length - 2])) ) {
		listEquations->Items[indexOfStr] += L"/";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::lbracket_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L")=01abcdxyzk", equation[equation->Length - 1])) &&
		 !(wcschr(L"=", equation[equation->Length - 2])) ) {
		listEquations->Items[indexOfStr] += L"(";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::rbracket_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L"=(", equation[equation->Length - 1])) &&
		 !(wcschr(L"=", equation[equation->Length - 2])) ) {
		listEquations->Items[indexOfStr] += L")";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::del_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	// Запрещено удаление последних трёх символов в строке, 
	// чтобы оставить символ номера строки, скобки и пробела.
	if (equation->Length > lengthNumStr) {
		equation = equation->Remove(equation->Length - 1);
		listEquations->Items[indexOfStr] = equation;
	}
	return System::Void();
}

System::Void booleanequations::MyForm::equals_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if (  wcschr(L"01abcdxyzk)", equation[equation->Length - 1]) &&
		!(wcschr(L"=", equation[equation->Length - 2])) ) {
		listEquations->Items[indexOfStr] += L"=";
	}
	return System::Void();
}
System::Void booleanequations::MyForm::zero_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L"01abcdxyzk", equation[equation->Length - 1])) ) {
		listEquations->Items[indexOfStr] += L"0";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::one_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L"01abcdxyzk", equation[equation->Length - 1])) ) {
		listEquations->Items[indexOfStr] += L"1";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::a_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L"01abcdxyzk=", equation[equation->Length - 1])) ) {
		listEquations->Items[indexOfStr] += L"a";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::b_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L"01abcdxyzk=", equation[equation->Length - 1])) ) {
		listEquations->Items[indexOfStr] += L"b";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::c_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L"01abcdxyzk=", equation[equation->Length - 1])) ) {
		listEquations->Items[indexOfStr] += L"c";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::d_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L"01abcdxyzk=", equation[equation->Length - 1])) ) {
		listEquations->Items[indexOfStr] += L"d";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::x_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L"01abcdxyzk=", equation[equation->Length - 1])) ) {
		listEquations->Items[indexOfStr] += L"x";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::y_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L"01abcdxyzk=", equation[equation->Length - 1])) ) {
		listEquations->Items[indexOfStr] += L"y";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::z_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L"01abcdxyzk=", equation[equation->Length - 1])) ) {
		listEquations->Items[indexOfStr] += L"z";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::k_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ equation = listEquations->Items[indexOfStr]->ToString();
	if ( !(wcschr(L"01abcdxyzk=", equation[equation->Length - 1])) ) {
		listEquations->Items[indexOfStr] += L"k";
	}
	return System::Void();
}

System::Void booleanequations::MyForm::removeEquation_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (listEquations->Items->Count > 1) {
		listEquations->Items->RemoveAt(listEquations->Items->Count - 1);
		// Если указатель строки стоит на удаленной строке, то он перемещается на предыдущую строку.
		if (indexOfStr == listEquations->Items->Count) {
			--indexOfStr;
			numberOfString->Text = (indexOfStr + 1).ToString();
		}	
	}
	return System::Void();
}

System::Void booleanequations::MyForm::addEquation_Click(System::Object^ sender, System::EventArgs^ e)
{
	listEquations->Items->Add((listEquations->Items->Count + 1) + ") ");
	return System::Void();
}

System::Void booleanequations::MyForm::solve_Click(System::Object^ sender, System::EventArgs^ e)
{
	Equations              leftSideOfEquations;  // Левая часть каждого уравнения.
	RightSideOfEquations   rightSideOfEquations; // Правая часть каждого уравнения.
	Map                    variables;            // Количество различных переменных в уравнениях.

	String^ equation;
	wchar_t sym;
	for (int i = 0; i < listEquations->Items->Count; ++i) {
		equation = listEquations->Items[i]->ToString();

		// Заносим в массив правую часть каждого уравнения.
		if (!(isRightSideOfEquations(equation, i))) return System::Void(); // Проверка на наличие правой части у каждого уравнения.
		rightSideOfEquations.push_back(equation->Substring(equation->Length - 1) == "1");

		// Заносим в массив левую часть каждого уравнения.
		equation = equation->Substring(lengthNumStr, equation->Length - (2 + lengthNumStr));
		equation = equation->Replace(" ", "");
		leftSideOfEquations.push_back(equation);

		// Подсчитываем количество различных переменных в уравнениях.
		for (int j = 0; j < equation->Length; ++j) {
			sym = equation[j];
			if ( !(wcschr(L"¬∨∧→←⊕~↓/()=01", sym)) ) {
				variables.insert(cliext::pair<wchar_t, bool>(sym, 0));
			}
		}
	}
	
	if (!(isAllBracketsClosed(leftSideOfEquations))) return System::Void(); // Проверка на наличие всех скобок в уравнениях.

	Equations rpnEquations; // преобразованные уравнения в обратную польскую запись.
	rpnEquations = rPolishNotation(leftSideOfEquations); // Преобразовываем левую часть уравнения в обратную польскую запись.

	// Находим решения.
	cliext::vector<Solutions^> sols = findSolution(rpnEquations, rightSideOfEquations, variables);

	// Выводим решения в таблицу.
	showSolution(leftSideOfEquations, rightSideOfEquations, sols, dataGridView);

	return System::Void();
}

System::Void booleanequations::MyForm::upArrow_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (indexOfStr > 0) {
		--indexOfStr;
		numberOfString->Text = (indexOfStr + 1).ToString();
	}
	return System::Void();
}

System::Void booleanequations::MyForm::downArrow_Click(System::Object^ sender, System::EventArgs^ e)
{
	if ((indexOfStr + 1) < listEquations->Items->Count) {
		++indexOfStr;
		numberOfString->Text = (indexOfStr + 1).ToString();
	}
	return System::Void();
}

System::Void booleanequations::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	lengthNumStr = 3;
	listEquations->AutoSize = true;
	tabControl->AutoSize = true;
	listEquations->Items->Add("1) ");
	numberOfString->Text += "1";
	return System::Void();
}