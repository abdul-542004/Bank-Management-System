#pragma once
#include "CreateAccount.h"
#include "DeleteAccount.h"
#include "DeletedAccounts.h"
#include "Search.h"
#include "EditInformation.h"
#include "ListAllAccounts.h"

namespace BankManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelside;
	protected:
	private: System::Windows::Forms::Panel^ panelheader;
	private: System::Windows::Forms::Panel^ mainpanel;
	private: System::Windows::Forms::Button^ deletedAccsBtn;

	private: System::Windows::Forms::Button^ editInfoBtn;

	private: System::Windows::Forms::Button^ deleteAccBtn;
	private: System::Windows::Forms::Button^ listAllAccBtn;


	private: System::Windows::Forms::Button^ createAccBtn;
	private: System::Windows::Forms::Button^ searchAccBtn;
	private: System::Windows::Forms::PictureBox^ pictureBox1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->panelside = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->searchAccBtn = (gcnew System::Windows::Forms::Button());
			this->createAccBtn = (gcnew System::Windows::Forms::Button());
			this->deletedAccsBtn = (gcnew System::Windows::Forms::Button());
			this->listAllAccBtn = (gcnew System::Windows::Forms::Button());
			this->editInfoBtn = (gcnew System::Windows::Forms::Button());
			this->deleteAccBtn = (gcnew System::Windows::Forms::Button());
			this->panelheader = (gcnew System::Windows::Forms::Panel());
			this->mainpanel = (gcnew System::Windows::Forms::Panel());
			this->panelside->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelside
			// 
			this->panelside->BackColor = System::Drawing::Color::DimGray;
			this->panelside->Controls->Add(this->pictureBox1);
			this->panelside->Controls->Add(this->searchAccBtn);
			this->panelside->Controls->Add(this->createAccBtn);
			this->panelside->Controls->Add(this->deletedAccsBtn);
			this->panelside->Controls->Add(this->listAllAccBtn);
			this->panelside->Controls->Add(this->editInfoBtn);
			this->panelside->Controls->Add(this->deleteAccBtn);
			this->panelside->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelside->Location = System::Drawing::Point(0, 37);
			this->panelside->Margin = System::Windows::Forms::Padding(4);
			this->panelside->Name = L"panelside";
			this->panelside->Size = System::Drawing::Size(400, 900);
			this->panelside->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(137, 59);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(133, 123);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// searchAccBtn
			// 
			this->searchAccBtn->BackColor = System::Drawing::Color::DimGray;
			this->searchAccBtn->FlatAppearance->BorderSize = 0;
			this->searchAccBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchAccBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchAccBtn->ForeColor = System::Drawing::Color::White;
			this->searchAccBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchAccBtn.Image")));
			this->searchAccBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->searchAccBtn->Location = System::Drawing::Point(59, 455);
			this->searchAccBtn->Margin = System::Windows::Forms::Padding(4);
			this->searchAccBtn->Name = L"searchAccBtn";
			this->searchAccBtn->Size = System::Drawing::Size(283, 62);
			this->searchAccBtn->TabIndex = 5;
			this->searchAccBtn->Text = L"Search Account";
			this->searchAccBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->searchAccBtn->UseVisualStyleBackColor = false;
			this->searchAccBtn->Click += gcnew System::EventHandler(this, &AdminForm::searchAccBtn_Click);
			// 
			// createAccBtn
			// 
			this->createAccBtn->BackColor = System::Drawing::Color::DimGray;
			this->createAccBtn->FlatAppearance->BorderSize = 0;
			this->createAccBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->createAccBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createAccBtn->ForeColor = System::Drawing::Color::White;
			this->createAccBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"createAccBtn.Image")));
			this->createAccBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->createAccBtn->Location = System::Drawing::Point(59, 293);
			this->createAccBtn->Margin = System::Windows::Forms::Padding(4);
			this->createAccBtn->Name = L"createAccBtn";
			this->createAccBtn->Size = System::Drawing::Size(283, 62);
			this->createAccBtn->TabIndex = 0;
			this->createAccBtn->Text = L"Create Account";
			this->createAccBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->createAccBtn->UseVisualStyleBackColor = false;
			this->createAccBtn->Click += gcnew System::EventHandler(this, &AdminForm::createAccBtn_Click);
			// 
			// deletedAccsBtn
			// 
			this->deletedAccsBtn->BackColor = System::Drawing::Color::DimGray;
			this->deletedAccsBtn->FlatAppearance->BorderSize = 0;
			this->deletedAccsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deletedAccsBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletedAccsBtn->ForeColor = System::Drawing::Color::White;
			this->deletedAccsBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deletedAccsBtn.Image")));
			this->deletedAccsBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->deletedAccsBtn->Location = System::Drawing::Point(59, 699);
			this->deletedAccsBtn->Margin = System::Windows::Forms::Padding(4);
			this->deletedAccsBtn->Name = L"deletedAccsBtn";
			this->deletedAccsBtn->Size = System::Drawing::Size(283, 62);
			this->deletedAccsBtn->TabIndex = 4;
			this->deletedAccsBtn->Text = L"Account Logs";
			this->deletedAccsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->deletedAccsBtn->UseVisualStyleBackColor = false;
			this->deletedAccsBtn->Click += gcnew System::EventHandler(this, &AdminForm::deletedAccsBtn_Click);
			// 
			// listAllAccBtn
			// 
			this->listAllAccBtn->BackColor = System::Drawing::Color::DimGray;
			this->listAllAccBtn->FlatAppearance->BorderSize = 0;
			this->listAllAccBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->listAllAccBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listAllAccBtn->ForeColor = System::Drawing::Color::White;
			this->listAllAccBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"listAllAccBtn.Image")));
			this->listAllAccBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->listAllAccBtn->Location = System::Drawing::Point(59, 537);
			this->listAllAccBtn->Margin = System::Windows::Forms::Padding(4);
			this->listAllAccBtn->Name = L"listAllAccBtn";
			this->listAllAccBtn->Size = System::Drawing::Size(283, 62);
			this->listAllAccBtn->TabIndex = 1;
			this->listAllAccBtn->Text = L"List of All Accounts";
			this->listAllAccBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->listAllAccBtn->UseVisualStyleBackColor = false;
			this->listAllAccBtn->Click += gcnew System::EventHandler(this, &AdminForm::listAllAccBtn_Click);
			// 
			// editInfoBtn
			// 
			this->editInfoBtn->BackColor = System::Drawing::Color::DimGray;
			this->editInfoBtn->FlatAppearance->BorderSize = 0;
			this->editInfoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editInfoBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editInfoBtn->ForeColor = System::Drawing::Color::White;
			this->editInfoBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editInfoBtn.Image")));
			this->editInfoBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->editInfoBtn->Location = System::Drawing::Point(59, 618);
			this->editInfoBtn->Margin = System::Windows::Forms::Padding(4);
			this->editInfoBtn->Name = L"editInfoBtn";
			this->editInfoBtn->Size = System::Drawing::Size(283, 62);
			this->editInfoBtn->TabIndex = 3;
			this->editInfoBtn->Text = L"Edit Information";
			this->editInfoBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->editInfoBtn->UseVisualStyleBackColor = false;
			this->editInfoBtn->Click += gcnew System::EventHandler(this, &AdminForm::editInfoBtn_Click);
			// 
			// deleteAccBtn
			// 
			this->deleteAccBtn->BackColor = System::Drawing::Color::DimGray;
			this->deleteAccBtn->FlatAppearance->BorderSize = 0;
			this->deleteAccBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteAccBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteAccBtn->ForeColor = System::Drawing::Color::White;
			this->deleteAccBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deleteAccBtn.Image")));
			this->deleteAccBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->deleteAccBtn->Location = System::Drawing::Point(59, 374);
			this->deleteAccBtn->Margin = System::Windows::Forms::Padding(4);
			this->deleteAccBtn->Name = L"deleteAccBtn";
			this->deleteAccBtn->Size = System::Drawing::Size(283, 62);
			this->deleteAccBtn->TabIndex = 2;
			this->deleteAccBtn->Text = L"Delete Account";
			this->deleteAccBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->deleteAccBtn->UseVisualStyleBackColor = false;
			this->deleteAccBtn->Click += gcnew System::EventHandler(this, &AdminForm::deleteAccBtn_Click);
			// 
			// panelheader
			// 
			this->panelheader->BackColor = System::Drawing::Color::Gray;
			this->panelheader->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelheader->Location = System::Drawing::Point(0, 0);
			this->panelheader->Margin = System::Windows::Forms::Padding(4);
			this->panelheader->Name = L"panelheader";
			this->panelheader->Size = System::Drawing::Size(1312, 37);
			this->panelheader->TabIndex = 1;
			// 
			// mainpanel
			// 
			this->mainpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainpanel->Location = System::Drawing::Point(400, 37);
			this->mainpanel->Margin = System::Windows::Forms::Padding(4);
			this->mainpanel->Name = L"mainpanel";
			this->mainpanel->Size = System::Drawing::Size(912, 900);
			this->mainpanel->TabIndex = 2;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1312, 937);
			this->Controls->Add(this->mainpanel);
			this->Controls->Add(this->panelside);
			this->Controls->Add(this->panelheader);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->panelside->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		System::Void loadForm(System::Object^ Form) {
			// Remove any existing controls in the panel
			if (this->mainpanel->Controls->Count > 0)
				this->mainpanel->Controls->RemoveAt(0);

			// Safely cast the Object to a Form
			System::Windows::Forms::Form^ f = dynamic_cast<System::Windows::Forms::Form^>(Form);
			if (f != nullptr) { // Check if the cast was successful
				f->TopLevel = false;
				f->Dock = DockStyle::Fill;
				this->mainpanel->Controls->Add(f);
				this->mainpanel->Tag = f;
				f->Show(); // Show the form
			}
			else {
				MessageBox::Show("Failed to load the form. Invalid type.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

			// Event handler for the "Create Account" button
	private: System::Void createAccBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateAccount^ createAccountForm = gcnew CreateAccount();
		this->loadForm(createAccountForm);
	}

		   // Event handler for the "Delete Account" button
	private: System::Void deleteAccBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		DeleteAccount^ deleteAccountForm = gcnew DeleteAccount();
		this->loadForm(deleteAccountForm);
	}

		   // Event handler for the "Deleted Accounts" button
	private: System::Void deletedAccsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		DeletedAccounts^ deletedAccountsForm = gcnew DeletedAccounts();
		this->loadForm(deletedAccountsForm);
	}

		   // Event handler for the "Search Account" button
	private: System::Void searchAccBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Search^ searchForm = gcnew Search();
		this->loadForm(searchForm);
	}

		   // Event handler for the "List All Accounts" button
	private: System::Void listAllAccBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ListAllAccounts^ listAllAccountsForm = gcnew ListAllAccounts();
		this->loadForm(listAllAccountsForm);
	}

		   // Event handler for the "Edit Information" button
	private: System::Void editInfoBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		EditInformation^ editInformationForm = gcnew EditInformation();
		this->loadForm(editInformationForm);
	}
};
}
