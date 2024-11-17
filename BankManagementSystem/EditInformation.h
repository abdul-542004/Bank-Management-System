#pragma once

namespace BankManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditInformation
	/// </summary>
	public ref class EditInformation : public System::Windows::Forms::Form
	{
	public:
		EditInformation(void)
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
		~EditInformation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox5;
	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold SemiConden", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(63, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(312, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Change Account Information";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(317, 423);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(247, 20);
			this->textBox3->TabIndex = 26;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Current", L"Saving" });
			this->comboBox2->Location = System::Drawing::Point(317, 318);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(247, 21);
			this->comboBox2->TabIndex = 25;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->comboBox1->Location = System::Drawing::Point(317, 268);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(247, 21);
			this->comboBox1->TabIndex = 24;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(317, 218);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(247, 20);
			this->textBox2->TabIndex = 23;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(317, 383);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(247, 20);
			this->textBox1->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label7->Location = System::Drawing::Point(64, 418);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 25);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Enter Pin:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label6->Location = System::Drawing::Point(64, 119);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 25);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Account Number:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label5->Location = System::Drawing::Point(64, 318);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 25);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Account Type:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label4->Location = System::Drawing::Point(64, 268);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 25);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Specify Gender: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label3->Location = System::Drawing::Point(64, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 25);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Enter CNIC: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F));
			this->label1->Location = System::Drawing::Point(64, 377);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 25);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Enter Customer\'s Full Name:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(317, 125);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(247, 20);
			this->textBox5->TabIndex = 28;
			// 
			// EditInformation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(684, 731);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EditInformation";
			this->Text = L"EditInformation";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
