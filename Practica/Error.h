#pragma once
#include <string>

ref class FigureException : public System::Exception
{
private:
    System::String^ error;
    System::String^ figur;
    int x, y, r;

public:
    FigureException(System::String^ fig, int x, int y, int r);
    FigureException(System::String^ fig);
    property System::String^ ErrorMessage
    {
        System::String^ get();
    }
};
