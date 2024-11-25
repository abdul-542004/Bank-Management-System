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
	/// Summary for ATMServices
	/// </summary>
	public ref class ATMServices : public System::Windows::Forms::Form
	{
	public:

		BankCustomer^ customer; 

		ATMServices(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		ATMServices(BankCustomer^ customer)
		{
			InitializeComponent();
			this->customer = customer;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ATMServices()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ withdrawalButton;
	protected:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ sendButton;
	private: System::Windows::Forms::Button^ checkBalanceBtn;




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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->checkBalanceBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->sendButton = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// withdrawalButton
			// 
			this->withdrawalButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->withdrawalButton->Location = System::Drawing::Point(286, 375);
			this->withdrawalButton->Margin = System::Windows::Forms::Padding(4);
			this->withdrawalButton->Name = L"withdrawalButton";
			this->withdrawalButton->Size = System::Drawing::Size(160, 43);
			this->withdrawalButton->TabIndex = 32;
			this->withdrawalButton->Text = L"Withdraw";
			this->withdrawalButton->UseVisualStyleBackColor = true;
			this->withdrawalButton->Click += gcnew System::EventHandler(this, &ATMServices::withdrawalButton_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(221, 260);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(287, 28);
			this->textBox4->TabIndex = 31;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label8->Location = System::Drawing::Point(215, 179);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(293, 32);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Enter Withdrawal Amount:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(264, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 48);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Welcome!";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(748, 503);
			this->tabControl1->TabIndex = 34;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Azure;
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->withdrawalButton);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Location = System::Drawing::Point(4, 38);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(740, 461);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Cash Withdrawal";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Azure;
			this->tabPage2->Controls->Add(this->checkBalanceBtn);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 38);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(740, 461);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Balance Inquiry";
			// 
			// checkBalanceBtn
			// 
			this->checkBalanceBtn->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBalanceBtn->Location = System::Drawing::Point(266, 338);
			this->checkBalanceBtn->Margin = System::Windows::Forms::Padding(4);
			this->checkBalanceBtn->Name = L"checkBalanceBtn";
			this->checkBalanceBtn->Size = System::Drawing::Size(160, 43);
			this->checkBalanceBtn->TabIndex = 19;
			this->checkBalanceBtn->Text = L"Check";
			this->checkBalanceBtn->UseVisualStyleBackColor = true;
			this->checkBalanceBtn->Click += gcnew System::EventHandler(this, &ATMServices::checkBalanceBtn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(274, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 50);
			this->label3->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(59, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(446, 50);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Your Account Balance is:";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Azure;
			this->tabPage3->Controls->Add(this->sendButton);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Location = System::Drawing::Point(4, 38);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(740, 461);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Bank Transfer";
			// 
			// sendButton
			// 
			this->sendButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sendButton->Location = System::Drawing::Point(244, 358);
			this->sendButton->Margin = System::Windows::Forms::Padding(4);
			this->sendButton->Name = L"sendButton";
			this->sendButton->Size = System::Drawing::Size(160, 43);
			this->sendButton->TabIndex = 20;
			this->sendButton->Text = L"Send";
			this->sendButton->UseVisualStyleBackColor = true;
			this->sendButton->Click += gcnew System::EventHandler(this, &ATMServices::sendButton_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(335, 274);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(328, 28);
			this->textBox3->TabIndex = 19;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(326, 116);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(328, 28);
			this->textBox1->TabIndex = 18;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label7->Location = System::Drawing::Point(36, 269);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(167, 32);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Enter Amount:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(36, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(253, 31);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Enter Receiver Account:";
			// 
			// ATMServices
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 528);
			this->Controls->Add(this->tabControl1);
			this->Name = L"ATMServices";
			this->Text = L"ATMServices";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
		// Event handler for Cash Withdrawal button
		private: System::Void withdrawalButton_Click(System::Object^ sender, System::EventArgs^ e) {
			double withdrawalAmount;
			if (Double::TryParse(this->textBox4->Text, withdrawalAmount)) {
				if (withdrawalAmount > 0 && withdrawalAmount <= customer->balance) {
					Storage::storageTree->Withdraw(customer->accountNumber, customer->pin, withdrawalAmount);

					MessageBox::Show("Withdrawal successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					MessageBox::Show("Insufficient balance or invalid amount.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Please enter a valid amount.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			this->textBox4->Clear();
		}
		

			   // Event handler for Send button in Bank Transfer
private: System::Void sendButton_Click(System::Object^ sender, System::EventArgs^ e) {
	double transferAmount;
	String^ receiverAccount = this->textBox1->Text;

	// Validate inputs
	if (receiverAccount->Length == 0 || !Double::TryParse(this->textBox3->Text, transferAmount) || transferAmount <= 0) {
		MessageBox::Show("Please enter valid details.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Convert managed string to int for account number lookup
	int receiverAccountNumber = Convert::ToInt32(receiverAccount);

	// Use the Search function in Storage::storageTree to find the receiver's account
	BankCustomer^ receiverCustomer = Storage::storageTree->Search(receiverAccountNumber);

	if (receiverCustomer == nullptr) {
		MessageBox::Show("Receiver account not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Check balance sufficiency
	if (transferAmount <= customer->balance) {
		// Update balances
		Storage::storageTree->Withdraw(customer->accountNumber, customer->pin, transferAmount);
		Storage::storageTree->Deposit(receiverCustomer->accountNumber, receiverCustomer->pin, transferAmount);

		MessageBox::Show("Transfer successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Optionally, update persistent storage or log the transaction here
	}
	else {
		MessageBox::Show("Insufficient balance.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// Clear input fields
	this->textBox1->Clear();
	this->textBox3->Clear();
}

private: System::Void checkBalanceBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	double bal = customer->balance;
	label3->Text = bal.ToString("F2"); // Formats the balance to two decimal places
}
};
}
