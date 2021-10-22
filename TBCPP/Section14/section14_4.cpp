#include <iostream>
#include <exception>
#include <string>
using namespace std;

int main()
{
    try
    {
        std::string s;
        s.resize(-1);
    }
    catch (std::exception& exception)
    {
        cout << typeid(exception).name() << endl; // class std::length_error
        std::cerr << exception.what() << std::endl; // string too long
    }

    return 0;
}