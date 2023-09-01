#ifndef MY_FORM
#define MY_FORM
#pragma once

namespace booleanequations {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: int lengthNumStr;					// Количество символов, которые занимает номер уравнения.
	private: int indexOfStr = 0;				// Номер строки, на которой расположено булево уравнений.

	private: System::Windows::Forms::Button^ NOT;
	private: System::Windows::Forms::Button^ OR;
	private: System::Windows::Forms::Button^ AND;
	private: System::Windows::Forms::Button^ implication;
	private: System::Windows::Forms::Button^ rImplication;
	private: System::Windows::Forms::Button^ XOR;
	private: System::Windows::Forms::Button^ equivalence;
	private: System::Windows::Forms::Button^ peirce_arrow;
	private: System::Windows::Forms::Button^ sheffer_stroke;

	private: System::Windows::Forms::Button^ lbracket;
	private: System::Windows::Forms::Button^ rbracket;
	private: System::Windows::Forms::Button^ equals;
	private: System::Windows::Forms::Button^ del;
	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ one;

	private: System::Windows::Forms::Button^ removeEquation;
	private: System::Windows::Forms::Button^ addEquation;
	private: System::Windows::Forms::Button^ solve;

	private: System::Windows::Forms::Button^ a;
	private: System::Windows::Forms::Button^ b;
	private: System::Windows::Forms::Button^ c;
	private: System::Windows::Forms::Button^ d;
	private: System::Windows::Forms::Button^ x;
	private: System::Windows::Forms::Button^ y;
	private: System::Windows::Forms::Button^ z;
	private: System::Windows::Forms::Button^ k;

	private: System::Windows::Forms::Button^ upArrow;
	private: System::Windows::Forms::Button^ downArrow;
	private: System::Windows::Forms::TextBox^ numberOfString;

	private: System::Windows::Forms::ListBox^ listEquations;

	private: System::Windows::Forms::Label^ operators;
	private: System::Windows::Forms::Label^ variables;

	private: System::Windows::Forms::TabPage^ solution;
	private: System::Windows::Forms::TabPage^ calculator;
	private: System::Windows::Forms::TabControl^ tabControl;
	private: System::Windows::Forms::DataGridView^ dataGridView;

