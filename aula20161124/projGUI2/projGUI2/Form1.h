#pragma once

namespace projGUI2 {

    #define MAXCHARDISP 16

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
	private: System::Windows::Forms::Button^  btn7;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  lblDisplay;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnAdicao;



	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btnSubtracao;
	private: System::Windows::Forms::Button^  btn1;





	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;


	private: System::Windows::Forms::Button^  btnMultiplicacao;

	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnPonto;
	private: System::Windows::Forms::Button^  btnNegPos;




	private: System::Windows::Forms::Button^  btnDivisao;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Button^  bntFatorial;
	private: System::Windows::Forms::Button^  btnPotencia;





	private: System::Windows::Forms::Button^  btnRaiz;

	private: System::Windows::Forms::Button^  btnIgual;


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
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnAdicao = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnSubtracao = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicacao = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnPonto = (gcnew System::Windows::Forms::Button());
			this->btnNegPos = (gcnew System::Windows::Forms::Button());
			this->btnDivisao = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->bntFatorial = (gcnew System::Windows::Forms::Button());
			this->btnPotencia = (gcnew System::Windows::Forms::Button());
			this->btnRaiz = (gcnew System::Windows::Forms::Button());
			this->btnIgual = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 81);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(75, 46);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(96, 9);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(370, 49);
			this->lblDisplay->TabIndex = 1;
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(109, 81);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(75, 46);
			this->btn8->TabIndex = 0;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(211, 81);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(75, 46);
			this->btn9->TabIndex = 0;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btnAdicao
			// 
			this->btnAdicao->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAdicao->Location = System::Drawing::Point(307, 81);
			this->btnAdicao->Name = L"btnAdicao";
			this->btnAdicao->Size = System::Drawing::Size(75, 46);
			this->btnAdicao->TabIndex = 0;
			this->btnAdicao->Text = L"+";
			this->btnAdicao->UseVisualStyleBackColor = true;
			this->btnAdicao->Click += gcnew System::EventHandler(this, &Form1::btnAdicao_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 160);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(75, 46);
			this->btn4->TabIndex = 0;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(109, 160);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(75, 46);
			this->btn5->TabIndex = 0;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(211, 160);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(75, 46);
			this->btn6->TabIndex = 0;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btnSubtracao
			// 
			this->btnSubtracao->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSubtracao->Location = System::Drawing::Point(307, 160);
			this->btnSubtracao->Name = L"btnSubtracao";
			this->btnSubtracao->Size = System::Drawing::Size(75, 46);
			this->btnSubtracao->TabIndex = 0;
			this->btnSubtracao->Text = L"-";
			this->btnSubtracao->UseVisualStyleBackColor = true;
			this->btnSubtracao->Click += gcnew System::EventHandler(this, &Form1::btnSubtracao_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 237);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(75, 46);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(109, 237);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(75, 46);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(211, 237);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(75, 46);
			this->btn3->TabIndex = 0;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btnMultiplicacao
			// 
			this->btnMultiplicacao->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnMultiplicacao->Location = System::Drawing::Point(307, 237);
			this->btnMultiplicacao->Name = L"btnMultiplicacao";
			this->btnMultiplicacao->Size = System::Drawing::Size(75, 46);
			this->btnMultiplicacao->TabIndex = 0;
			this->btnMultiplicacao->Text = L"×";
			this->btnMultiplicacao->UseVisualStyleBackColor = true;
			this->btnMultiplicacao->Click += gcnew System::EventHandler(this, &Form1::btnMultiplicacao_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(12, 303);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(75, 46);
			this->btn0->TabIndex = 0;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnPonto
			// 
			this->btnPonto->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPonto->Location = System::Drawing::Point(109, 303);
			this->btnPonto->Name = L"btnPonto";
			this->btnPonto->Size = System::Drawing::Size(75, 46);
			this->btnPonto->TabIndex = 0;
			this->btnPonto->Text = L".";
			this->btnPonto->UseVisualStyleBackColor = true;
			this->btnPonto->Click += gcnew System::EventHandler(this, &Form1::btnPonto_Click);
			// 
			// btnNegPos
			// 
			this->btnNegPos->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNegPos->Location = System::Drawing::Point(211, 303);
			this->btnNegPos->Name = L"btnNegPos";
			this->btnNegPos->Size = System::Drawing::Size(75, 46);
			this->btnNegPos->TabIndex = 0;
			this->btnNegPos->Text = L"±";
			this->btnNegPos->UseVisualStyleBackColor = true;
			// 
			// btnDivisao
			// 
			this->btnDivisao->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDivisao->Location = System::Drawing::Point(307, 303);
			this->btnDivisao->Name = L"btnDivisao";
			this->btnDivisao->Size = System::Drawing::Size(75, 46);
			this->btnDivisao->TabIndex = 0;
			this->btnDivisao->Text = L"÷";
			this->btnDivisao->UseVisualStyleBackColor = true;
			this->btnDivisao->Click += gcnew System::EventHandler(this, &Form1::btnDivisao_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(401, 81);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 46);
			this->btnClear->TabIndex = 0;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// bntFatorial
			// 
			this->bntFatorial->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bntFatorial->Location = System::Drawing::Point(401, 160);
			this->bntFatorial->Name = L"bntFatorial";
			this->bntFatorial->Size = System::Drawing::Size(75, 46);
			this->bntFatorial->TabIndex = 0;
			this->bntFatorial->Text = L"n!";
			this->bntFatorial->UseVisualStyleBackColor = true;
			// 
			// btnPotencia
			// 
			this->btnPotencia->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPotencia->Location = System::Drawing::Point(401, 237);
			this->btnPotencia->Name = L"btnPotencia";
			this->btnPotencia->Size = System::Drawing::Size(75, 46);
			this->btnPotencia->TabIndex = 0;
			this->btnPotencia->Text = L"xʸ";
			this->btnPotencia->UseVisualStyleBackColor = true;
			// 
			// btnRaiz
			// 
			this->btnRaiz->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnRaiz->Location = System::Drawing::Point(401, 303);
			this->btnRaiz->Name = L"btnRaiz";
			this->btnRaiz->Size = System::Drawing::Size(75, 46);
			this->btnRaiz->TabIndex = 0;
			this->btnRaiz->Text = L"√¯";
			this->btnRaiz->UseVisualStyleBackColor = true;
			// 
			// btnIgual
			// 
			this->btnIgual->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnIgual->Location = System::Drawing::Point(161, 373);
			this->btnIgual->Name = L"btnIgual";
			this->btnIgual->Size = System::Drawing::Size(164, 46);
			this->btnIgual->TabIndex = 0;
			this->btnIgual->Text = L"=";
			this->btnIgual->UseVisualStyleBackColor = true;
			this->btnIgual->Click += gcnew System::EventHandler(this, &Form1::btnIgual_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 451);
			this->Controls->Add(this->lblDisplay);
			this->Controls->Add(this->btnDivisao);
			this->Controls->Add(this->btnMultiplicacao);
			this->Controls->Add(this->btnSubtracao);
			this->Controls->Add(this->btnRaiz);
			this->Controls->Add(this->btnPotencia);
			this->Controls->Add(this->bntFatorial);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnAdicao);
			this->Controls->Add(this->btnNegPos);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnIgual);
			this->Controls->Add(this->btnPonto);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
		bool separado;
		double numero;
		char op;

		void LimpaDisplay(){
		  separado = false;
		  lblDisplay->Text = " ";
		}

		void LimpaTudo(){
		  LimpaDisplay();
		  numero = 0.0;
		  op = '\0';
		}

