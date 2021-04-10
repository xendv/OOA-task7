#pragma once

namespace OOAtask74 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Preview
	/// </summary>
	public ref class Preview : public System::Windows::Forms::Form
	{
		Image^ PicToView; //для хранения изображения 
	public:
		//модифицированный конструктор окна
		Preview(Image^ View)
		{
			PicToView = View; //получаем из главного окна изображение 
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Preview()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:

	private: System::Windows::Forms::Button^ Закрытьbutton;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Закрытьbutton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(13, 13);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 3, 0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(498, 325);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(181, 132);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Закрытьbutton
			// 
			this->Закрытьbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Закрытьbutton->Location = System::Drawing::Point(436, 357);
			this->Закрытьbutton->Name = L"Закрытьbutton";
			this->Закрытьbutton->Size = System::Drawing::Size(75, 23);
			this->Закрытьbutton->TabIndex = 1;
			this->Закрытьbutton->Text = L"Закрыть";
			this->Закрытьbutton->UseVisualStyleBackColor = true;
			this->Закрытьbutton->Click += gcnew System::EventHandler(this, &Preview::Закрытьbutton_Click);
			// 
			// Preview
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 392);
			this->Controls->Add(this->Закрытьbutton);
			this->Controls->Add(this->panel1);
			this->Name = L"Preview";
			this->Text = L"Preview";
			this->Load += gcnew System::EventHandler(this, &Preview::Preview_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Preview_Load(System::Object^ sender, System::EventArgs^ e) {
		//устанавливаем размеры pictureBox1 по размерам изображения 
		pictureBox1->Width = PicToView->Width;
		pictureBox1->Height = PicToView->Height; 
		//помещаем изображение в pictureBox1 
		pictureBox1->Image = PicToView;
	}
	private: System::Void Закрытьbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
