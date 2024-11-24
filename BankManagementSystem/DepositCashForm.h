#pragma once
#include "Storage.h"
namespace BankManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DepositCashForm
	/// </summary>
	public ref class DepositCashForm : public System::Windows::Forms::Form
	{
	public:
		DepositCashForm(void)
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
		~DepositCashForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox4;
	protected:
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ depositButton;


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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->depositButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(438, 351);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(328, 28);
			this->textBox4->TabIndex = 20;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(438, 262);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(328, 28);
			this->textBox3->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(438, 173);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(328, 28);
			this->textBox1->TabIndex = 18;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label8->Location = System::Drawing::Point(100, 341);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(256, 32);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Enter Deposit Amount:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label7->Location = System::Drawing::Point(100, 252);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 32);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Enter Pin:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label2->Location = System::Drawing::Point(100, 163);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(264, 32);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Enter Account Number:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold SemiConden", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(99, 70);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 41);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Deposit Funds";
			// 
			// depositButton
			// 
			this->depositButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depositButton->Location = System::Drawing::Point(341, 486);
			this->depositButton->Margin = System::Windows::Forms::Padding(4);
			this->depositButton->Name = L"depositButton";
			this->depositButton->Size = System::Drawing::Size(160, 43);
			this->depositButton->TabIndex = 21;
			this->depositButton->Text = L"Deposit";
			this->depositButton->UseVisualStyleBackColor = true;
			this->depositButton->Click += gcnew System::EventHandler(this, &DepositCashForm::depositButton_Click);
			// 
			// DepositCashForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(912, 900);
			this->Controls->Add(this->depositButton);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DepositCashForm";
			this->Text = L"DepositCashForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	






	private: System::Void depositButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Retrieve the account number, PIN, and deposit amount from the form inputs
		String^ accountNumberText = textBox1->Text;
		String^ pinText = textBox3->Text;
		String^ depositAmountText = textBox4->Text;

		int accountNumber;
		double depositAmount;

		// Validate account number
		if (!Int32::TryParse(accountNumberText, accountNumber)) {
			MessageBox::Show(L"Please enter a valid account number.", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validate PIN (assumes PIN should be a numeric value)
		if (String::IsNullOrWhiteSpace(pinText)) {
			MessageBox::Show(L"Please enter the PIN.", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validate deposit amount
		if (!Double::TryParse(depositAmountText, depositAmount) || depositAmount <= 0) {
			MessageBox::Show(L"Please enter a valid deposit amount greater than zero.", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Call the Deposit function from the Storage class
		bool success = Storage::storageTree->Deposit(accountNumber, pinText, depositAmount);

		// Handle the result
		if (success) {
			MessageBox::Show(L"Deposit successful!", L"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			
		}
		else {
			MessageBox::Show(L"Invalid account number or PIN, or deposit failed.", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

};
}
