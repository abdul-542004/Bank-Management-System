#pragma once
#include "Storage.h" //to get Storage::storageTree
namespace BankManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeletedAccounts
	/// </summary>
	public ref class DeletedAccounts : public System::Windows::Forms::Form
	{
	public:
		DeletedAccounts(void)
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
		~DeletedAccounts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ searchBtn;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeletedAccounts::typeid));
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// searchBtn
			// 
			this->searchBtn->FlatAppearance->BorderSize = 0;
			this->searchBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchBtn.Image")));
			this->searchBtn->Location = System::Drawing::Point(705, 217);
			this->searchBtn->Margin = System::Windows::Forms::Padding(4);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(64, 31);
			this->searchBtn->TabIndex = 17;
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &DeletedAccounts::searchBtn_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(367, 221);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(328, 28);
			this->textBox1->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label3->Location = System::Drawing::Point(74, 215);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(271, 32);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Enter Account Number: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold SemiConden", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 87);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 41);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Account Logs";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::LightCyan;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(80, 348);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(615, 454);
			this->richTextBox1->TabIndex = 18;
			this->richTextBox1->Text = L"";
			// 
			// DeletedAccounts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(912, 900);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DeletedAccounts";
			this->Text = L"DeletedAccounts";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Retrieve the account number entered by the user in the text box
	int accountNumber = 0;
	try {
		accountNumber = Convert::ToInt32(textBox1->Text); // Convert the entered text to integer
	}
	catch (FormatException^) {
		MessageBox::Show("Please enter a valid account number.", "Invalid Input", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Search for the customer in the storage tree
	BankCustomer^ customer = Storage::storageTree->Search(accountNumber); // Assuming storageTree is your AVLTree object

	if (customer == nullptr) {
		// If no customer is found, show a message
		MessageBox::Show("Account not found.", "Search Result", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		// Get the transaction history from the customer
		String^ transactionHistory = customer->GetTransactionHistory();

		// Display the transaction history in the RichTextBox
		richTextBox1->Text = transactionHistory;
	}
}

};
}
