#include "pch.h"
#include "Form1.h"
#include "Circle.cpp"
#include "Triangle.cpp"
#include "ComplexFigure.cpp"
#include "Container.cpp"
#include "Error.cpp"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
System::Void CppCLRWinFormsProject::Form1::Hide_all_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		Graphics^ g = CreateGraphics();
		g->Clear(Color::LavenderBlush);
		s.Clear();
	}
	catch (FigureException^ ex) {
		MessageBox::Show(ex->ErrorMessage);
	}
}

System::Void CppCLRWinFormsProject::Form1::Draw_circle_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		if (this->X->Text == "" || this->Y->Text == "" || this->R->Text == "") {
			MessageBox::Show("Для рисования круга нужно заполнить поля Х, У и Радиус");
		}
		else {
			int width = this->Width;
			int height = this->Height;
			Graphics^ g = CreateGraphics();
			int x = System::Convert::ToInt32(X->Text);
			int y = System::Convert::ToInt32(Y->Text);
			int radius = System::Convert::ToInt32(R->Text);
			Circle^ circle = gcnew Circle(x, y, radius, System::Drawing::Color::Red, System::Drawing::Color::Black);
			circle->h = height;
			circle->w = width;
			s.add_figure(circle);
			circle->Draw(g); // Вызов функции рисования круга
		}
	}
	catch (FigureException^ ex) {
		MessageBox::Show(ex->ErrorMessage);
	}
}

System::Void CppCLRWinFormsProject::Form1::draw_triangle_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		if (this->X->Text == "" || this->Y->Text == "" || this->storona->Text == "") {
			MessageBox::Show("Для рисования треугольника нужно заполнить поля Х, У и Сторона");
		}
		else {
			int width = this->Width;
			int height = this->Height;
			Graphics^ g = CreateGraphics();
			int x = System::Convert::ToInt32(X->Text);
			int y = System::Convert::ToInt32(Y->Text);
			int a = System::Convert::ToInt32(storona->Text);
			Triangle^ triangle = gcnew Triangle(x, y, a, System::Drawing::Color::Red, System::Drawing::Color::Black);
			triangle->h = height;
			triangle->w = width;
			s.add_figure(triangle);
			triangle->Draw(g); // Вызов функции рисования круга
		}
	}
	catch (FigureException^ ex) {
		MessageBox::Show(ex->ErrorMessage);
	}
}

System::Void CppCLRWinFormsProject::Form1::Draw_complex_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		if (this->X->Text == "" || this->Y->Text == "" || this->R->Text == "") {
			MessageBox::Show("Для рисования сложной фигуры нужно заполнить поля Х, У и Радиус");
		}
		else {
			int width = this->Width;
			int height = this->Height;
			Graphics^ g = CreateGraphics();
			int x = System::Convert::ToInt32(X->Text);
			int y = System::Convert::ToInt32(Y->Text);
			int radius = System::Convert::ToInt32(R->Text);
			ComplexFigure^ Complex = gcnew ComplexFigure(x, y, radius, System::Drawing::Color::Red, System::Drawing::Color::Black, System::Drawing::Color::Green, System::Drawing::Color::Blue);
			Complex->h = height;
			Complex->w = width;
			s.add_figure(Complex);
			Complex->Draw(g); // Вызов функции рисования круга
		}
	}
	catch (FigureException^ ex) {
		MessageBox::Show(ex->ErrorMessage);
	}
}

System::Void CppCLRWinFormsProject::Form1::move_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		if (s.empty()) return;
		Graphics^ g = CreateGraphics();
		int x = System::Convert::ToInt32(X->Text);
		int y = System::Convert::ToInt32(Y->Text);
		s.GetTopElement()->Move(x, y, g);
	}
	catch (FigureException^ ex) {
		MessageBox::Show(ex->ErrorMessage);
	}
}

System::Void CppCLRWinFormsProject::Form1::Hide_Click(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        if (!s.empty())
        {
            Graphics^ g = CreateGraphics();
            s.GetTopElement()->Hide(g);
		}
		else {
			MessageBox::Show("На экране нет фигур");
		}
    }
    catch (FigureException^ ex) {
		MessageBox::Show(ex->ErrorMessage);
    }
}

System::Void CppCLRWinFormsProject::Form1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		Graphics^ g = CreateGraphics();
		s.show_figure(g);
	}
	catch (FigureException^ ex) {
		MessageBox::Show(ex->ErrorMessage);
	}
}

System::Void CppCLRWinFormsProject::Form1::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		Graphics^ g = CreateGraphics();
		s.GetTopElement()->Hide(g);
		s.delete_figure();
	}
	catch (FigureException^ ex) {
		MessageBox::Show(ex->ErrorMessage);
	}
}

