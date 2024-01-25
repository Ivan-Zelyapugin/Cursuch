#pragma once
#include "Figure.h"
#include <Windows.h>
#include <cmath>

ref class Triangle : public Figure
{
protected:
    double a;
    int R;

public:
    Triangle() {}

    Triangle(int x, int y, double sideLength, Color figureColor, Color lineColor)
        : Figure(x, y, figureColor, lineColor), a(sideLength) {}

    Triangle(int x, int y, int radius, Color figureColor, Color lineColor)
        : Figure(x, y, figureColor, lineColor), R(radius)
    {
        a = R * 2 * System::Math::Sqrt(3.0);
    }

    void Hide(Graphics^ graphics) override;
    void Draw(Graphics^ graphics) override;
};

