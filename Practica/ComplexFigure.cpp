#pragma once
#include "pch.h"
#include "ComplexFigure.h"

inline void ComplexFigure::Hide(Graphics^ graphics)
{
    circle->Hide(graphics);
    triangle->Hide(graphics);
}

inline void ComplexFigure::Move(int x, int y, Graphics^ g)
{
    triangle->Move(x, y, g);
    circle->Move(x, y, g);
}

inline void ComplexFigure::Draw(System::Drawing::Graphics^ graphics)
{
    array<System::Drawing::Point>^ points = gcnew array<System::Drawing::Point>(3);
    points[0] = System::Drawing::Point(X, Y - 2 * R);
    points[1] = System::Drawing::Point(X - R * (int)System::Math::Sqrt(3), Y + R);
    points[2] = System::Drawing::Point(X + R * (int)System::Math::Sqrt(3), Y + R);

    bool isInsideConsole = true;

    for (int i = 0; i < 3; i++)
    {
        if (points[i].X < 0 || points[i].X > w || points[i].Y < 0 || points[i].Y > h)
        {
            isInsideConsole = false;
            break;
        }
    }

    if (isInsideConsole)
    {
        circle->h = h;
        circle->w = w;
        triangle->Draw(graphics);
        circle->Draw(graphics);
    }
    else
    {
        throw gcnew FigureException("ComplexFigure", X, Y, R);
    }
}
