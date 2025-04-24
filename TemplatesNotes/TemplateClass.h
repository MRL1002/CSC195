#pragma once
#include <iostream>

//make the class itself a template, make default of int type
template<typename T = int>
class TemplateClass
{
private:
	T x, y;

public:

	TemplateClass() : x{ 0 }, y{ 0 } {};
	TemplateClass(T x, T y) : x{ x }, y{ y } {};



};

template<typename T, unsigned int Size>
class TemplateArray
{
private:
	T m_elements[Size];
public:
	T operator [] (int index) { return m_elements[index]; }

};
