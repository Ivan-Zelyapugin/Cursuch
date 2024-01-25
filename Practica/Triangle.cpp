#pragma once
#include "pch.h"
#include "Triangle.h"

inline void Triangle::Hide(Graphics^ graphics)
{
    Pen^ pen = gcnew Pen(Color::LavenderBlush, 2);
    SolidBrush^ brush = gcnew SolidBrush(Color::LavenderBlush);
    array<Point>^ points = gcnew array<Point>(3);
    points[0] = Point(X, Y - static_cast<int>(a / System::Math::Sqrt(3)));
    points[1] = Point(X - static_cast<int>(a / 2), Y + static_cast<int>(a / (2 * System::Math::Sqrt(3))));
    points[2] = Point(X + static_cast<int>(a / 2), Y + static_cast<int>(a / (2 * System::Math::Sqrt(3))));
    graphics->DrawPolygon(pen, points);
    graphics->FillPolygon(brush, points);
}

inline void Triangle::Draw(Graphics^ graphics)
{
    int console_width = graphics->VisibleClipBounds.Width;
    int console_height = graphics->VisibleClipBounds.Height;

    array<Point>^ points = gcnew array<Point>(3);
    points[0] = Point(X, Y - static_cast<int>(a / System::Math::Sqrt(3)));
    points[1] = Point(X - static_cast<int>(a / 2), Y + static_cast<int>(a / (2 * System::Math::Sqrt(3))));
    points[2] = Point(X + static_cast<int>(a / 2), Y + static_cast<int>(a / (2 * System::Math::Sqrt(3))));

    bool is_inside_console = true;

    for (int i = 0; i < 3; i++)
    {
        if (points[i].X < 0 || points[i].X > console_width || points[i].Y < 0 || points[i].Y > console_height)
        {
            is_inside_console = false;
            break;
        }
    }

    if (is_inside_console)
    {
        Pen^ pen = gcnew Pen(Figure_color, 2);
        SolidBrush^ brush = gcnew SolidBrush(Figure_line_color);
        graphics->DrawPolygon(pen, points);
        graphics->FillPolygon(brush, points);
    }
    else
    {
        throw gcnew FigureException("Triangle", X, Y, a);
    }
}

