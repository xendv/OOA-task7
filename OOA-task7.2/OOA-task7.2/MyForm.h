#pragma once
#include <cstdlib>
#include <ctime>

namespace OOAtask7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(125, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ещё раз!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(112, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_Keypress);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(98, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите число (0-9):";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(62, 110);
			this->label2->MinimumSize = System::Drawing::Size(200, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(62, 134);
			this->label3->MinimumSize = System::Drawing::Size(200, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(12, 83);
			this->label4->MinimumSize = System::Drawing::Size(300, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(300, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Доступно попыток:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(324, 211);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Игра \"Угадай число!\"";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int const max = 10;
		int i, k = 1;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		i = rand() % max;
		label2->Text = "";	//очистка служебных меток
		label3->Text = "";
		label4->Text = "Доступно попыток : " + max;
	}
	private: System::Void textBox1_Keypress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int n; //вводимое игроком число
		if ((int)e->KeyChar == 13) { //если был нажат Enter
			n = Convert::ToInt16(textBox1->Text); //число из текстового поля (с преобразованием)
			if (n - i != 0 && (k < max)) {
				label2->Text = "Не угадали!";
				textBox1->Clear();
				k++;	//+1 в счетчик попыток
				label4->Text = "Доступно попыток : " + (max - k + 1).ToString();
			}
			else {
				label2->Left = 60; //восстанавливаем положение метки
				label2->Text = "Коэффициент невезучести :";
				double koef = 1.0 * k / max;
				label3->Text = koef.ToString();
				textBox1->ReadOnly = true;
				button1->Enabled = true;
				button1->Focus();
				if (i == n) {
					label4->Text = "Правильно!";
					label4->ForeColor = Color::Green;
				}
				else
					if (k == max) {
					label4->Text = "Вы проиграли! Превышено к-во попыток (" + max + ")";
					label4->ForeColor=Color::Red;
					}

			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		i = rand() % max; //"загадывание" числа
		k = 1;
		textBox1->Clear(); //очистка поля ввода 
		textBox1->Focus(); //установка фокуса ввода
		label2->Text = "";	//очистка служебных меток
		label3->Text = "";
		label4->Text = "Доступно попыток : " + max;
		label4->ForeColor = SystemColors::ControlText;
		textBox1->ReadOnly = false;
		button1->Enabled = false;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
