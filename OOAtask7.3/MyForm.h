#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <stack>

namespace OOAtask73 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ numtextBox;
	private: System::Windows::Forms::TextBox^ arraytextBox;
	private: System::Windows::Forms::Button^ createbutton;
	private: System::Windows::Forms::Button^ calcbutton;






	private: System::Windows::Forms::TextBox^ maxtextBox;
	private: System::Windows::Forms::TextBox^ numPosittextBox;



	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::CheckBox^ maxcheckBox;
	private: System::Windows::Forms::CheckBox^ numPositcheckBox;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;



	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numtextBox = (gcnew System::Windows::Forms::TextBox());
			this->arraytextBox = (gcnew System::Windows::Forms::TextBox());
			this->createbutton = (gcnew System::Windows::Forms::Button());
			this->calcbutton = (gcnew System::Windows::Forms::Button());
			this->maxtextBox = (gcnew System::Windows::Forms::TextBox());
			this->numPosittextBox = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->maxcheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->numPositcheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество элементов:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// numtextBox
			// 
			this->numtextBox->Location = System::Drawing::Point(11, 44);
			this->numtextBox->Name = L"numtextBox";
			this->numtextBox->Size = System::Drawing::Size(41, 20);
			this->numtextBox->TabIndex = 1;
			// 
			// arraytextBox
			// 
			this->arraytextBox->Location = System::Drawing::Point(11, 79);
			this->arraytextBox->Name = L"arraytextBox";
			this->arraytextBox->Size = System::Drawing::Size(374, 20);
			this->arraytextBox->TabIndex = 3;
			// 
			// createbutton
			// 
			this->createbutton->Location = System::Drawing::Point(253, 105);
			this->createbutton->Name = L"createbutton";
			this->createbutton->Size = System::Drawing::Size(133, 23);
			this->createbutton->TabIndex = 4;
			this->createbutton->Text = L"Создать массив";
			this->createbutton->UseVisualStyleBackColor = true;
			this->createbutton->Click += gcnew System::EventHandler(this, &MyForm::createbutton_Click);
			// 
			// calcbutton
			// 
			this->calcbutton->Location = System::Drawing::Point(253, 141);
			this->calcbutton->Name = L"calcbutton";
			this->calcbutton->Size = System::Drawing::Size(133, 23);
			this->calcbutton->TabIndex = 5;
			this->calcbutton->Text = L"Вычислить";
			this->calcbutton->UseVisualStyleBackColor = true;
			this->calcbutton->Click += gcnew System::EventHandler(this, &MyForm::calcbutton_Click);
			// 
			// maxtextBox
			// 
			this->maxtextBox->Location = System::Drawing::Point(192, 107);
			this->maxtextBox->Name = L"maxtextBox";
			this->maxtextBox->ReadOnly = true;
			this->maxtextBox->Size = System::Drawing::Size(38, 20);
			this->maxtextBox->TabIndex = 6;
			// 
			// numPosittextBox
			// 
			this->numPosittextBox->Location = System::Drawing::Point(192, 143);
			this->numPosittextBox->Name = L"numPosittextBox";
			this->numPosittextBox->ReadOnly = true;
			this->numPosittextBox->Size = System::Drawing::Size(38, 20);
			this->numPosittextBox->TabIndex = 7;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(171, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(215, 46);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Значения элементов";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(103, 17);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(106, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Не сортировать";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 17);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(90, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"Сортировать";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// maxcheckBox
			// 
			this->maxcheckBox->AutoSize = true;
			this->maxcheckBox->Location = System::Drawing::Point(11, 110);
			this->maxcheckBox->Name = L"maxcheckBox";
			this->maxcheckBox->Size = System::Drawing::Size(83, 17);
			this->maxcheckBox->TabIndex = 10;
			this->maxcheckBox->Text = L"Максимум:";
			this->maxcheckBox->UseVisualStyleBackColor = true;
			// 
			// numPositcheckBox
			// 
			this->numPositcheckBox->AutoSize = true;
			this->numPositcheckBox->Location = System::Drawing::Point(11, 145);
			this->numPositcheckBox->Name = L"numPositcheckBox";
			this->numPositcheckBox->Size = System::Drawing::Size(171, 17);
			this->numPositcheckBox->TabIndex = 11;
			this->numPositcheckBox->Text = L"Количество положительных:";
			this->numPositcheckBox->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(397, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->exitToolStripMenuItem->Text = L"Выход";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(397, 176);
			this->Controls->Add(this->numPositcheckBox);
			this->Controls->Add(this->maxcheckBox);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->numPosittextBox);
			this->Controls->Add(this->maxtextBox);
			this->Controls->Add(this->calcbutton);
			this->Controls->Add(this->createbutton);
			this->Controls->Add(this->arraytextBox);
			this->Controls->Add(this->numtextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"Массив";
			this->Load += gcnew System::EventHandler(this, &MyForm::form_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int n; int* arr; //объявление массива
		void swap(int& a, int& b) {
			int temp = a;
			a = b;
			b = temp;
		}
		//void sort(int* m, const int n);//объявление процедуры сортировки массива 

	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void createbutton_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			n = Convert::ToInt16(numtextBox->Text);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Введите число!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			numtextBox->Clear();
			numtextBox->Focus();
		}
		arraytextBox->Clear(); //очистка текстовых полей 
		maxtextBox->Clear();
		numPosittextBox->Clear();
		if (n > 0) {
			arr = new int[n]; //создание массива
			for (int i = 0; i < n; i++) { //заполнение случайными числами 
				arr[i] = rand() % 201 - 100;
			}
			if (radioButton1->Checked) { sort(arr, n); }
			for (int i = 0; i < n; i++) {
				arraytextBox->Text += " " + arr[i];
			}
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
		   void sort(int* m, const int n) {//процедура сортировки массива 
			   std::stack<int> stack;
			   int pivot;
			   long pivotIndex = 0;
			   long leftIndex = pivotIndex + 1;
			   long rightIndex = n - 1;

			   stack.push(pivotIndex);//Push always with left and right
			   stack.push(rightIndex);

			   int leftIndexOfSubSet, rightIndexOfSubset;

			   while (stack.size() > 0)
			   {
				   rightIndexOfSubset = stack.top();//pop always with right and left
				   stack.pop();
				   leftIndexOfSubSet = stack.top();
				   stack.pop();

				   leftIndex = leftIndexOfSubSet + 1;
				   pivotIndex = leftIndexOfSubSet;
				   rightIndex = rightIndexOfSubset;

				   pivot = m[pivotIndex];

				   if (leftIndex > rightIndex)
					   continue;

				   while (leftIndex < rightIndex)
				   {
					   while ((leftIndex <= rightIndex) && (m[leftIndex] <= pivot))
						   leftIndex++;	//increment right to find the greater 
				   //element than the pivot

					   while ((leftIndex <= rightIndex) && (m[rightIndex] >= pivot))
						   rightIndex--;//decrement right to find the 
				   //smaller element than the pivot

					   if (rightIndex >= leftIndex)   //if right index is 
						   //greater then only swap
						   swap(m[leftIndex], m[rightIndex]);
				   }

				   if (pivotIndex <= rightIndex)
					   if (m[pivotIndex] > m[rightIndex])
						   swap(m[pivotIndex], m[rightIndex]);

				   if (leftIndexOfSubSet < rightIndex)
				   {
					   stack.push(leftIndexOfSubSet);
					   stack.push(rightIndex - 1);
				   }

				   if (rightIndexOfSubset > rightIndex)
				   {
					   stack.push(rightIndex + 1);
					   stack.push(rightIndexOfSubset);
				   }
			   }
		   }
	private: System::Void form_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		numtextBox->Focus();
	}
	private: System::Void calcbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		int max = arr[0]; //переменная для поиска максимума в массиве
		int numPosit = 0; //для подсчета количества положительных элементов
		for (int i = 0; i < n; i++) {
			if (arr[i] > max) max = arr[i]; if (arr[i] > 0) numPosit++;
		}
		if (maxcheckBox->Checked) maxtextBox->Text = max.ToString();
		else maxtextBox->Clear();
		if (numPositcheckBox->Checked) numPosittextBox->Text = numPosit.ToString();
		else numPosittextBox->Clear();
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
