#pragma once
#include "AccountInfoForm.h"
#include "DepositCashForm.h"
#include "WithdrawCashForm.h"
#include "DeletedAccounts.h"
namespace BankManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StaffForm
	/// </summary>
	public ref class StaffForm : public System::Windows::Forms::Form
	{
	public:
		StaffForm(void)
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
		~StaffForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ mainpanel;
	protected:
	private: System::Windows::Forms::Panel^ panelside;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ withdrawCashBtn;

	private: System::Windows::Forms::Button^ checkAccInfoBtn;
	private: System::Windows::Forms::Button^ checkLogsBtn;



	private: System::Windows::Forms::Button^ depositCashBtn;


	private: System::Windows::Forms::Panel^ panelheader;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StaffForm::typeid));
			this->mainpanel = (gcnew System::Windows::Forms::Panel());
			this->panelside = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->withdrawCashBtn = (gcnew System::Windows::Forms::Button());
			this->checkAccInfoBtn = (gcnew System::Windows::Forms::Button());
			this->checkLogsBtn = (gcnew System::Windows::Forms::Button());
			this->depositCashBtn = (gcnew System::Windows::Forms::Button());
			this->panelheader = (gcnew System::Windows::Forms::Panel());
			this->panelside->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// mainpanel
			// 
			this->mainpanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mainpanel->Location = System::Drawing::Point(400, 37);
			this->mainpanel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->mainpanel->Name = L"mainpanel";
			this->mainpanel->Size = System::Drawing::Size(912, 900);
			this->mainpanel->TabIndex = 5;
			// 
			// panelside
			// 
			this->panelside->BackColor = System::Drawing::Color::DimGray;
			this->panelside->Controls->Add(this->pictureBox1);
			this->panelside->Controls->Add(this->withdrawCashBtn);
			this->panelside->Controls->Add(this->checkAccInfoBtn);
			this->panelside->Controls->Add(this->checkLogsBtn);
			this->panelside->Controls->Add(this->depositCashBtn);
			this->panelside->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelside->Location = System::Drawing::Point(0, 37);
			this->panelside->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelside->Name = L"panelside";
			this->panelside->Size = System::Drawing::Size(400, 900);
			this->panelside->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(137, 59);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(133, 123);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// withdrawCashBtn
			// 
			this->withdrawCashBtn->BackColor = System::Drawing::Color::DimGray;
			this->withdrawCashBtn->FlatAppearance->BorderSize = 0;
			this->withdrawCashBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->withdrawCashBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->withdrawCashBtn->ForeColor = System::Drawing::Color::White;
			this->withdrawCashBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"withdrawCashBtn.Image")));
			this->withdrawCashBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->withdrawCashBtn->Location = System::Drawing::Point(59, 455);
			this->withdrawCashBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->withdrawCashBtn->Name = L"withdrawCashBtn";
			this->withdrawCashBtn->Size = System::Drawing::Size(283, 62);
			this->withdrawCashBtn->TabIndex = 5;
			this->withdrawCashBtn->Text = L"Withdraw Cash";
			this->withdrawCashBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->withdrawCashBtn->UseVisualStyleBackColor = false;
			this->withdrawCashBtn->Click += gcnew System::EventHandler(this, &StaffForm::withdrawCashBtn_Click);
			// 
			// checkAccInfoBtn
			// 
			this->checkAccInfoBtn->BackColor = System::Drawing::Color::DimGray;
			this->checkAccInfoBtn->FlatAppearance->BorderSize = 0;
			this->checkAccInfoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkAccInfoBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkAccInfoBtn->ForeColor = System::Drawing::Color::White;
			this->checkAccInfoBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkAccInfoBtn.Image")));
			this->checkAccInfoBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->checkAccInfoBtn->Location = System::Drawing::Point(59, 293);
			this->checkAccInfoBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkAccInfoBtn->Name = L"checkAccInfoBtn";
			this->checkAccInfoBtn->Size = System::Drawing::Size(283, 62);
			this->checkAccInfoBtn->TabIndex = 0;
			this->checkAccInfoBtn->Text = L"Account Info";
			this->checkAccInfoBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkAccInfoBtn->UseVisualStyleBackColor = false;
			this->checkAccInfoBtn->Click += gcnew System::EventHandler(this, &StaffForm::checkAccInfoBtn_Click);
			// 
			// checkLogsBtn
			// 
			this->checkLogsBtn->BackColor = System::Drawing::Color::DimGray;
			this->checkLogsBtn->FlatAppearance->BorderSize = 0;
			this->checkLogsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkLogsBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkLogsBtn->ForeColor = System::Drawing::Color::White;
			this->checkLogsBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkLogsBtn.Image")));
			this->checkLogsBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->checkLogsBtn->Location = System::Drawing::Point(59, 537);
			this->checkLogsBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->checkLogsBtn->Name = L"checkLogsBtn";
			this->checkLogsBtn->Size = System::Drawing::Size(283, 62);
			this->checkLogsBtn->TabIndex = 1;
			this->checkLogsBtn->Text = L"Check User Logs";
			this->checkLogsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkLogsBtn->UseVisualStyleBackColor = false;
			this->checkLogsBtn->Click += gcnew System::EventHandler(this, &StaffForm::checkLogsBtn_Click);
			// 
			// depositCashBtn
			// 
			this->depositCashBtn->BackColor = System::Drawing::Color::DimGray;
			this->depositCashBtn->FlatAppearance->BorderSize = 0;
			this->depositCashBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->depositCashBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depositCashBtn->ForeColor = System::Drawing::Color::White;
			this->depositCashBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"depositCashBtn.Image")));
			this->depositCashBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->depositCashBtn->Location = System::Drawing::Point(59, 374);
			this->depositCashBtn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->depositCashBtn->Name = L"depositCashBtn";
			this->depositCashBtn->Size = System::Drawing::Size(283, 62);
			this->depositCashBtn->TabIndex = 2;
			this->depositCashBtn->Text = L"Deposit Cash";
			this->depositCashBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->depositCashBtn->UseVisualStyleBackColor = false;
			this->depositCashBtn->Click += gcnew System::EventHandler(this, &StaffForm::depositCashBtn_Click);
			// 
			// panelheader
			// 
			this->panelheader->BackColor = System::Drawing::Color::Gray;
			this->panelheader->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelheader->Location = System::Drawing::Point(0, 0);
			this->panelheader->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelheader->Name = L"panelheader";
			this->panelheader->Size = System::Drawing::Size(1312, 37);
			this->panelheader->TabIndex = 4;
			// 
			// StaffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1312, 937);
			this->Controls->Add(this->mainpanel);
			this->Controls->Add(this->panelside);
			this->Controls->Add(this->panelheader);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"StaffForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StaffForm";
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
		
	private: System::Void checkAccInfoBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		AccountInfoForm^ accountInfoForm = gcnew AccountInfoForm();
		this->loadForm(accountInfoForm);
	}
private: System::Void depositCashBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	DepositCashForm^ depositCashForm = gcnew DepositCashForm();
	this->loadForm(depositCashForm);
}
private: System::Void withdrawCashBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	WithdrawCashForm^ withdrawCashForm = gcnew WithdrawCashForm();
	this->loadForm(withdrawCashForm);
}
private: System::Void checkLogsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	DeletedAccounts^ checkLogsForm = gcnew DeletedAccounts();
	this->loadForm(checkLogsForm);
}
};
}
