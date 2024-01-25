#pragma once
#include "Figure.h"
#include <windows.h>
#include <cmath>
using namespace System::Windows::Forms;

ref class Circle : public Figure
{
private:
    int radius;

public:
    Circle() : Figure()
    {
        radius = 0;
    }

    Circle(int x, int y, int r, Color figureColor, Color lineColor) : Figure(x, y, figureColor, lineColor)
    {
        radius = r;
    }

    void Hide(Graphics^ graphics) override;

    void Draw(Graphics^ graphics) override;
};