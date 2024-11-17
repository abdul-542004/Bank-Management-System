#pragma once
#include "BankCustomer.h"
namespace BankManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateAccount
	/// </summary>
	public ref class CreateAccount : public System::Windows::Forms::Form
	{
	public:
		
		CreateAccount(void)
		{
			InitializeComponent();
			this->comboBox1->Items->Add("Male");
			this->comboBox1->Items->Add("Female");
			this->comboBox2->Items->Add("Current");
			this->comboBox2->Items->Add("Saving");
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::Button^ resetButton;



	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;

	protected:

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold SemiConden", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(48, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Create New Account";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label2->Location = System::Drawing::Point(49, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(247, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Enter Customer\'s Full Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label3->Location = System::Drawing::Point(49, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter CNIC:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label4->Location = System::Drawing::Point(49, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Specify Gender: ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label5->Location = System::Drawing::Point(49, 288);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 25);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Account Type:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label6->Location = System::Drawing::Point(49, 338);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Account Number:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label7->Location = System::Drawing::Point(49, 388);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 25);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Enter Pin:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label8->Location = System::Drawing::Point(49, 438);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(220, 25);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Enter Balance (Min. 500):";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(302, 143);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(247, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(302, 188);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(247, 20);
			this->textBox2->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(302, 238);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(247, 21);
			this->comboBox1->TabIndex = 10;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(302, 288);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(247, 21);
			this->comboBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(302, 393);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(247, 20);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(302, 443);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(247, 20);
			this->textBox4->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(297, 338);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(350, 21);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Your Account Number will be displayed here";
			// 
			// createButton
			// 
			this->createButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createButton->Location = System::Drawing::Point(107, 537);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(120, 35);
			this->createButton->TabIndex = 15;
			this->createButton->Text = L"Create";
			this->createButton->UseVisualStyleBackColor = true;
			this->createButton->Click += gcnew System::EventHandler(this, &CreateAccount::createButton_Click);
			// 
			// resetButton
			// 
			this->resetButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resetButton->Location = System::Drawing::Point(301, 537);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(120, 35);
			this->resetButton->TabIndex = 16;
			this->resetButton->Text = L"Reset";
			this->resetButton->UseVisualStyleBackColor = true;
			this->resetButton->Click += gcnew System::EventHandler(this, &CreateAccount::resetButton_Click);
			// 
			// CreateAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(684, 731);
			this->Controls->Add(this->resetButton);
			this->Controls->Add(this->createButton);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CreateAccount";
			this->Text = L"CreateAccount";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = textBox1->Text;
	String^ cnic = textBox2->Text;
	String^ gender = comboBox1->Text;
	String^ accountType = comboBox2->Text;
	String^ pin = textBox3->Text;
	double balance;



	if (String::IsNullOrWhiteSpace(name) || String::IsNullOrWhiteSpace(cnic) ||
		String::IsNullOrWhiteSpace(gender) || String::IsNullOrWhiteSpace(accountType) ||
		String::IsNullOrWhiteSpace(pin) || !Double::TryParse(textBox4->Text, balance))
	{
		MessageBox::Show(L"Please fill all fields correctly!", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (balance < 500)
	{
		MessageBox::Show(L"Minimum balance is 500.", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// insertion code goes here.


}
private: System::Void resetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Clear();
	this->textBox2->Clear();
	this->comboBox1->SelectedIndex = -1;
	this->comboBox2->SelectedIndex = -1;
	this->textBox3->Clear();
	this->textBox4->Clear();
	this->label9->Text = L"Your Account Number will be displayed here";
}
};
}
