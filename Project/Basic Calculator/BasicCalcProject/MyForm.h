#pragma once
#include <cmath>
#include "MyForm1.h"

namespace BasicCalcProject {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Backspace;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Label^ memLabel;
	private: System::Windows::Forms::Label^ NumberSystem;
	private: System::Windows::Forms::Button^ ToBinary;
	private: System::Windows::Forms::Button^ ToHexa;
	private: System::Windows::Forms::Button^ ToDecimal;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ ShiftButton;






	private: System::Windows::Forms::Button^ FactorialFn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button27;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Backspace = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->memLabel = (gcnew System::Windows::Forms::Label());
			this->NumberSystem = (gcnew System::Windows::Forms::Label());
			this->ToBinary = (gcnew System::Windows::Forms::Button());
			this->ToHexa = (gcnew System::Windows::Forms::Button());
			this->ToDecimal = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->ShiftButton = (gcnew System::Windows::Forms::Button());
			this->FactorialFn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->ForeColor = System::Drawing::Color::BurlyWood;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->ForeColor = System::Drawing::Color::BurlyWood;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->ForeColor = System::Drawing::Color::BurlyWood;
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->ForeColor = System::Drawing::Color::BurlyWood;
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->ForeColor = System::Drawing::Color::DarkOrange;
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::KeyPad);
			// 
			// button6
			// 
			resources->ApplyResources(this->button6, L"button6");
			this->button6->ForeColor = System::Drawing::Color::DarkOrange;
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::KeyPad);
			// 
			// button7
			// 
			resources->ApplyResources(this->button7, L"button7");
			this->button7->ForeColor = System::Drawing::Color::DarkOrange;
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::KeyPad);
			// 
			// button8
			// 
			resources->ApplyResources(this->button8, L"button8");
			this->button8->ForeColor = System::Drawing::Color::DarkOrange;
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::KeyPad);
			// 
			// button9
			// 
			resources->ApplyResources(this->button9, L"button9");
			this->button9->ForeColor = System::Drawing::Color::DarkOrange;
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::KeyPad);
			// 
			// button10
			// 
			resources->ApplyResources(this->button10, L"button10");
			this->button10->ForeColor = System::Drawing::Color::DarkOrange;
			this->button10->Name = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::KeyPad);
			// 
			// button11
			// 
			resources->ApplyResources(this->button11, L"button11");
			this->button11->ForeColor = System::Drawing::Color::DarkOrange;
			this->button11->Name = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::KeyPad);
			// 
			// button12
			// 
			resources->ApplyResources(this->button12, L"button12");
			this->button12->ForeColor = System::Drawing::Color::DarkOrange;
			this->button12->Name = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::KeyPad);
			// 
			// button13
			// 
			resources->ApplyResources(this->button13, L"button13");
			this->button13->ForeColor = System::Drawing::Color::DarkOrange;
			this->button13->Name = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::KeyPad);
			// 
			// button14
			// 
			resources->ApplyResources(this->button14, L"button14");
			this->button14->ForeColor = System::Drawing::Color::DarkOrange;
			this->button14->Name = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::KeyPad);
			// 
			// button15
			// 
			resources->ApplyResources(this->button15, L"button15");
			this->button15->ForeColor = System::Drawing::Color::DarkOrange;
			this->button15->Name = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::KeyPad);
			// 
			// button16
			// 
			resources->ApplyResources(this->button16, L"button16");
			this->button16->ForeColor = System::Drawing::Color::DarkOrange;
			this->button16->Name = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::KeyPad);
			// 
			// button17
			// 
			resources->ApplyResources(this->button17, L"button17");
			this->button17->ForeColor = System::Drawing::Color::BurlyWood;
			this->button17->Name = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// button18
			// 
			resources->ApplyResources(this->button18, L"button18");
			this->button18->ForeColor = System::Drawing::Color::BurlyWood;
			this->button18->Name = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::EqualsButton);
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			// 
			// Backspace
			// 
			this->Backspace->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->Backspace, L"Backspace");
			this->Backspace->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Backspace->Name = L"Backspace";
			this->Backspace->UseVisualStyleBackColor = false;
			this->Backspace->Click += gcnew System::EventHandler(this, &MyForm::Backspace_Click);
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->Clear, L"Clear");
			this->Clear->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Clear->Name = L"Clear";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// button19
			// 
			resources->ApplyResources(this->button19, L"button19");
			this->button19->ForeColor = System::Drawing::Color::BurlyWood;
			this->button19->Name = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::SquareRoot);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->button20, L"button20");
			this->button20->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button20->Name = L"button20";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::Memory);
			// 
			// button21
			// 
			resources->ApplyResources(this->button21, L"button21");
			this->button21->ForeColor = System::Drawing::Color::BurlyWood;
			this->button21->Name = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::Memory);
			// 
			// button22
			// 
			resources->ApplyResources(this->button22, L"button22");
			this->button22->ForeColor = System::Drawing::Color::BurlyWood;
			this->button22->Name = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::Memory);
			// 
			// button23
			// 
			resources->ApplyResources(this->button23, L"button23");
			this->button23->ForeColor = System::Drawing::Color::BurlyWood;
			this->button23->Name = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::Memory);
			// 
			// memLabel
			// 
			resources->ApplyResources(this->memLabel, L"memLabel");
			this->memLabel->BackColor = System::Drawing::Color::Black;
			this->memLabel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->memLabel->ForeColor = System::Drawing::Color::Red;
			this->memLabel->Name = L"memLabel";
			// 
			// NumberSystem
			// 
			resources->ApplyResources(this->NumberSystem, L"NumberSystem");
			this->NumberSystem->BackColor = System::Drawing::Color::Black;
			this->NumberSystem->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->NumberSystem->ForeColor = System::Drawing::Color::Red;
			this->NumberSystem->Name = L"NumberSystem";
			// 
			// ToBinary
			// 
			this->ToBinary->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->ToBinary, L"ToBinary");
			this->ToBinary->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->ToBinary->Name = L"ToBinary";
			this->ToBinary->UseVisualStyleBackColor = false;
			this->ToBinary->Click += gcnew System::EventHandler(this, &MyForm::ToBinary_Click);
			// 
			// ToHexa
			// 
			this->ToHexa->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->ToHexa, L"ToHexa");
			this->ToHexa->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->ToHexa->Name = L"ToHexa";
			this->ToHexa->UseVisualStyleBackColor = false;
			this->ToHexa->Click += gcnew System::EventHandler(this, &MyForm::ToHexa_Click);
			// 
			// ToDecimal
			// 
			this->ToDecimal->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->ToDecimal, L"ToDecimal");
			this->ToDecimal->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->ToDecimal->Name = L"ToDecimal";
			this->ToDecimal->UseVisualStyleBackColor = false;
			this->ToDecimal->Click += gcnew System::EventHandler(this, &MyForm::ToDecimal_Click);
			// 
			// button24
			// 
			resources->ApplyResources(this->button24, L"button24");
			this->button24->ForeColor = System::Drawing::Color::BurlyWood;
			this->button24->Name = L"button24";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::Trig);
			// 
			// button25
			// 
			resources->ApplyResources(this->button25, L"button25");
			this->button25->ForeColor = System::Drawing::Color::BurlyWood;
			this->button25->Name = L"button25";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::Trig);
			// 
			// button26
			// 
			resources->ApplyResources(this->button26, L"button26");
			this->button26->ForeColor = System::Drawing::Color::BurlyWood;
			this->button26->Name = L"button26";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::Trig);
			// 
			// ShiftButton
			// 
			resources->ApplyResources(this->ShiftButton, L"ShiftButton");
			this->ShiftButton->ForeColor = System::Drawing::Color::BurlyWood;
			this->ShiftButton->Name = L"ShiftButton";
			this->ShiftButton->UseVisualStyleBackColor = true;
			this->ShiftButton->Click += gcnew System::EventHandler(this, &MyForm::ShiftButton_Click);
			// 
			// FactorialFn
			// 
			resources->ApplyResources(this->FactorialFn, L"FactorialFn");
			this->FactorialFn->ForeColor = System::Drawing::Color::BurlyWood;
			this->FactorialFn->Name = L"FactorialFn";
			this->FactorialFn->UseVisualStyleBackColor = true;
			this->FactorialFn->Click += gcnew System::EventHandler(this, &MyForm::FactorialFn_Click);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->button29, L"button29");
			this->button29->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button29->Name = L"button29";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Name = L"label2";
			// 
			// button30
			// 
			resources->ApplyResources(this->button30, L"button30");
			this->button30->ForeColor = System::Drawing::Color::BurlyWood;
			this->button30->Name = L"button30";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Black;
			resources->ApplyResources(this->button27, L"button27");
			this->button27->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button27->Name = L"button27";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->FactorialFn);
			this->Controls->Add(this->ShiftButton);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->ToDecimal);
			this->Controls->Add(this->ToHexa);
			this->Controls->Add(this->ToBinary);
			this->Controls->Add(this->NumberSystem);
			this->Controls->Add(this->memLabel);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->Backspace);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double n1, n2, ans, memory = 0, revAns;
		String^ op;
		long double pi = 3.141592653589793238462643;
		Double x;

		//FOR INFINITE OPERATIONS
		String^ lastOp = "n";

		bool shift = 0;
		bool rad = 0;


		//textBox1 -> Text = output(var);

		String^ output(double num) {
			String^ str = System::Convert::ToString(num);
			String^ res = "";
			revAns = num;

			int sz = str->Length, idx = 0;
			if (str->Contains("E")) {
				//E is 10, what comes after the + is the power

				// n.nn .. nnE+nn

				//pushing str's elements until we reach 'E'
				while (str[idx] != 'E') {
					res = res + str[idx];
					idx++;
				}
				idx++;// skipping the '+'
				res = res + " ×10^";
				while (idx < sz) {
					res = res + str[idx];
					idx++;
				}
			}
			else res = str;
			return res;
		}
		void revOutput() {
			if (textBox1->Text->Contains("×")) {
				textBox1->Text = System::Convert::ToString(revAns);
			}
		}

		void resetNumSystem() {
			/*
			resets the number system to DEC. and then retrieves the value previously saved
			in binary and hexa functions from n1
			*/
			if (NumberSystem->Text != "DEC") {
				textBox1->Text = System::Convert::ToString(n1);
			}
			NumberSystem->Text = "DEC";
		}

		//OMAR MAMDOUH
	private: System::Void KeyPad(System::Object^ sender, System::EventArgs^ e) {
		revOutput();
		resetNumSystem();

		Button^ nums = safe_cast<Button^>(sender);

		if (textBox1->Text == "Undefined") textBox1->Text = "";

		if (nums->Text == ".") {
			if (!textBox1->Text->Contains(".")) textBox1->Text += ".";
		}
		else if (nums->Text == "+/-") {
			if (textBox1->Text == "0") textBox1->Text = "-";

			else {
				if (textBox1->Text->Contains("-")) {
					textBox1->Text = textBox1->Text->Remove(0, 1);
				}
				else textBox1->Text = "-" + textBox1->Text;
			}
		}
		else {
			if (textBox1->Text == "0") textBox1->Text = nums->Text;
			else textBox1->Text += nums->Text;
		}
	}
		   //MOHAMED SALAH
	private: System::Void Operators(System::Object^ sender, System::EventArgs^ e) {
		revOutput();
		resetNumSystem();

		Button^ NumOp = safe_cast<Button^>(sender);
		op = NumOp->Text;

		double num;

		if (textBox1->Text == "Undefined" || textBox1->Text == "") { textBox1->Text = ""; return; }
		else {
			num = System::Convert::ToDouble(textBox1->Text);
		}

		textBox1->Text = "";

		if (lastOp == "n") n1 = num;
		else {
			if (lastOp == "+") n1 += num;
			if (lastOp == "-") n1 -= num;
			if (lastOp == "×") n1 *= num;
			if (lastOp == "%") n1 = (long long)n1 % (long long)num;
			if (lastOp == "÷") {
				if (num == 0) {
					textBox1->Text = "Undefined";
					lastOp = "n";
					n1 = ans = 0;
				}
				else n1 /= num;
			}
			if (lastOp == "^") {
				double base = 1, power = num;
				if (power < 0) {
					while (power != 0) { base /= n1; power++; }
				}
				else if (power > 0) {
					while (power != 0) { base *= n1; power--; }
				}
				n1 = base;
			}
		}
		lastOp = op;
	}
		   //YOUSEF AHMED
	private: System::Void EqualsButton(System::Object^ sender, System::EventArgs^ e) {
		revOutput();
		resetNumSystem();
		if (textBox1->Text == "" || textBox1->Text == "Undefined" || textBox1->Text == ".") return;

		// if there's no n2
		if (textBox1->Text == "") { textBox1->Text = output(n1); return; }

		n2 = Double::Parse(textBox1->Text);

		// if there was no operation pressed
		if (op == "n") { textBox1->Text = output(n2); return; }

		if (op == "+") {
			ans = n1 + n2;
			textBox1->Text = output(ans);
		}
		else if (op == "-") {
			ans = n1 - n2;
			textBox1->Text = output(ans);
		}
		else if (op == "×") {
			ans = n1 * n2;
			textBox1->Text = output(ans);
		}
		else if (op == "÷") {
			if (n2 == 0) {
				textBox1->Text = "Undefined";

				// //MOHAMED SALAH - added for operators resetting
				n1 = ans = 0;
			}

			else {
				ans = n1 / n2;
				textBox1->Text = output(ans);
			}
		}
		else if (op == "%") {
			ans = (long long)n1 % (long long)n2;
			textBox1->Text = output(ans);
		}
		else if (op == "^") {
			ans = 1;
			if (n2 == 0) {
				ans = 1;
			}
			else if (n2 < 0) {
				n2 *= -1;

				for (int i = 1; i <= n2; i++)ans /= n1;

			}
			else
			{
				for (int i = 1; i <= n2; i++)ans *= n1;
			}
			textBox1->Text = output(ans);
		}


		//MOHAMED SALAH - added for operators resetting
		op = lastOp = "n";

	}
		   //OMAR BEHIRY
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {

		textBox1->Text = "0";

		//MOHAMED SALAH - added for operators resetting
		op = lastOp = "n"; n1 = n2 = ans = 0;
		resetNumSystem();
	}
		   //OMAR BEHIRY
	private: System::Void Backspace_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length > 0) {
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
		}
	}
		   //KARIM MOHAMAED
	private: System::Void SquareRoot(System::Object^ sender, System::EventArgs^ e) {
		revOutput();
		resetNumSystem();
		if (textBox1->Text == "" || textBox1->Text == "Undefined" || textBox1->Text == ".") return;

		double num = System::Convert::ToDouble(textBox1->Text);
		textBox1->Text = output(sqrt(num));
	}
		   //KARIM EHAB
	private: System::Void Memory(System::Object^ sender, System::EventArgs^ e) {
		revOutput();
		resetNumSystem();


		Button^ key = safe_cast<Button^>(sender);


		String^ m = key->Text;


		if (m == "MC") {

			memory = 0;
			memLabel->Text = " ";
		}
		else if (m == "MR") {

			textBox1->Text = output(memory);;
		}
		else if (m == "M+") {
			if (textBox1->Text == "" || textBox1->Text == "Undefined") return;
			memory += System::Convert::ToDouble(textBox1->Text);
			memLabel->Text = "M";
			textBox1->Text = "";
		}
		else if (m == "M-") {
			if (textBox1->Text == "" || textBox1->Text == "Undefined" || textBox1->Text == ".") return;
			memory -= System::Convert::ToDouble(textBox1->Text);
			memLabel->Text = "M";
			textBox1->Text = "";
		}
	}
		   //MO & OMAR MAMDOUH
	private: System::Void ToBinary_Click(System::Object^ sender, System::EventArgs^ e) {
		revOutput();
		resetNumSystem();
		if (textBox1->Text == "" || textBox1->Text == "Undefined" || textBox1->Text == ".") return;

		n1 = System::Convert::ToDouble(textBox1->Text);
		// saving the original value to n1

		long long num = (long long)n1;
		//casting the long long value to the num to operate on it.

		String^ binary;
		bool nve = 0;
		if (num < 0) {
			num = -num;
			nve = 1;
		}
		//checking if the number is negative


		while (num > 0) {
			if (num % 2 == 0) binary = "0" + binary;
			else binary = "1" + binary;
			num /= 2;
		}
		//binary processing


		NumberSystem->Text = "BIN"; // setting the label to "BIN"
		textBox1->Text = (nve) ? "-(" + binary + ")" : binary; // representing the number
		// adding -(num) if negative
	}
		   //MO
	private: System::Void ToHexa_Click(System::Object^ sender, System::EventArgs^ e) {
		revOutput();
		resetNumSystem();
		if (textBox1->Text == "" || textBox1->Text == "Undefined" || textBox1->Text == ".") return;

		n1 = System::Convert::ToDouble(textBox1->Text);

		long long num = (long long)n1;

		String^ hexNum;
		String^ hexa = "0123456789ABCDEF";

		bool nve = 0;

		if (num < 0) {
			num = -num;
			nve = 1;
		}

		while (num > 0) {
			hexNum = hexa[num % 16] + hexNum;

			num /= 16;
		}
		NumberSystem->Text = "HEX";
		textBox1->Text = (nve) ? "-(" + hexNum + ")" : hexNum;
	}
		   //MO
	private: System::Void ToDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
		revOutput();
		if (textBox1->Text == "" || textBox1->Text == "Undefined" || textBox1->Text == ".") return;
		resetNumSystem();
	}
		   //OMAR MAMDOUH & KARIM MOHAMED & MOHAMED SALAH
	private: System::Void Trig(System::Object^ sender, System::EventArgs^ e) {
		revOutput();
		resetNumSystem();
		if (textBox1->Text == "" || textBox1->Text == "Undefined" || textBox1->Text == ".") return;

		Button^ key = safe_cast<Button^>(sender);
		String^ fn = key->Text;
		// fn now contains the name of the trig function (sin, cos, tan)



		double num = System::Convert::ToDouble(textBox1->Text);

		bool noTan = 0;
		bool zeroTan = 0;
		if (((long long)num / 90) % 2 != 0) {
			if ((long long)num == num) {
				noTan = 1;
			}
		}
		if ((long long)num % 180 == 0) {
			if ((long long)num == num) {
				zeroTan = 1;
			}
		}


		double res;

		if (shift) {

			if (fn == "arsin") {
				if (num < -1 || num > 1) { textBox1->Text = "Undefined"; return; }
				if (rad)res = asin(num);
				else res = asin(num) * 180 / pi;
			}
			if (fn == "arcos") {
				if (num < -1 || num > 1) { textBox1->Text = "Undefined"; return; }
				if (rad)res = acos(num);
				else res = acos(num) * 180 / pi;
			}
			if (fn == "artan") {
				if (rad)res = atan(num);
				else res = atan(num) * 180 / pi;
			}
		}
		else {



			if (rad)num = num;

			else num = (num * pi) / 180;
			if (fn == "sin") {
				if (zeroTan) { textBox1->Text = "0";return; }
				else

					res = sin(num);
			}
			if (fn == "cos") {
				res = cos(num);
			}
			if (fn == "tan") {
				if (zeroTan) { textBox1->Text = "0"; return; }
				if (noTan) { textBox1->Text = "Undefined"; return; }
				res = tan(num);
			}
		}

		textBox1->Text = output(res);

		shift = 0;

	}
		   //KARIM MOHAMED & OMAR BEHIRY
	private: System::Void ShiftButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!shift) {
			shift = 1;
			label1->Text = "Shift";
			button24->Text = "arsin";
			button25->Text = "arcos";
			button26->Text = "artan";
		}
		else
		{
			shift = 0;
			label1->Text = "";
			button24->Text = "sin";
			button25->Text = "cos";
			button26->Text = "tan";
		}



	}
		   //KARIM MOHAMED
	private: System::Void FactorialFn_Click(System::Object^ sender, System::EventArgs^ e) {
		revOutput();
		resetNumSystem();
		if (textBox1->Text == "" || textBox1->Text == "Undefined" || textBox1->Text == ".") return;
		double num = System::Convert::ToDouble(textBox1->Text);

		if (num < 0) { textBox1->Text = "Undefined"; return; }

		Double anss = 1;

		for (long long j = 1; j <= (long long)num; j++)anss *= j;

		textBox1->Text = output(anss);
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
		   // KARIM MOHAMED
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		revOutput();
		resetNumSystem();
		if (!rad) {
			rad = 1;
			label2->Text = "RAD";
			button29->Text = "deg";

		}
		else {
			rad = 0;
			label2->Text = "DEG";
			button29->Text = "rad";


		}

	}
		   //KARIM EHAB
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ f1 = gcnew MyForm1;
		f1->Show();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
