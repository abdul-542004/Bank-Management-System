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
	/// Summary for WithdrawCashForm
	/// </summary>
	public ref class WithdrawCashForm : public System::Windows::Forms::Form
	{
	public:
		WithdrawCashForm(void)
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
		~WithdrawCashForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ withdrawalButton;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->withdrawalButton = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// withdrawalButton
			// 
			this->withdrawalButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->withdrawalButton->Location = System::Drawing::Point(337, 506);
			this->withdrawalButton->Margin = System::Windows::Forms::Padding(4);
			this->withdrawalButton->Name = L"withdrawalButton";
			this->withdrawalButton->Size = System::Drawing::Size(160, 43);
			this->withdrawalButton->TabIndex = 29;
			this->withdrawalButton->Text = L"Withdraw";
			this->withdrawalButton->UseVisualStyleBackColor = true;
			this->withdrawalButton->Click += gcnew System::EventHandler(this, &WithdrawCashForm::withdrawalButton_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(434, 371);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(328, 28);
			this->textBox4->TabIndex = 28;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(434, 282);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(328, 28);
			this->textBox3->TabIndex = 27;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(434, 193);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(328, 28);
			this->textBox1->TabIndex = 26;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label8->Location = System::Drawing::Point(96, 361);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(293, 32);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Enter Withdrawal Amount:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label7->Location = System::Drawing::Point(96, 272);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 32);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Enter Pin:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label2->Location = System::Drawing::Point(96, 183);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(264, 32);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Enter Account Number:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold SemiConden", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(95, 90);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 41);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Withdraw Funds";
			// 
			// WithdrawCashForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(912, 900);
			this->Controls->Add(this->withdrawalButton);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"WithdrawCashForm";
			this->Text = L"WithdrawCashForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void withdrawalButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the input values from the text boxes
		int accountNumber = Convert::ToInt32(textBox1->Text);  // Account Number
		String^ enteredPin = textBox3->Text;  // PIN
		double withdrawalAmount = Convert::ToDouble(textBox4->Text);  // Withdrawal Amount

		// Call the Withdraw function (assuming it's part of a global or accessible Tree object)
		bool success = Storage::storageTree->Withdraw(accountNumber, enteredPin, withdrawalAmount);

		// Show confirmation or error message based on success
		if (success) {
			// If withdrawal is successful, show the new balance in a MessageBox
			BankCustomer^ customer = Storage::storageTree->Search(accountNumber);  // Search for the customer
			MessageBox::Show("Withdrawal successful!\nNew Balance: $" + customer->balance.ToString("F2"),
				"Withdrawal Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			// If the withdrawal fails (due to invalid PIN, insufficient funds, or other reasons)
			MessageBox::Show("Withdrawal failed. Please check your account number, PIN, or balance.",
				"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


};
}
