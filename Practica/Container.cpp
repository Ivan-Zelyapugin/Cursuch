#pragma once
#include "pch.h"
#include"Container.h"

inline void Cont::add_figure(Figure^ figure)
{
	stack->Push(figure);
}

inline void Cont::show_figure(Graphics^ g)
{
	if (!empty())
	{
		Stack<Figure^>^ tempStack = gcnew Stack<Figure^>();

		while (!empty())
		{
			Figure^ figure = stack->Pop();
			figure->Draw(g);
			tempStack->Push(figure);
		}

		while (!tempStack->Count == 0)
		{
			Figure^ figure = tempStack->Pop();
			stack->Push(figure);
		}
	}
	else
	{
		throw gcnew FigureException("Нельзя вывести фигуры, стек пуст!");
	}
}

inline void Cont::delete_figure()
{
	if (!empty())
	{
		stack->Pop();
	}
	else
	{
		throw gcnew FigureException("Нельзя удалить фигуру, стек пуст!");
	}
}

inline void Cont::Clear()
{
	stack->Clear();
}

inline bool Cont::empty()
{
	return stack->Count == 0;
}

inline Figure^ Cont::GetTopElement()
{
	if (!empty())
	{
		return stack->Peek();
	}
	else
	{
		throw gcnew FigureException("Стек пуст!");
	}
}




