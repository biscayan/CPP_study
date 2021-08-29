#include "MyArray.h"

// linking error
// main file doesn't know the type
template<typename T>
void MyArray<T>::print()
{
	for (int i = 0; i < m_length; ++i)
	{
		std::cout << m_data[i] << " ";
	}
	std::cout << std::endl;
}

// solution: explicit instantiation
template class MyArray<char>;
template class MyArray<double>;