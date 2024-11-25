#pragma once
#include "Storage.h"
#include "DynamicArray.h"
namespace BankManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ListAllAccounts
	/// </summary>
	public ref class ListAllAccounts : public System::Windows::Forms::Form
	{
	public:
		DynamicArray<BankCustomer^>^ customers = gcnew DynamicArray<BankCustomer^>();

		ListAllAccounts(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			Storage::storageTree->Traversal(customers);

			// Iterate through the array using an index-based loop and add rows to the DataGridView
			for (int i = 0; i < customers->getSize(); i++)
			{
				BankCustomer^ customer = customers[i]; // Get the customer at index i

				// Add a new row to the DataGridView with customer details
				dataGridView1->Rows->Add(customer->accountNumber,
					customer->name,
					customer->cnic,
					customer->gender,
					customer->accountType,
					customer->balance.ToString("F2"));
			}
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ListAllAccounts()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AccountID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AccountName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cnic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Balance;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label3;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->AccountID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AccountName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cnic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Balance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(210, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"All Accounts";
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
			this->dataGridView1->Location = System::Drawing::Point(12, 133);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(643, 150);
			this->dataGridView1->TabIndex = 15;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold SemiConden", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 33);
			this->label2->TabIndex = 16;
			this->label2->Text = L"All Accounts";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Account ID", L"Name", L"Balance" });
			this->comboBox2->Location = System::Drawing::Point(534, 73);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 18;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &ListAllAccounts::comboBox2_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(469, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 20);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Sort By:";
			// 
			// ListAllAccounts
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(684, 731);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ListAllAccounts";
			this->Text = L"ListAllAccounts";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		


		   

		   


private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	DynamicArray<BankCustomer^>^ sortedList;

	// Check the selected item in the combo box and call QuickSort with the appropriate criteria
	if (comboBox2->SelectedItem->ToString() == "Account ID") {
		sortedList = customers->QuickSort(1);
	}
	else if (comboBox2->SelectedItem->ToString() == "Name") {
		sortedList = customers->QuickSort(2);
	}
	else if (comboBox2->SelectedItem->ToString() == "Balance") {
		sortedList = customers->QuickSort(3);
	}

	// Clear the existing rows before adding new sorted data
	dataGridView1->Rows->Clear();

	// Iterate through the sorted list and add rows to the DataGridView
	for (int i = 0; i < sortedList->getSize(); i++) {
		BankCustomer^ customer = sortedList[i]; // Get the customer at index i

		// Add a new row to the DataGridView with customer details
		dataGridView1->Rows->Add(
			customer->accountNumber,
			customer->name,
			customer->cnic,
			customer->gender,
			customer->accountType,
			customer->balance.ToString("F2")
		);
	}
}

};
}
