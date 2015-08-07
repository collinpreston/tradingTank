#pragma once

namespace TradingTankGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HelpPopUp
	/// </summary>
	public ref class HelpPopUp : public System::Windows::Forms::Form
	{
	public:
		HelpPopUp(void)
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
		~HelpPopUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BtnClose;
	private: System::Windows::Forms::RichTextBox^  rTxtSoftwareInfo;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnDonate;


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
			this->BtnClose = (gcnew System::Windows::Forms::Button());
			this->rTxtSoftwareInfo = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnDonate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BtnClose
			// 
			this->BtnClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->BtnClose->Location = System::Drawing::Point(106, 236);
			this->BtnClose->Name = L"BtnClose";
			this->BtnClose->Size = System::Drawing::Size(166, 44);
			this->BtnClose->TabIndex = 0;
			this->BtnClose->Text = L"Close";
			this->BtnClose->UseVisualStyleBackColor = true;
			this->BtnClose->Click += gcnew System::EventHandler(this, &HelpPopUp::button1_Click);
			// 
			// rTxtSoftwareInfo
			// 
			this->rTxtSoftwareInfo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rTxtSoftwareInfo->Location = System::Drawing::Point(40, 35);
			this->rTxtSoftwareInfo->Name = L"rTxtSoftwareInfo";
			this->rTxtSoftwareInfo->ReadOnly = true;
			this->rTxtSoftwareInfo->Size = System::Drawing::Size(284, 66);
			this->rTxtSoftwareInfo->TabIndex = 1;
			this->rTxtSoftwareInfo->Text = L"Trading Tank\nVersion 0.1.0\nReleased July 2015\nFor further information visit: cpre"
				L"ston.com/tradingtank";
			this->rTxtSoftwareInfo->TextChanged += gcnew System::EventHandler(this, &HelpPopUp::richTextBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(128, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Made by Collin Preston";
			// 
			// btnDonate
			// 
			this->btnDonate->Location = System::Drawing::Point(146, 155);
			this->btnDonate->Name = L"btnDonate";
			this->btnDonate->Size = System::Drawing::Size(80, 38);
			this->btnDonate->TabIndex = 3;
			this->btnDonate->Text = L"Donate for coffee!";
			this->btnDonate->UseVisualStyleBackColor = true;
			// 
			// HelpPopUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->BtnClose;
			this->ClientSize = System::Drawing::Size(382, 292);
			this->Controls->Add(this->btnDonate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->rTxtSoftwareInfo);
			this->Controls->Add(this->BtnClose);
			this->MaximizeBox = false;
			this->Name = L"HelpPopUp";
			this->Text = L"About Trading Tank";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
