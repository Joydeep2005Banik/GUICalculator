#include "MyForm.h"
#include "pch.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUICalculator::MyForm form;
	Application::Run(% form);
}
