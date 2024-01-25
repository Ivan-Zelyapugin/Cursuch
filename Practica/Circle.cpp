#pragma once
#include "pch.h"
#include "Circle.h"
using namespace System::Windows::Forms;

inline void Circle::Hide(Graphics^ graphics)
{
    Pen^ pen = gcnew Pen(Color::LavenderBlush, 2);
    SolidBrush^ brush = gcnew SolidBrush(Color::LavenderBlush);
    graphics->DrawEllipse(pen, X - radius, Y - radius, radius * 2, radius * 2);
    graphics->FillEllipse(brush, X - radius, Y - radius, radius * 2, radius * 2);
}

inline void Circle::Draw(Graphics^ graphics)
{
    if (X - radius < 0 || X + radius > w || Y - radius < 0 || Y + radius > h)
    {
        throw gcnew FigureException("Circle", X, Y, radius);
    }
    else
    {
        Pen^ pen = gcnew Pen(Figure_color, 2);
        SolidBrush^ brush = gcnew SolidBrush(Figure_color);
        graphics->DrawEllipse(pen, X - radius, Y - radius, radius * 2, radius * 2);
        graphics->FillEllipse(brush, X - radius, Y - radius, radius * 2, radius * 2);
    }
}
