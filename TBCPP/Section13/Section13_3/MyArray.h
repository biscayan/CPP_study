#pragma once
#include <assert.h>
#include <iostream>

template<typename T, unsigned int T_size>

class MyArray
{
private:
	T* m_data;

public:
	MyArray()
	{
		m_data = new T [T_size];
	}

	~MyArray()
	{
		delete[] m_data;
	}

	T& operator[] (int index)
	{
		assert(index >= 0 && index < T_size);
		return m_data[index];
	}

	int getLength()
	{
		return T_size;
	}

	void print()
	{
		for (int i = 0; i < T_size; ++i)
		{
			std::cout << m_data[i] << " ";
		}
		std::cout << std::endl;
	}
};