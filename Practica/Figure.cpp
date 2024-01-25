#pragma once
#include "pch.h"
#include <Windows.h>
#include <iostream>
#include "Error.cpp"
using namespace System::Drawing;

ref class Figure
{
protected:
    int X;
    int Y;
    Color Figure_color;
    Color Figure_line_color;
public:
    int w;
    int h;
public:
    Figure() {}
    Figure(int x, int y, Color figureColor, Color lineColor)
    {
        X = x;
        Y = y;
        Figure_color = figureColor;
        Figure_line_color = lineColor;

    }

    virtual void Draw(Graphics^ graphics) = 0;
    virtual void Hide(Graphics^ graphics) = 0;
    virtual void Move(int x, int y, Graphics^ g)
    {
        Hide(g);
        X = x;
        Y = y;
        Draw(g);
    }
};
