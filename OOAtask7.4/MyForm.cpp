#include "MyForm.h"
//необходимые адресные пространства:
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute] //STA - Single Thread Apartment, т.е. это
//атрибут, задающий для точки входа однопоточную модель выполнения 
int main(array<String^>^ args) //передача в главную функцю
//CLR-массива строковых аргументов (отслеживаемых дескрипторов в CLR)
{
	Application::EnableVisualStyles(); //включаем визуальные стили
//метод, задающий технологию визуализации графического интерфейса, когда
//элементы управления используют класс GDI, основанный на TextRenderer: 
	Application::SetCompatibleTextRenderingDefault(false);
	//запуск приложения с заданной формой в качестве главного окна:
	OOAtask74::MyForm form; Application::Run(% form);
	return 0; //нормальное завершение приложения
}
