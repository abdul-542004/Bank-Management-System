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
	/// Summary for Search
	/// </summary>
	public ref class Search : public System::Windows::Forms::Form
	{
	public:
		Search(void)
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
		~Search()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ searchBtn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AccountID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AccountName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cnic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Balance;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Search::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->AccountID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AccountName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cnic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Balance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold SemiConden", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(74, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 33);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Search Account";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(295, 174);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(247, 20);
			this->textBox1->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label3->Location = System::Drawing::Point(75, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 25);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Enter Account Number: ";
			// 
			// searchBtn
			// 
			this->searchBtn->FlatAppearance->BorderSize = 0;
			this->searchBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchBtn.Image")));
			this->searchBtn->Location = System::Drawing::Point(548, 171);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(48, 25);
			this->searchBtn->TabIndex = 13;
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &Search::searchBtn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Azure;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->AccountID,
					this->AccountName, this->cnic, this->Gender, this->Type, this->Balance
			});
			this->dataGridView1->Location = System::Drawing::Point(29, 267);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(643, 150);
			this->dataGridView1->TabIndex = 14;
			// 
			// AccountID
			// 
			this->AccountID->HeaderText = L"Account ID";
			this->AccountID->Name = L"AccountID";
			// 
			// AccountName
			// 
			this->AccountName->HeaderText = L"Account Name";
			this->AccountName->Name = L"AccountName";
			// 
			// cnic
			// 
			this->cnic->HeaderText = L"CNIC";
			this->cnic->Name = L"cnic";
			// 
			// Gender
			// 
			this->Gender->HeaderText = L"Gender";
			this->Gender->Name = L"Gender";
			// 
			// Type
			// 
			this->Type->HeaderText = L"Type";
			this->Type->Name = L"Type";
			// 
			// Balance
			// 
			this->Balance->HeaderText = L"Balance";
			this->Balance->Name = L"Balance";
			// 
			// Search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(684, 731);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Search";
			this->Text = L"Search";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void searchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int accountNumber;
		if (Int32::TryParse(textBox1->Text, accountNumber)) {
			// Try to find the customer using Storage::storageTree (AVL Tree)
			BankCustomer^ customer = Storage::storageTree->Search(accountNumber);

			// Check if customer was found
			if (customer != nullptr) {
				// Populate DataGridView with the customer's details
				dataGridView1->Rows->Clear(); // Clear existing rows
				dataGridView1->Rows->Add(
					customer->accountNumber.ToString(),
					customer->name,
					customer->cnic,
					customer->gender,
					customer->accountType,
					customer->balance.ToString("C") // Format balance as currency
				);
			}
			else {
				MessageBox::Show("Account not found!", "Search Result", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else {
			MessageBox::Show("Invalid account number entered.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

};
}
