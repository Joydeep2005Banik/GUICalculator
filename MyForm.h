#pragma once

namespace GUICalculator {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ result_output;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ Value1_input;
	private: System::Windows::Forms::TextBox^ Value2_input;


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::CheckBox^ check_sum;
	private: System::Windows::Forms::CheckBox^ check_sub;
	private: System::Windows::Forms::CheckBox^ check_divide;
	private: System::Windows::Forms::CheckBox^ check_mul;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->result_output = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Value1_input = (gcnew System::Windows::Forms::TextBox());
			this->Value2_input = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->check_sum = (gcnew System::Windows::Forms::CheckBox());
			this->check_sub = (gcnew System::Windows::Forms::CheckBox());
			this->check_divide = (gcnew System::Windows::Forms::CheckBox());
			this->check_mul = (gcnew System::Windows::Forms::CheckBox());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(146, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"My_Calculator";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(146, 304);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Result";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// result_output
			// 
			this->result_output->AutoSize = true;
			this->result_output->Location = System::Drawing::Point(406, 304);
			this->result_output->Name = L"result_output";
			this->result_output->Size = System::Drawing::Size(60, 16);
			this->result_output->TabIndex = 2;
			this->result_output->Text = L"No_Input";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(225, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 57);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Value1_input
			// 
			this->Value1_input->Location = System::Drawing::Point(210, 74);
			this->Value1_input->Name = L"Value1_input";
			this->Value1_input->Size = System::Drawing::Size(175, 22);
			this->Value1_input->TabIndex = 4;
			// 
			// Value2_input
			// 
			this->Value2_input->Location = System::Drawing::Point(210, 164);
			this->Value2_input->Name = L"Value2_input";
			this->Value2_input->Size = System::Drawing::Size(179, 22);
			this->Value2_input->TabIndex = 5;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->check_sum);
			this->flowLayoutPanel1->Controls->Add(this->check_sub);
			this->flowLayoutPanel1->Controls->Add(this->check_divide);
			this->flowLayoutPanel1->Controls->Add(this->check_mul);
			this->flowLayoutPanel1->Location = System::Drawing::Point(210, 102);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(175, 56);
			this->flowLayoutPanel1->TabIndex = 6;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel1_Paint);
			// 
			// check_sum
			// 
			this->check_sum->AutoSize = true;
			this->check_sum->Location = System::Drawing::Point(3, 3);
			this->check_sum->Name = L"check_sum";
			this->check_sum->Size = System::Drawing::Size(36, 20);
			this->check_sum->TabIndex = 0;
			this->check_sum->Text = L"+";
			this->check_sum->UseVisualStyleBackColor = true;
			// 
			// check_sub
			// 
			this->check_sub->AutoSize = true;
			this->check_sub->Location = System::Drawing::Point(45, 3);
			this->check_sub->Name = L"check_sub";
			this->check_sub->Size = System::Drawing::Size(33, 20);
			this->check_sub->TabIndex = 1;
			this->check_sub->Text = L"-";
			this->check_sub->UseVisualStyleBackColor = true;
			// 
			// check_divide
			// 
			this->check_divide->AutoSize = true;
			this->check_divide->Location = System::Drawing::Point(84, 3);
			this->check_divide->Name = L"check_divide";
			this->check_divide->Size = System::Drawing::Size(33, 20);
			this->check_divide->TabIndex = 2;
			this->check_divide->Text = L"/";
			this->check_divide->UseVisualStyleBackColor = true;
			// 
			// check_mul
			// 
			this->check_mul->AutoSize = true;
			this->check_mul->Location = System::Drawing::Point(123, 3);
			this->check_mul->Name = L"check_mul";
			this->check_mul->Size = System::Drawing::Size(34, 20);
			this->check_mul->TabIndex = 3;
			this->check_mul->Text = L"*";
			this->check_mul->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 402);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->Value2_input);
			this->Controls->Add(this->Value1_input);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->result_output);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	float value1 = (float)System::Convert::ToDouble(Value1_input->Text);
	float value2 = (float)System::Convert::ToDouble(Value2_input->Text);

	float result=0.0;

	//Check the CheckBoxes values and excute the respective operation
	if (bool(check_sum->CheckState)) {
		//Do the sum operation
		result = value1 + value2;
	}
	if (bool(check_sub->CheckState)) {
		//Do the subtraction operation
		result = value1 - value2;
	}
	if (bool(check_mul->CheckState)) {
		//Do the multiplication operation
		result = value1 * value2;
	}
	if (bool(check_divide->CheckState)) {
		//Do the division operation
		result = value1 / value2;
	}

	//Update output label
	result_output->Text = System::Convert::ToString(result);
}
};
}
