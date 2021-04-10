#pragma once
#include "FirstForm.h"

namespace OOAtask7add {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SecondForm
	/// </summary>
	public ref class SecondForm : public System::Windows::Forms::Form
	{
	public:
		SecondForm(FirstForm^ parent)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			parentForm = parent;
		}
	private:
		FirstForm^ parentForm;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SecondForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ closebutton;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->closebutton = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// closebutton
			// 
			this->closebutton->Location = System::Drawing::Point(105, 179);
			this->closebutton->Name = L"closebutton";
			this->closebutton->Size = System::Drawing::Size(75, 23);
			this->closebutton->TabIndex = 0;
			this->closebutton->Text = L"Закрыть";
			this->closebutton->UseVisualStyleBackColor = true;
			this->closebutton->Click += gcnew System::EventHandler(this, &SecondForm::closebutton_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 108);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 1;
			// 
			// SecondForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->closebutton);
			this->Name = L"SecondForm";
			this->Text = L"SecondForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void closebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm->button1->Text = this->textBox1->Text;
		Close();
	}
	};
}
