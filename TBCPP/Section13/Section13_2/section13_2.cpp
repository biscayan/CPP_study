#include <iostream>
#include "MyArray.h"
using namespace std;

int main()
{
    MyArray<char> my_array(10);

    for (int i = 0; i < my_array.getLength(); i++)
        my_array[i] = i + 65;

    my_array.print();

    return 0;
}