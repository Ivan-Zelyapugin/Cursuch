#pragma once
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"

ref class ComplexFigure : public Figure
{
private:
    int R;
    Circle^ circle;
    Triangle^ triangle;

public:
    ComplexFigure(int x, int y, int r, System::Drawing::Color figureColor, System::Drawing::Color figureLineColor, System::Drawing::Color figureColor1, System::Drawing::Color figureLineColor1)
        : Figure(x, y, figureColor, figureLineColor), R(r)
    {
        circle = gcnew Circle(x, y, r, figureColor, figureLineColor);
        triangle = gcnew Triangle(x, y, r, figureColor1, figureLineColor1);
    }

    ~ComplexFigure()
    {
        delete circle;
        delete triangle;
    }

    void Hide(Graphics^ graphics) override;


    void Move(int x, int y, Graphics^ g) override;

    void Draw(System::Drawing::Graphics^ graphics) override;
};
