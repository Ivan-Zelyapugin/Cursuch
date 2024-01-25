#pragma once
#include "pch.h"
#include"Error.h"

inline FigureException::FigureException(System::String^ fig, int x, int y, int r)
    : figur(fig), x(x), y(y), r(r)
{
    if (fig == "Circle")
    {
        error = "������ �������� ����� � ������������: (" + x + "," + y + ") � ��������: " + r;
    }
    else if (fig == "Triangle")
    {
        error = "������ �������� ������������ � ������������: (" + x + "," + y + ") � ������ �������: " + r / (2 * sqrt(3));
    }
    else if (fig == "ComplexFigure")
    {
        error = "������ �������� ������� ������ � ������������: (" + x + "," + y + "), �������� ��������� ����������: " + r + ", � �������� ������������: " + (2 * System::Math::Sqrt(3) * r);
    }
    else
    {
        error = fig;
    }
}

inline FigureException::FigureException(System::String^ fig)
    : FigureException(fig, 0, 0, 0) {}

inline System::String^ FigureException::ErrorMessage::get()
{
    return error;
}
