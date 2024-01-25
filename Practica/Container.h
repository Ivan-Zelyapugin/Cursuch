#pragma once
#include "Figure.h"
#include "Error.h"
#include <stack>
#include <list>

using namespace System::Collections::Generic;

ref class Cont
{
private:
	Stack<Figure^>^ stack;

public:
	Cont()
	{
		stack = gcnew Stack<Figure^>();
	}

	void add_figure(Figure^ figure);

	void show_figure(Graphics^ g);

	void delete_figure();

	void Clear();

	bool empty();

	Figure^ GetTopElement();
};




