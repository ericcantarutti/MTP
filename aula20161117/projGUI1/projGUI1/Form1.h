#pragma once

namespace projGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnOk;
	protected: 

	private: System::Windows::Forms::TextBox^  tb1;
	private: System::Windows::Forms::CheckBox^  chk1;


	protected: 


	private: System::Windows::Forms::Label^  lblMsg;
	private: System::Windows::Forms::ComboBox^  cmbSelecao;


	private: System::Windows::Forms::RadioButton^  rbdpar;
	private: System::Windows::Forms::RadioButton^  rbdimpar;






	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  gb;
	private: System::Windows::Forms::CheckBox^  chk2;
	private: System::Windows::Forms::CheckBox^  chk3;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->chk1 = (gcnew System::Windows::Forms::CheckBox());
			this->lblMsg = (gcnew System::Windows::Forms::Label());
			this->cmbSelecao = (gcnew System::Windows::Forms::ComboBox());
			this->rbdpar = (gcnew System::Windows::Forms::RadioButton());
			this->rbdimpar = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->gb = (gcnew System::Windows::Forms::GroupBox());
			this->chk2 = (gcnew System::Windows::Forms::CheckBox());
			this->chk3 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->gb->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(29, 159);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(94, 31);
			this->btnOk->TabIndex = 0;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(218, 31);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(191, 20);
			this->tb1->TabIndex = 1;
			// 
			// chk1
			// 
			this->chk1->AutoSize = true;
			this->chk1->Location = System::Drawing::Point(29, 88);
			this->chk1->Name = L"chk1";
			this->chk1->Size = System::Drawing::Size(104, 17);
			this->chk1->TabIndex = 2;
			this->chk1->Text = L"receber no email";
			this->chk1->UseVisualStyleBackColor = true;
			this->chk1->CheckedChanged += gcnew System::EventHandler(this, &Form1::chk1_CheckedChanged);
			// 
			// lblMsg
			// 
			this->lblMsg->AutoSize = true;
			this->lblMsg->Location = System::Drawing::Point(26, 9);
			this->lblMsg->Name = L"lblMsg";
			this->lblMsg->Size = System::Drawing::Size(35, 13);
			this->lblMsg->TabIndex = 3;
			this->lblMsg->Text = L"Nome";
			this->lblMsg->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// cmbSelecao
			// 
			this->cmbSelecao->FormattingEnabled = true;
			this->cmbSelecao->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"Eric", L"Gabriela"});
			this->cmbSelecao->Location = System::Drawing::Point(288, 332);
			this->cmbSelecao->Name = L"cmbSelecao";
			this->cmbSelecao->Size = System::Drawing::Size(121, 21);
			this->cmbSelecao->TabIndex = 4;
			// 
			// rbdpar
			// 
			this->rbdpar->AutoSize = true;
			this->rbdpar->Location = System::Drawing::Point(6, 19);
			this->rbdpar->Name = L"rbdpar";
			this->rbdpar->Size = System::Drawing::Size(41, 17);
			this->rbdpar->TabIndex = 5;
			this->rbdpar->TabStop = true;
			this->rbdpar->Text = L"Par\r\n";
			this->rbdpar->UseVisualStyleBackColor = true;
			// 
			// rbdimpar
			// 
			this->rbdimpar->AutoSize = true;
			this->rbdimpar->Location = System::Drawing::Point(6, 42);
			this->rbdimpar->Name = L"rbdimpar";
			this->rbdimpar->Size = System::Drawing::Size(51, 17);
			this->rbdimpar->TabIndex = 6;
			this->rbdimpar->TabStop = true;
			this->rbdimpar->Text = L"Impar\r\n";
			this->rbdimpar->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(199, 91);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(210, 209);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// gb
			// 
			this->gb->Controls->Add(this->rbdpar);
			this->gb->Controls->Add(this->rbdimpar);
			this->gb->Location = System::Drawing::Point(29, 216);
			this->gb->Name = L"gb";
			this->gb->Size = System::Drawing::Size(117, 84);
			this->gb->TabIndex = 8;
			this->gb->TabStop = false;
			this->gb->Text = L"Escolha a opção";
			// 
			// chk2
			// 
			this->chk2->AutoSize = true;
			this->chk2->Location = System::Drawing::Point(29, 112);
			this->chk2->Name = L"chk2";
			this->chk2->Size = System::Drawing::Size(125, 17);
			this->chk2->TabIndex = 9;
			this->chk2->Text = L"não receber no email";
			this->chk2->UseVisualStyleBackColor = true;
			this->chk2->CheckedChanged += gcnew System::EventHandler(this, &Form1::chk2_CheckedChanged);
			// 
			// chk3
			// 
			this->chk3->AutoSize = true;
			this->chk3->Location = System::Drawing::Point(29, 136);
			this->chk3->Name = L"chk3";
			this->chk3->Size = System::Drawing::Size(98, 17);
			this->chk3->TabIndex = 10;
			this->chk3->Text = L"Aparecer nome";
			this->chk3->UseVisualStyleBackColor = true;
			this->chk3->CheckedChanged += gcnew System::EventHandler(this, &Form1::chk3_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 365);
			this->Controls->Add(this->chk3);
			this->Controls->Add(this->chk2);
			this->Controls->Add(this->gb);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->cmbSelecao);
			this->Controls->Add(this->lblMsg);
			this->Controls->Add(this->chk1);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->btnOk);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->gb->ResumeLayout(false);
			this->gb->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
                    lblMsg->Text = "";
					if (chk1->Checked)
						lblMsg->Text = lblMsg->Text + "  email ";
					if (chk2->Checked)
						lblMsg->Text = lblMsg->Text + " não receber email";
					if (chk3->Checked)
						lblMsg->Text = lblMsg->Text + tb1->Text;
					lblMsg->Text = lblMsg->Text  + " Filhotes: " + 
                   System: :Convert: :ToString(cmbSelecao->SelectedItem) + ", ";
					lblMsg->Text = lblMsg->Text + tb1->Text;
					if(rbdpar->Checked)
						lblMsg->ForeColor = System::Drawing::Color::Blue;
					if(rbdimpar->Checked)
						lblMsg->ForeColor = System::Drawing::Color::Red;
					

			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 cmbSelecao->SelectedIndex = 0; 
		 }
private: System::Void chk1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void chk2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void chk3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

