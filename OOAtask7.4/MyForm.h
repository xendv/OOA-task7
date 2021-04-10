#pragma once

namespace OOAtask74 {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьИзображениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вФорматеJPGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вФорматеPNGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузитьИзображениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вФорматеJPGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вФорматеPNGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip->SuspendLayout();
			this->toolStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->загрузитьToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(364, 24);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выходToolStripMenuItem });
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// загрузитьToolStripMenuItem
			// 
			this->загрузитьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->загрузитьИзображениеToolStripMenuItem });
			this->загрузитьToolStripMenuItem->Name = L"загрузитьToolStripMenuItem";
			this->загрузитьToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->загрузитьToolStripMenuItem->Text = L"Загрузить";
			this->загрузитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::загрузитьToolStripMenuItem_Click);
			// 
			// загрузитьИзображениеToolStripMenuItem
			// 
			this->загрузитьИзображениеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вФорматеJPGToolStripMenuItem,
					this->вФорматеPNGToolStripMenuItem
			});
			this->загрузитьИзображениеToolStripMenuItem->Name = L"загрузитьИзображениеToolStripMenuItem";
			this->загрузитьИзображениеToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->загрузитьИзображениеToolStripMenuItem->Text = L"Загрузить изображение";
			// 
			// вФорматеJPGToolStripMenuItem
			// 
			this->вФорматеJPGToolStripMenuItem->Name = L"вФорматеJPGToolStripMenuItem";
			this->вФорматеJPGToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->вФорматеJPGToolStripMenuItem->Text = L"В формате JPG";
			this->вФорматеJPGToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вФорматеJPGToolStripMenuItem_Click);
			// 
			// вФорматеPNGToolStripMenuItem
			// 
			this->вФорматеPNGToolStripMenuItem->Name = L"вФорматеPNGToolStripMenuItem";
			this->вФорматеPNGToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->вФорматеPNGToolStripMenuItem->Text = L"В формате PNG";
			this->вФорматеPNGToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вФорматеPNGToolStripMenuItem_Click);
			// 
			// toolStrip
			// 
			this->toolStrip->AutoSize = false;
			this->toolStrip->Dock = System::Windows::Forms::DockStyle::Left;
			this->toolStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3
			});
			this->toolStrip->Location = System::Drawing::Point(0, 24);
			this->toolStrip->Name = L"toolStrip";
			this->toolStrip->Size = System::Drawing::Size(44, 317);
			this->toolStrip->TabIndex = 1;
			this->toolStrip->Text = L"toolStrip";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->AutoSize = false;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(42, 42);
			this->toolStripButton1->Text = L"toolStripButton1";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->AutoSize = false;
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(42, 42);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->AutoSize = false;
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(42, 42);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(47, 27);
			this->pictureBox1->MaximumSize = System::Drawing::Size(300, 300);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 300);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 341);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->toolStrip);
			this->Controls->Add(this->menuStrip);
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->toolStrip->ResumeLayout(false);
			this->toolStrip->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Вы действительно хотите выйти? ", "Внимание!",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question) ==
			System::Windows::Forms::DialogResult::Yes)
			Application::Exit();
	}
	private: System::Void загрузитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void вФорматеJPGToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		LoadImage(true);
	}
	private: System::Void вФорматеPNGToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		LoadImage(false);
	}
	private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		LoadImage(true);
	}
	private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		LoadImage(false);
	}
	Image^ MemForImage; //переменная для загружаемого изображения 
	private: void LoadImage(bool jpg) { //процедура загрузки изображения 
	//установка начальной папки: 
		openFileDialog1->InitialDirectory = "c:\\";
		if (jpg) //если выбор jpeg-файла:
				 //установка формата jpg:
			openFileDialog1->Filter = "image(JPEG) files (*.jpg)|*.jpg|All files(*.*)|*.*";
		else
			//установка формата png:
			openFileDialog1->Filter = "image(PNG) files(*.png)|*.png|All files(*.*)|*.*";
		//если файл в окне выбран:
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			try { //безопасная попытка загрузки
			MemForImage = Image::FromFile(openFileDialog1->FileName);
			//установка изображения в элемент формы 
		PictureBox: pictureBox1->Image = MemForImage;
		}
		catch (Exception^ ex) {
			MessageBox::Show("He удалось загрузить файл: " + ex->Message, "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
	};
}