	private: System::Windows::Forms::ToolTip^ toolTip_NOT;
	private: System::Windows::Forms::ToolTip^ toolTip_OR;
	private: System::Windows::Forms::ToolTip^ toolTip_AND;
	private: System::Windows::Forms::ToolTip^ toolTip_Implication;
	private: System::Windows::Forms::ToolTip^ toolTip_rImplication;
	private: System::Windows::Forms::ToolTip^ toolTip_XOR;
	private: System::Windows::Forms::ToolTip^ toolTip_Remove;
	private: System::Windows::Forms::ToolTip^ toolTip_Equivalence;
	private: System::Windows::Forms::ToolTip^ toolTip_Peirce_arrow;
	private: System::Windows::Forms::ToolTip^ toolTip_Sheffer_stroke;
	private: System::Windows::Forms::ToolTip^ toolTip_Add;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->implication = (gcnew System::Windows::Forms::Button());
			this->equivalence = (gcnew System::Windows::Forms::Button());
			this->peirce_arrow = (gcnew System::Windows::Forms::Button());
			this->sheffer_stroke = (gcnew System::Windows::Forms::Button());
			this->rImplication = (gcnew System::Windows::Forms::Button());
			this->toolTip_NOT = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->NOT = (gcnew System::Windows::Forms::Button());
			this->toolTip_OR = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->OR = (gcnew System::Windows::Forms::Button());
			this->toolTip_AND = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->AND = (gcnew System::Windows::Forms::Button());
			this->toolTip_Implication = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip_rImplication = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip_XOR = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->XOR = (gcnew System::Windows::Forms::Button());
			this->toolTip_Equivalence = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip_Sheffer_stroke = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->zero = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->lbracket = (gcnew System::Windows::Forms::Button());
			this->rbracket = (gcnew System::Windows::Forms::Button());
			this->solve = (gcnew System::Windows::Forms::Button());
			this->toolTip_Peirce_arrow = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->del = (gcnew System::Windows::Forms::Button());
			this->toolTip_Add = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->addEquation = (gcnew System::Windows::Forms::Button());
			this->removeEquation = (gcnew System::Windows::Forms::Button());
			this->equals = (gcnew System::Windows::Forms::Button());
			this->x = (gcnew System::Windows::Forms::Button());
			this->y = (gcnew System::Windows::Forms::Button());
			this->k = (gcnew System::Windows::Forms::Button());
			this->z = (gcnew System::Windows::Forms::Button());
			this->b = (gcnew System::Windows::Forms::Button());
			this->c = (gcnew System::Windows::Forms::Button());
			this->a = (gcnew System::Windows::Forms::Button());
			this->d = (gcnew System::Windows::Forms::Button());
			this->operators = (gcnew System::Windows::Forms::Label());
			this->variables = (gcnew System::Windows::Forms::Label());
			this->listEquations = (gcnew System::Windows::Forms::ListBox());
			this->upArrow = (gcnew System::Windows::Forms::Button());
			this->downArrow = (gcnew System::Windows::Forms::Button());
			this->numberOfString = (gcnew System::Windows::Forms::TextBox());
			this->toolTip_Remove = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->solution = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->calculator = (gcnew System::Windows::Forms::TabPage());
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->solution->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->calculator->SuspendLayout();
			this->tabControl->SuspendLayout();
			this->SuspendLayout();
			// 
			// implication
			// 
			this->implication->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->implication->Cursor = System::Windows::Forms::Cursors::Hand;
			this->implication->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->implication->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->implication->ForeColor = System::Drawing::SystemColors::ControlText;
			this->implication->Location = System::Drawing::Point(1059, 89);
			this->implication->Margin = System::Windows::Forms::Padding(0);
			this->implication->Name = L"implication";
			this->implication->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->implication->Size = System::Drawing::Size(65, 65);
			this->implication->TabIndex = 3;
			this->implication->Text = L"→";
			this->toolTip_Implication->SetToolTip(this->implication, L"Импликация");
			this->implication->UseVisualStyleBackColor = true;
			this->implication->Click += gcnew System::EventHandler(this, &MyForm::implication_Click);
			// 
			// equivalence
			// 
			this->equivalence->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->equivalence->Cursor = System::Windows::Forms::Cursors::Hand;
			this->equivalence->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equivalence->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->equivalence->ForeColor = System::Drawing::SystemColors::ControlText;
			this->equivalence->Location = System::Drawing::Point(1059, 154);
			this->equivalence->Margin = System::Windows::Forms::Padding(0);
			this->equivalence->Name = L"equivalence";
			this->equivalence->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->equivalence->Size = System::Drawing::Size(65, 65);
			this->equivalence->TabIndex = 6;
			this->equivalence->Text = L"~";
			this->toolTip_Equivalence->SetToolTip(this->equivalence, L"Эквивалентность ");
			this->equivalence->UseVisualStyleBackColor = true;
			this->equivalence->Click += gcnew System::EventHandler(this, &MyForm::equivalence_Click);
			// 
			// peirce_arrow
			// 
			this->peirce_arrow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->peirce_arrow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->peirce_arrow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->peirce_arrow->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->peirce_arrow->ForeColor = System::Drawing::SystemColors::ControlText;
			this->peirce_arrow->Location = System::Drawing::Point(1124, 154);
			this->peirce_arrow->Margin = System::Windows::Forms::Padding(0);
			this->peirce_arrow->Name = L"peirce_arrow";
			this->peirce_arrow->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->peirce_arrow->Size = System::Drawing::Size(65, 65);
			this->peirce_arrow->TabIndex = 7;
			this->peirce_arrow->Text = L"↓";
			this->toolTip_Peirce_arrow->SetToolTip(this->peirce_arrow, L"Стрелка Пирса");
			this->peirce_arrow->UseVisualStyleBackColor = true;
			this->peirce_arrow->Click += gcnew System::EventHandler(this, &MyForm::peirce_arrow_Click);
			// 
			// sheffer_stroke
			// 
			this->sheffer_stroke->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->sheffer_stroke->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sheffer_stroke->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sheffer_stroke->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->sheffer_stroke->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sheffer_stroke->Location = System::Drawing::Point(1189, 154);
			this->sheffer_stroke->Margin = System::Windows::Forms::Padding(0);
			this->sheffer_stroke->Name = L"sheffer_stroke";
			this->sheffer_stroke->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->sheffer_stroke->Size = System::Drawing::Size(65, 65);
			this->sheffer_stroke->TabIndex = 8;
			this->sheffer_stroke->Text = L"/";
			this->toolTip_Sheffer_stroke->SetToolTip(this->sheffer_stroke, L"Штрих Шеффера");
			this->sheffer_stroke->UseVisualStyleBackColor = true;
			this->sheffer_stroke->Click += gcnew System::EventHandler(this, &MyForm::sheffer_stroke_Click);
			// 
			// rImplication
			// 
			this->rImplication->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->rImplication->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rImplication->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rImplication->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->rImplication->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rImplication->Location = System::Drawing::Point(1124, 89);
			this->rImplication->Margin = System::Windows::Forms::Padding(0);
			this->rImplication->Name = L"rImplication";
			this->rImplication->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->rImplication->Size = System::Drawing::Size(65, 65);
			this->rImplication->TabIndex = 4;
			this->rImplication->Text = L"←";
			this->toolTip_rImplication->SetToolTip(this->rImplication, L"Обратная импликация");
			this->rImplication->UseVisualStyleBackColor = true;
			this->rImplication->Click += gcnew System::EventHandler(this, &MyForm::rImplication_Click);
			// 
			// NOT
			// 
			this->NOT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->NOT->Cursor = System::Windows::Forms::Cursors::Hand;
			this->NOT->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NOT->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->NOT->ForeColor = System::Drawing::SystemColors::ControlText;
			this->NOT->Location = System::Drawing::Point(1059, 24);
			this->NOT->Margin = System::Windows::Forms::Padding(0);
			this->NOT->Name = L"NOT";
			this->NOT->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->NOT->Size = System::Drawing::Size(65, 65);
			this->NOT->TabIndex = 1;
			this->NOT->Text = L"¬";
			this->toolTip_NOT->SetToolTip(this->NOT, L"НЕ");
			this->NOT->UseVisualStyleBackColor = true;
			this->NOT->Click += gcnew System::EventHandler(this, &MyForm::not_Click);
			// 
			// OR
			// 
			this->OR->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->OR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->OR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OR->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->OR->ForeColor = System::Drawing::SystemColors::ControlText;
			this->OR->Location = System::Drawing::Point(1124, 24);
			this->OR->Margin = System::Windows::Forms::Padding(0);
			this->OR->Name = L"OR";
			this->OR->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->OR->Size = System::Drawing::Size(65, 65);
			this->OR->TabIndex = 3;
			this->OR->Text = L"∨";
			this->toolTip_OR->SetToolTip(this->OR, L"ИЛИ");
			this->OR->UseVisualStyleBackColor = true;
			this->OR->Click += gcnew System::EventHandler(this, &MyForm::or_Click);
			// 
			// AND
			// 
			this->AND->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->AND->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AND->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AND->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->AND->ForeColor = System::Drawing::SystemColors::ControlText;
			this->AND->Location = System::Drawing::Point(1189, 24);
			this->AND->Margin = System::Windows::Forms::Padding(0);
			this->AND->Name = L"AND";
			this->AND->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->AND->Size = System::Drawing::Size(65, 65);
			this->AND->TabIndex = 2;
			this->AND->Text = L"∧";
			this->toolTip_AND->SetToolTip(this->AND, L"И");
			this->AND->UseVisualStyleBackColor = true;
			this->AND->Click += gcnew System::EventHandler(this, &MyForm::and_Click);
			// 
			// XOR
			// 
			this->XOR->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->XOR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->XOR->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->XOR->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->XOR->ForeColor = System::Drawing::SystemColors::ControlText;
			this->XOR->Location = System::Drawing::Point(1189, 89);
			this->XOR->Margin = System::Windows::Forms::Padding(0);
			this->XOR->Name = L"XOR";
			this->XOR->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->XOR->Size = System::Drawing::Size(65, 65);
			this->XOR->TabIndex = 5;
			this->XOR->Text = L"⊕";
			this->toolTip_XOR->SetToolTip(this->XOR, L"Исключающее ИЛИ");
			this->XOR->UseVisualStyleBackColor = true;
			this->XOR->Click += gcnew System::EventHandler(this, &MyForm::xor_Click);
			// 
			// zero
			// 
			this->zero->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->zero->Cursor = System::Windows::Forms::Cursors::Hand;
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zero->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->zero->ForeColor = System::Drawing::SystemColors::ControlText;
			this->zero->Location = System::Drawing::Point(1124, 284);
			this->zero->Margin = System::Windows::Forms::Padding(0);
			this->zero->Name = L"zero";
			this->zero->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->zero->Size = System::Drawing::Size(65, 65);
			this->zero->TabIndex = 13;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::zero_Click);
			// 
			// one
			// 
			this->one->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->one->Cursor = System::Windows::Forms::Cursors::Hand;
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->one->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->one->ForeColor = System::Drawing::SystemColors::ControlText;
			this->one->Location = System::Drawing::Point(1189, 284);
			this->one->Margin = System::Windows::Forms::Padding(0);
			this->one->Name = L"one";
			this->one->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->one->Size = System::Drawing::Size(65, 65);
			this->one->TabIndex = 14;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::one_Click);
			// 
			// lbracket
			// 
			this->lbracket->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lbracket->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbracket->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbracket->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->lbracket->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbracket->Location = System::Drawing::Point(1059, 219);
			this->lbracket->Margin = System::Windows::Forms::Padding(0);
			this->lbracket->Name = L"lbracket";
			this->lbracket->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->lbracket->Size = System::Drawing::Size(65, 65);
			this->lbracket->TabIndex = 9;
			this->lbracket->Text = L"(";
			this->lbracket->UseVisualStyleBackColor = true;
			this->lbracket->Click += gcnew System::EventHandler(this, &MyForm::lbracket_Click);
			// 
			// rbracket
			// 
			this->rbracket->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->rbracket->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rbracket->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rbracket->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->rbracket->ForeColor = System::Drawing::SystemColors::ControlText;
			this->rbracket->Location = System::Drawing::Point(1124, 219);
			this->rbracket->Margin = System::Windows::Forms::Padding(0);
			this->rbracket->Name = L"rbracket";
			this->rbracket->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->rbracket->Size = System::Drawing::Size(65, 65);
			this->rbracket->TabIndex = 10;
			this->rbracket->Text = L")";
			this->rbracket->UseVisualStyleBackColor = true;
			this->rbracket->Click += gcnew System::EventHandler(this, &MyForm::rbracket_Click);
			// 
			// solve
			// 
			this->solve->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->solve->Cursor = System::Windows::Forms::Cursors::Hand;
			this->solve->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->solve->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->solve->ForeColor = System::Drawing::SystemColors::ControlText;
			this->solve->Location = System::Drawing::Point(1139, 531);
			this->solve->Margin = System::Windows::Forms::Padding(0);
			this->solve->Name = L"solve";
			this->solve->Size = System::Drawing::Size(115, 47);
			this->solve->TabIndex = 24;
			this->solve->Text = L"Решить";
			this->solve->UseVisualStyleBackColor = true;
			this->solve->Click += gcnew System::EventHandler(this, &MyForm::solve_Click);
			// 
			// del
			// 
			this->del->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->del->Cursor = System::Windows::Forms::Cursors::Hand;
			this->del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->del->ForeColor = System::Drawing::SystemColors::ControlText;
			this->del->Location = System::Drawing::Point(1189, 219);
			this->del->Margin = System::Windows::Forms::Padding(0);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(65, 65);
			this->del->TabIndex = 11;
			this->del->Text = L"del";
			this->del->UseVisualStyleBackColor = true;
			this->del->Click += gcnew System::EventHandler(this, &MyForm::del_Click);
			// 
			// addEquation
			// 
			this->addEquation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->addEquation->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addEquation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addEquation->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F));
			this->addEquation->ForeColor = System::Drawing::SystemColors::ControlText;
			this->addEquation->Location = System::Drawing::Point(996, 542);
			this->addEquation->Margin = System::Windows::Forms::Padding(0);
			this->addEquation->Name = L"addEquation";
			this->addEquation->Size = System::Drawing::Size(125, 36);
			this->addEquation->TabIndex = 23;
			this->addEquation->Text = L"Добавить";
			this->toolTip_Add->SetToolTip(this->addEquation, L"Добавить новое уравнение");
			this->addEquation->UseVisualStyleBackColor = true;
			this->addEquation->Click += gcnew System::EventHandler(this, &MyForm::addEquation_Click);
			// 
			// removeEquation
			// 
			this->removeEquation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->removeEquation->Cursor = System::Windows::Forms::Cursors::Hand;
			this->removeEquation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->removeEquation->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F));
			this->removeEquation->ForeColor = System::Drawing::SystemColors::ControlText;
			this->removeEquation->Location = System::Drawing::Point(996, 506);
			this->removeEquation->Margin = System::Windows::Forms::Padding(0);
			this->removeEquation->Name = L"removeEquation";
			this->removeEquation->Size = System::Drawing::Size(125, 36);
			this->removeEquation->TabIndex = 31;
			this->removeEquation->Text = L"Удалить";
			this->toolTip_Remove->SetToolTip(this->removeEquation, L"Удалить последнее уравнение");
			this->removeEquation->UseVisualStyleBackColor = true;
			this->removeEquation->Click += gcnew System::EventHandler(this, &MyForm::removeEquation_Click);
			// 
			// equals
			// 
			this->equals->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->equals->Cursor = System::Windows::Forms::Cursors::Hand;
			this->equals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equals->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->equals->ForeColor = System::Drawing::SystemColors::ControlText;
			this->equals->Location = System::Drawing::Point(1059, 284);
			this->equals->Margin = System::Windows::Forms::Padding(0);
			this->equals->Name = L"equals";
			this->equals->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->equals->Size = System::Drawing::Size(65, 65);
			this->equals->TabIndex = 12;
			this->equals->Text = L"=";
			this->equals->UseVisualStyleBackColor = true;
			this->equals->Click += gcnew System::EventHandler(this, &MyForm::equals_Click);
			// 
			// x
			// 
			this->x->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->x->Cursor = System::Windows::Forms::Cursors::Hand;
			this->x->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->x->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->x->ForeColor = System::Drawing::SystemColors::ControlText;
			this->x->Location = System::Drawing::Point(996, 437);
			this->x->Margin = System::Windows::Forms::Padding(0);
			this->x->Name = L"x";
			this->x->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->x->Size = System::Drawing::Size(65, 65);
			this->x->TabIndex = 19;
			this->x->Text = L"x";
			this->x->UseVisualStyleBackColor = true;
			this->x->Click += gcnew System::EventHandler(this, &MyForm::x_Click);
			// 
			// y
			// 
			this->y->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->y->Cursor = System::Windows::Forms::Cursors::Hand;
			this->y->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->y->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->y->ForeColor = System::Drawing::SystemColors::ControlText;
			this->y->Location = System::Drawing::Point(1059, 437);
			this->y->Margin = System::Windows::Forms::Padding(0);
			this->y->Name = L"y";
			this->y->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->y->Size = System::Drawing::Size(65, 65);
			this->y->TabIndex = 20;
			this->y->Text = L"y";
			this->y->UseVisualStyleBackColor = true;
			this->y->Click += gcnew System::EventHandler(this, &MyForm::y_Click);
			// 
			// k
			// 
			this->k->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->k->Cursor = System::Windows::Forms::Cursors::Hand;
			this->k->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->k->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->k->ForeColor = System::Drawing::SystemColors::ControlText;
			this->k->Location = System::Drawing::Point(1189, 437);
			this->k->Margin = System::Windows::Forms::Padding(0);
			this->k->Name = L"k";
			this->k->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->k->Size = System::Drawing::Size(65, 65);
			this->k->TabIndex = 22;
			this->k->Text = L"k";
			this->k->UseVisualStyleBackColor = true;
			this->k->Click += gcnew System::EventHandler(this, &MyForm::k_Click);
			// 
			// z
			// 
			this->z->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->z->Cursor = System::Windows::Forms::Cursors::Hand;
			this->z->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->z->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->z->ForeColor = System::Drawing::SystemColors::ControlText;
			this->z->Location = System::Drawing::Point(1124, 437);
			this->z->Margin = System::Windows::Forms::Padding(0);
			this->z->Name = L"z";
			this->z->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->z->Size = System::Drawing::Size(65, 65);
			this->z->TabIndex = 21;
			this->z->Text = L"z";
			this->z->UseVisualStyleBackColor = true;
			this->z->Click += gcnew System::EventHandler(this, &MyForm::z_Click);
			// 
			// b
			// 
			this->b->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->b->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->b->ForeColor = System::Drawing::SystemColors::ControlText;
			this->b->Location = System::Drawing::Point(1059, 372);
			this->b->Margin = System::Windows::Forms::Padding(0);
			this->b->Name = L"b";
			this->b->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->b->Size = System::Drawing::Size(65, 65);
			this->b->TabIndex = 16;
			this->b->Text = L"b";
			this->b->UseVisualStyleBackColor = true;
			this->b->Click += gcnew System::EventHandler(this, &MyForm::b_Click);
			// 
			// c
			// 
			this->c->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->c->Cursor = System::Windows::Forms::Cursors::Hand;
			this->c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->c->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->c->ForeColor = System::Drawing::SystemColors::ControlText;
			this->c->Location = System::Drawing::Point(1124, 372);
			this->c->Margin = System::Windows::Forms::Padding(0);
			this->c->Name = L"c";
			this->c->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->c->Size = System::Drawing::Size(65, 65);
			this->c->TabIndex = 17;
			this->c->Text = L"c";
			this->c->UseVisualStyleBackColor = true;
			this->c->Click += gcnew System::EventHandler(this, &MyForm::c_Click);
			// 
			// a
			// 
			this->a->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->a->Cursor = System::Windows::Forms::Cursors::Hand;
			this->a->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->a->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->a->ForeColor = System::Drawing::SystemColors::ControlText;
			this->a->Location = System::Drawing::Point(996, 372);
			this->a->Margin = System::Windows::Forms::Padding(0);
			this->a->Name = L"a";
			this->a->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->a->Size = System::Drawing::Size(65, 65);
			this->a->TabIndex = 15;
			this->a->Text = L"a";
			this->a->UseVisualStyleBackColor = true;
			this->a->Click += gcnew System::EventHandler(this, &MyForm::a_Click);
			// 
			// d
			// 
			this->d->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->d->Cursor = System::Windows::Forms::Cursors::Hand;
			this->d->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->d->Font = (gcnew System::Drawing::Font(L"Arial", 28.2F));
			this->d->ForeColor = System::Drawing::SystemColors::ControlText;
			this->d->Location = System::Drawing::Point(1189, 372);
			this->d->Margin = System::Windows::Forms::Padding(0);
			this->d->Name = L"d";
			this->d->Padding = System::Windows::Forms::Padding(6, 0, 0, 0);
			this->d->Size = System::Drawing::Size(65, 65);
			this->d->TabIndex = 18;
			this->d->Text = L"d";
			this->d->UseVisualStyleBackColor = true;
			this->d->Click += gcnew System::EventHandler(this, &MyForm::d_Click);
			// 
			// operators
			// 
			this->operators->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->operators->AutoSize = true;
			this->operators->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->operators->Location = System::Drawing::Point(1140, 0);
			this->operators->Name = L"operators";
			this->operators->Size = System::Drawing::Size(114, 23);
			this->operators->TabIndex = 25;
			this->operators->Text = L"Операторы";
			// 
			// variables
			// 
			this->variables->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->variables->AutoSize = true;
			this->variables->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->variables->Location = System::Drawing::Point(1129, 349);
			this->variables->Name = L"variables";
			this->variables->Size = System::Drawing::Size(125, 23);
			this->variables->TabIndex = 26;
			this->variables->Text = L"Переменные";
			// 
			// listEquations
			// 
			this->listEquations->Dock = System::Windows::Forms::DockStyle::Left;
			this->listEquations->Font = (gcnew System::Drawing::Font(L"Arial", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listEquations->FormattingEnabled = true;
			this->listEquations->HorizontalScrollbar = true;
			this->listEquations->ItemHeight = 38;
			this->listEquations->Location = System::Drawing::Point(3, 3);
			this->listEquations->MaximumSize = System::Drawing::Size(950, 1080);
			this->listEquations->Name = L"listEquations";
			this->listEquations->Size = System::Drawing::Size(216, 575);
			this->listEquations->TabIndex = 27;
			// 
			// upArrow
			// 
			this->upArrow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->upArrow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->upArrow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->upArrow->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->upArrow->ForeColor = System::Drawing::SystemColors::ControlText;
			this->upArrow->Location = System::Drawing::Point(990, 24);
			this->upArrow->Margin = System::Windows::Forms::Padding(0);
			this->upArrow->Name = L"upArrow";
			this->upArrow->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->upArrow->Size = System::Drawing::Size(40, 40);
			this->upArrow->TabIndex = 28;
			this->upArrow->Text = L"▲";
			this->upArrow->UseVisualStyleBackColor = true;
			this->upArrow->Click += gcnew System::EventHandler(this, &MyForm::upArrow_Click);
			// 
			// downArrow
			// 
			this->downArrow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->downArrow->Cursor = System::Windows::Forms::Cursors::Hand;
			this->downArrow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->downArrow->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->downArrow->ForeColor = System::Drawing::SystemColors::ControlText;
			this->downArrow->Location = System::Drawing::Point(990, 110);
			this->downArrow->Margin = System::Windows::Forms::Padding(0);
			this->downArrow->Name = L"downArrow";
			this->downArrow->Padding = System::Windows::Forms::Padding(3, 0, 0, 0);
			this->downArrow->Size = System::Drawing::Size(40, 40);
			this->downArrow->TabIndex = 29;
			this->downArrow->Text = L"▼";
			this->downArrow->UseVisualStyleBackColor = true;
			this->downArrow->Click += gcnew System::EventHandler(this, &MyForm::downArrow_Click);
			// 
			// numberOfString
			// 
			this->numberOfString->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numberOfString->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numberOfString->Location = System::Drawing::Point(990, 68);
			this->numberOfString->Margin = System::Windows::Forms::Padding(8, 3, 0, 3);
			this->numberOfString->Name = L"numberOfString";
			this->numberOfString->ReadOnly = true;
			this->numberOfString->Size = System::Drawing::Size(40, 39);
			this->numberOfString->TabIndex = 30;
			// 
			// solution
			// 
			this->solution->Controls->Add(this->dataGridView);
			this->solution->Location = System::Drawing::Point(4, 28);
			this->solution->Name = L"solution";
			this->solution->Padding = System::Windows::Forms::Padding(3);
			this->solution->Size = System::Drawing::Size(1254, 581);
			this->solution->TabIndex = 1;
			this->solution->Text = L"Решение";
			this->solution->UseVisualStyleBackColor = true;
			// 
			// dataGridView
			// 
			this->dataGridView->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView->Location = System::Drawing::Point(3, 3);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->RowTemplate->ReadOnly = true;
			this->dataGridView->Size = System::Drawing::Size(1248, 575);
			this->dataGridView->TabIndex = 0;
			// 
			// calculator
			// 
			this->calculator->Controls->Add(this->listEquations);
			this->calculator->Controls->Add(this->removeEquation);
			this->calculator->Controls->Add(this->upArrow);
			this->calculator->Controls->Add(this->variables);
			this->calculator->Controls->Add(this->downArrow);
			this->calculator->Controls->Add(this->d);
			this->calculator->Controls->Add(this->operators);
			this->calculator->Controls->Add(this->a);
			this->calculator->Controls->Add(this->numberOfString);
			this->calculator->Controls->Add(this->c);
			this->calculator->Controls->Add(this->OR);
			this->calculator->Controls->Add(this->b);
			this->calculator->Controls->Add(this->implication);
			this->calculator->Controls->Add(this->z);
			this->calculator->Controls->Add(this->equivalence);
			this->calculator->Controls->Add(this->k);
			this->calculator->Controls->Add(this->peirce_arrow);
			this->calculator->Controls->Add(this->y);
			this->calculator->Controls->Add(this->sheffer_stroke);
			this->calculator->Controls->Add(this->x);
			this->calculator->Controls->Add(this->rImplication);
			this->calculator->Controls->Add(this->equals);
			this->calculator->Controls->Add(this->addEquation);
			this->calculator->Controls->Add(this->lbracket);
			this->calculator->Controls->Add(this->solve);
			this->calculator->Controls->Add(this->rbracket);
			this->calculator->Controls->Add(this->one);
			this->calculator->Controls->Add(this->AND);
			this->calculator->Controls->Add(this->zero);
			this->calculator->Controls->Add(this->del);
			this->calculator->Controls->Add(this->XOR);
			this->calculator->Controls->Add(this->NOT);
			this->calculator->Location = System::Drawing::Point(4, 28);
			this->calculator->Name = L"calculator";
			this->calculator->Padding = System::Windows::Forms::Padding(3);
			this->calculator->Size = System::Drawing::Size(1254, 581);
			this->calculator->TabIndex = 0;
			this->calculator->Text = L"Калькулятор";
			this->calculator->UseVisualStyleBackColor = true;
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->calculator);
			this->tabControl->Controls->Add(this->solution);
			this->tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl->Location = System::Drawing::Point(0, 0);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(1262, 613);
			this->tabControl->TabIndex = 32;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 613);
			this->Controls->Add(this->tabControl);
			this->Name = L"MyForm";
			this->Text = L"Решение системы булевых уравнений";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->solution->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->calculator->ResumeLayout(false);
			this->calculator->PerformLayout();
			this->tabControl->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void not_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void or_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void and_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void implication_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void rImplication_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void xor_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void equivalence_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void peirce_arrow_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void sheffer_stroke_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void lbracket_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void rbracket_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void equals_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void one_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void a_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void b_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void c_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void d_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void x_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void y_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void z_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void k_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void removeEquation_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void addEquation_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void solve_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void upArrow_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void downArrow_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
};
}

#endif // MY_FORM
