#include "ImageLoader.h"
//����������� �������� ������������:
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute] //STA - Single Thread Apartment, �.�. ���
//�������, �������� ��� ����� ����� ������������ ������ ���������� 
int main(array<String^>^ args) //�������� � ������� ������
//CLR-������� ��������� ���������� (������������� ������������ � CLR)
{
	Application::EnableVisualStyles(); //�������� ���������� �����
//�����, �������� ���������� ������������ ������������ ����������, �����
//�������� ���������� ���������� ����� GDI, ���������� �� TextRenderer: 
	Application::SetCompatibleTextRenderingDefault(false);
	//������ ���������� � �������� ������ � �������� �������� ����:
	OOAtask74::ImageLoader form; Application::Run(% form);
	return 0; //���������� ���������� ����������
}
