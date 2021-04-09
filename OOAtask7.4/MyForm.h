#pragma once

namespace OOAtask74 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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

	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàãğóçèòüToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ çàãğóçèòüÈçîáğàæåíèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âÔîğìàòåJPGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âÔîğìàòåPNGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàãğóçèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàãğóçèòüÈçîáğàæåíèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âÔîğìàòåJPGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âÔîğìàòåPNGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôàéëToolStripMenuItem,
					this->çàãğóçèòüToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(284, 24);
			this->menuStrip->TabIndex = 0;
			this->menuStrip->Text = L"menuStrip";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->âûõîäToolStripMenuItem });
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// çàãğóçèòüToolStripMenuItem
			// 
			this->çàãğóçèòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->çàãğóçèòüÈçîáğàæåíèåToolStripMenuItem });
			this->çàãğóçèòüToolStripMenuItem->Name = L"çàãğóçèòüToolStripMenuItem";
			this->çàãğóçèòüToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->çàãğóçèòüToolStripMenuItem->Text = L"Çàãğóçèòü";
			this->çàãğóçèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàãğóçèòüToolStripMenuItem_Click);
			// 
			// çàãğóçèòüÈçîáğàæåíèåToolStripMenuItem
			// 
			this->çàãğóçèòüÈçîáğàæåíèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âÔîğìàòåJPGToolStripMenuItem,
					this->âÔîğìàòåPNGToolStripMenuItem
			});
			this->çàãğóçèòüÈçîáğàæåíèåToolStripMenuItem->Name = L"çàãğóçèòüÈçîáğàæåíèåToolStripMenuItem";
			this->çàãğóçèòüÈçîáğàæåíèåToolStripMenuItem->Size = System::Drawing::Size(205, 22);
			this->çàãğóçèòüÈçîáğàæåíèåToolStripMenuItem->Text = L"Çàãğóçèòü èçîáğàæåíèå";
			// 
			// âÔîğìàòåJPGToolStripMenuItem
			// 
			this->âÔîğìàòåJPGToolStripMenuItem->Name = L"âÔîğìàòåJPGToolStripMenuItem";
			this->âÔîğìàòåJPGToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->âÔîğìàòåJPGToolStripMenuItem->Text = L"Â ôîğìàòå JPG";
			// 
			// âÔîğìàòåPNGToolStripMenuItem
			// 
			this->âÔîğìàòåPNGToolStripMenuItem->Name = L"âÔîğìàòåPNGToolStripMenuItem";
			this->âÔîğìàòåPNGToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->âÔîğìàòåPNGToolStripMenuItem->Text = L"Â ôîğìàòå PNG";
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

private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Âû äåéñòâèòåëüíî õîòèòå âûéòè? ", "Âíèìàíèå!",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question) ==
		System::Windows::Forms::DialogResult::Yes)
		Application::Exit();
}
	   private: System::Void çàãğóçèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	   }

};
}
