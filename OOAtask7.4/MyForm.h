#pragma once

namespace OOAtask74 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������JPGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������PNGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������JPGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������PNGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->���������ToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(284, 24);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��������������������ToolStripMenuItem });
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ��������������������ToolStripMenuItem
			// 
			this->��������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������JPGToolStripMenuItem,
					this->��������PNGToolStripMenuItem
			});
			this->��������������������ToolStripMenuItem->Name = L"��������������������ToolStripMenuItem";
			this->��������������������ToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->��������������������ToolStripMenuItem->Text = L"��������� �����������";
			// 
			// ��������JPGToolStripMenuItem
			// 
			this->��������JPGToolStripMenuItem->Name = L"��������JPGToolStripMenuItem";
			this->��������JPGToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->��������JPGToolStripMenuItem->Text = L"� ������� JPG";
			// 
			// ��������PNGToolStripMenuItem
			// 
			this->��������PNGToolStripMenuItem->Name = L"��������PNGToolStripMenuItem";
			this->��������PNGToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->��������PNGToolStripMenuItem->Text = L"� ������� PNG";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->menuStrip);
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("�� ������������� ������ �����? ", "��������!",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question) ==
		System::Windows::Forms::DialogResult::Yes)
		Application::Exit();
}
	   private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	   }

};
}
