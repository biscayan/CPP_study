#include <iostream>
#include <vector>
#include <utility> // std::forward
using namespace std;

struct MyStruct
{};

void func(MyStruct& s)
{
    cout << "Pass by L-ref" << endl;
}

void func(MyStruct&& s)
{
    cout << "Pass by R-ref" << endl;
}

// template doesn't know the difference between L-value and R-value
// should use perfect forwarding
template <typename T>
void func_wrapper(T&& t)
{
    func(std::forward<T>(t));
}

int main()
{
    MyStruct s;

    func(s); // L-value
    func(MyStruct()); // R-value

    func_wrapper(s); // L-value
    func_wrapper(MyStruct()); // R-value

    return 0;
}