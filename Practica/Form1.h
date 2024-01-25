#pragma once
#include <string>
#include "Container.cpp"
#include "Circle.cpp"
#include "Triangle.cpp"
#include "ComplexFigure.cpp"
using namespace std;

namespace CppCLRWinFormsProject {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		Cont s;
	private:
	public:
		Form1(void)
		{
			InitializeComponent();

		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Hide_all;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ X;
	private: System::Windows::Forms::TextBox^ Y;
	private: System::Windows::Forms::Button^ Draw_circle;
	private: System::Windows::Forms::Button^ draw_triangle;




	private: System::Windows::Forms::Button^ Draw_complex;
	private: System::Windows::Forms::Button^ Hide;
	private: System::Windows::Forms::Button^ move;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ R;

	private: System::Windows::Forms::TextBox^ storona;
	private: System::Windows::Forms::Button^ Show_all;

	private: System::Windows::Forms::Button^ Del_fig;




	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Hide_all = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->X = (gcnew System::Windows::Forms::TextBox());
			this->Y = (gcnew System::Windows::Forms::TextBox());
			this->Draw_circle = (gcnew System::Windows::Forms::Button());
			this->draw_triangle = (gcnew System::Windows::Forms::Button());
			this->Draw_complex = (gcnew System::Windows::Forms::Button());
			this->Hide = (gcnew System::Windows::Forms::Button());
			this->move = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->R = (gcnew System::Windows::Forms::TextBox());
			this->storona = (gcnew System::Windows::Forms::TextBox());
			this->Show_all = (gcnew System::Windows::Forms::Button());
			this->Del_fig = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Hide_all
			// 
			this->Hide_all->Location = System::Drawing::Point(1303, 12);
			this->Hide_all->Name = L"Hide_all";
			this->Hide_all->Size = System::Drawing::Size(115, 49);
			this->Hide_all->TabIndex = 0;
			this->Hide_all->Text = L"Очистить всё";
			this->Hide_all->UseVisualStyleBackColor = true;
			this->Hide_all->Click += gcnew System::EventHandler(this, &Form1::Hide_all_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(48, 382);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"X:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 429);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Y:";
			// 
			// X
			// 
			this->X->Location = System::Drawing::Point(81, 382);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(70, 22);
			this->X->TabIndex = 3;
			// 
			// Y
			// 
			this->Y->Location = System::Drawing::Point(81, 429);
			this->Y->Name = L"Y";
			this->Y->Size = System::Drawing::Size(70, 22);
			this->Y->TabIndex = 4;
			// 
			// Draw_circle
			// 
			this->Draw_circle->Location = System::Drawing::Point(81, 479);
			this->Draw_circle->Name = L"Draw_circle";
			this->Draw_circle->Size = System::Drawing::Size(120, 44);
			this->Draw_circle->TabIndex = 5;
			this->Draw_circle->Text = L"Нарисовать круг";
			this->Draw_circle->UseVisualStyleBackColor = true;
			this->Draw_circle->Click += gcnew System::EventHandler(this, &Form1::Draw_circle_Click);
			// 
			// draw_triangle
			// 
			this->draw_triangle->Location = System::Drawing::Point(261, 479);
			this->draw_triangle->Name = L"draw_triangle";
			this->draw_triangle->Size = System::Drawing::Size(128, 44);
			this->draw_triangle->TabIndex = 6;
			this->draw_triangle->Text = L"Нарисовать треугольник";
			this->draw_triangle->UseVisualStyleBackColor = true;
			this->draw_triangle->Click += gcnew System::EventHandler(this, &Form1::draw_triangle_Click);
			// 
			// Draw_complex
			// 
			this->Draw_complex->Location = System::Drawing::Point(445, 479);
			this->Draw_complex->Name = L"Draw_complex";
			this->Draw_complex->Size = System::Drawing::Size(153, 44);
			this->Draw_complex->TabIndex = 7;
			this->Draw_complex->Text = L"Нарисовать сложную фигуру";
			this->Draw_complex->UseVisualStyleBackColor = true;
			this->Draw_complex->Click += gcnew System::EventHandler(this, &Form1::Draw_complex_Click);
			// 
			// Hide
			// 
			this->Hide->Location = System::Drawing::Point(678, 479);
			this->Hide->Name = L"Hide";
			this->Hide->Size = System::Drawing::Size(95, 44);
			this->Hide->TabIndex = 8;
			this->Hide->Text = L"Скрыть";
			this->Hide->UseVisualStyleBackColor = true;
			this->Hide->Click += gcnew System::EventHandler(this, &Form1::Hide_Click);
			// 
			// move
			// 
			this->move->Location = System::Drawing::Point(861, 479);
			this->move->Name = L"move";
			this->move->Size = System::Drawing::Size(108, 44);
			this->move->TabIndex = 9;
			this->move->Text = L"Переместить";
			this->move->UseVisualStyleBackColor = true;
			this->move->Click += gcnew System::EventHandler(this, &Form1::move_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(235, 382);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Радиус:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(235, 435);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Сторона:";
			// 
			// R
			// 
			this->R->Location = System::Drawing::Point(311, 382);
			this->R->Name = L"R";
			this->R->Size = System::Drawing::Size(100, 22);
			this->R->TabIndex = 12;
			// 
			// storona
			// 
			this->storona->Location = System::Drawing::Point(311, 432);
			this->storona->Name = L"storona";
			this->storona->Size = System::Drawing::Size(100, 22);
			this->storona->TabIndex = 13;
			// 
			// Show_all
			// 
			this->Show_all->Location = System::Drawing::Point(1303, 110);
			this->Show_all->Name = L"Show_all";
			this->Show_all->Size = System::Drawing::Size(115, 52);
			this->Show_all->TabIndex = 14;
			this->Show_all->Text = L"Показать всё";
			this->Show_all->UseVisualStyleBackColor = true;
			this->Show_all->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Del_fig
			// 
			this->Del_fig->Location = System::Drawing::Point(1063, 479);
			this->Del_fig->Name = L"Del_fig";
			this->Del_fig->Size = System::Drawing::Size(120, 44);
			this->Del_fig->TabIndex = 15;
			this->Del_fig->Text = L"Удалить фигуру";
			this->Del_fig->UseVisualStyleBackColor = true;
			this->Del_fig->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->ClientSize = System::Drawing::Size(1476, 545);
			this->Controls->Add(this->Del_fig);
			this->Controls->Add(this->Show_all);
			this->Controls->Add(this->storona);
			this->Controls->Add(this->R);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->move);
			this->Controls->Add(this->Hide);
			this->Controls->Add(this->Draw_complex);
			this->Controls->Add(this->draw_triangle);
			this->Controls->Add(this->Draw_circle);
			this->Controls->Add(this->Y);
			this->Controls->Add(this->X);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Hide_all);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	
	private: System::Void Hide_all_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Draw_circle_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void draw_triangle_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Draw_complex_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void move_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Hide_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
