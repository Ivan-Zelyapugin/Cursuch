#include "pch.h"
#include "Circle.cpp"
#include "Triangle.cpp"
#include "ComplexFigure.cpp"
using namespace System;


#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinFormsProject::Form1());
	return 0;
}