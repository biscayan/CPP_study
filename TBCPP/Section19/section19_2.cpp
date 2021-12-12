#include <iostream>
#include <tuple>
using namespace std;

auto my_func()
{
    return tuple(123, 456, 789, 10);
}

int main()
{
    auto [a, b, c, d] = my_func();
    cout << a << " " << b << " " << c << " " << d << endl;

    return 0;
}