#pragma endregion


private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(lblDisplay->Text->Length < MAXCHARDISP) {
			  if(lblDisplay->Text != "0")
				 lblDisplay->Text = lblDisplay->Text + "0";
			  }  
		 }
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP) {
			  if(lblDisplay->Text == "0")
				  lblDisplay->Text = "1";
			  else 
			      lblDisplay->Text = lblDisplay->Text + "1";
			  }  
		 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text->Length < MAXCHARDISP) {
			  if(lblDisplay->Text == "0")
				  lblDisplay->Text = "2";
			  else 
			      lblDisplay->Text = lblDisplay->Text + "2";
			  }  
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 if(lblDisplay->Text->Length < MAXCHARDISP) {
			  if(lblDisplay->Text == "0")
				  lblDisplay->Text = "3";
			  else 
			      lblDisplay->Text = lblDisplay->Text + "3";
			  } 
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 if(lblDisplay->Text->Length < MAXCHARDISP) {
			  if(lblDisplay->Text == "0")
				  lblDisplay->Text = "4";
			  else 
			      lblDisplay->Text = lblDisplay->Text + "4";
			  } 
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 			 			 if(lblDisplay->Text->Length < MAXCHARDISP) {
			  if(lblDisplay->Text == "0")
				  lblDisplay->Text = "5";
			  else 
			      lblDisplay->Text = lblDisplay->Text + "5";
			  } 
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
		if(lblDisplay->Text->Length < MAXCHARDISP) {
			  if(lblDisplay->Text == "0")
				  lblDisplay->Text = "6";
			  else 
			      lblDisplay->Text = lblDisplay->Text + "6";
			  } 
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 		if(lblDisplay->Text->Length < MAXCHARDISP) {
			  if(lblDisplay->Text == "0")
				  lblDisplay->Text = "7";
			  else 
			      lblDisplay->Text = lblDisplay->Text + "7";
			  } 
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 		if(lblDisplay->Text->Length < MAXCHARDISP) {
			  if(lblDisplay->Text == "0")
				  lblDisplay->Text = "8";
			  else 
			      lblDisplay->Text = lblDisplay->Text + "8";
			  }
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 		if(lblDisplay->Text->Length < MAXCHARDISP) {
			  if(lblDisplay->Text == "0")
				  lblDisplay->Text = "9";
			  else 
			      lblDisplay->Text = lblDisplay->Text + "9";
			  }
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 separado = false;
		 }
private: System::Void btnPonto_Click(System::Object^  sender, System::EventArgs^  e) {
			 static bool separado = false;
			 if(lblDisplay->Text->Length < MAXCHARDISP && !separado) {
			      lblDisplay->Text = lblDisplay->Text + ".";
				  separado = true;
			  }  
		 }
private: System::Void btnIgual_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero2 = numero;
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 switch(op){
			 case '+':
				 lblDisplay->Text = System::Convert::ToString(numero2 + numero);
				 break;
			case '-':
				 lblDisplay->Text = System::Convert::ToString(numero2 - numero);
				 break;
			case '*':
				 lblDisplay->Text = System::Convert::ToString(numero2 * numero);
				 break;
			case '/':
				 lblDisplay->Text = System::Convert::ToString(numero2 / numero);
				 break;
			 }
		 }
private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
			 LimpaTudo();
		 }
private: System::Void btnAdicao_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '+';
			 LimpaDisplay();
		 }
private: System::Void btnSubtracao_Click(System::Object^  sender, System::EventArgs^  e) {
			numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '-';
			 LimpaDisplay();
		 }
private: System::Void btnMultiplicacao_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '*';
			 LimpaDisplay();
		 }
private: System::Void btnDivisao_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '/';
			 LimpaDisplay();
		 }
};
}

