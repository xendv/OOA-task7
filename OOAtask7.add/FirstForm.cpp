#include "FirstForm.h"
#include "SecondForm.h"

using namespace System;
using namespace System::Windows::Forms;

System::Void OOAtask7add::FirstForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SecondForm^ SF = gcnew SecondForm(this);
	SF->Show();
}

[STAThreadAttribute] 
int main(array<String^>^ args)
{
	Application::EnableVisualStyles(); 
	Application::SetCompatibleTextRenderingDefault(false);

	OOAtask7add::FirstForm form;
	Application::Run(% form);
	return 0; 
}

