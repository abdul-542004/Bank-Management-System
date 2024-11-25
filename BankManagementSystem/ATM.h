#pragma once
#include "Storage.h"
#include "ATMServices.h"
namespace BankManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ATM
	/// </summary>
	public ref class ATM : public System::Windows::Forms::Form
	{
	public:
		ATM(void)
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
		~ATM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox3;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ loginButton;



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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(286, 274);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(247, 24);
			this->textBox3->TabIndex = 16;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(286, 180);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(247, 24);
			this->textBox1->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label7->Location = System::Drawing::Point(92, 270);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 25);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Enter Pin:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label2->Location = System::Drawing::Point(92, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 25);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Enter Account No. : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(212, 66);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 39);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Welcome!";
			// 
			// loginButton
			// 
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->Location = System::Drawing::Point(227, 374);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(120, 35);
			this->loginButton->TabIndex = 18;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &ATM::loginButton_Click);
			// 
			// ATM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(586, 449);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"ATM";
			this->Text = L"ATM";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Retrieve inputs
		int accountNumber;
		String^ enteredPin = textBox3->Text; // PIN

		try {
			accountNumber = Convert::ToInt32(textBox1->Text); // Account number
		}
		catch (FormatException^) {
			MessageBox::Show("Please enter a valid account number.",
				"Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Search for the account using SearchNode
		BankCustomer^ customer = Storage::storageTree->Search( accountNumber);

		if (customer != nullptr && customer->pin == enteredPin) {
			// Authentication successful
			MessageBox::Show("Login successful! Welcome, " + customer->name + ".",
				"Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			ATMServices^ atmServices = gcnew ATMServices(customer);
			atmServices->Show();
			this->Hide();
		}
		else {
			// Authentication failed
			MessageBox::Show("Invalid account number or PIN. Please try again.",
				"Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

};
}
