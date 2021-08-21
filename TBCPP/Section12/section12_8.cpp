#include <iostream>
using namespace std;

class PowerDevice
{
public:
    int m_i;

    PowerDevice(int power = 0)
    {
        cout << "PowerDevice: " << power << "\n";
    }
};

//class Scanner : public PowerDevice
class Scanner : virtual public PowerDevice
{
public:
    Scanner(int scanner, int power)
        : PowerDevice(power)
    {
        cout << "Scanner: " << scanner << "\n";
    }
};

//class Printer : public PowerDevice
class Printer : virtual public PowerDevice
{
public:
    Printer(int printer, int power)
        : PowerDevice(power)
    {
        cout << "Printer: " << printer << "\n";
    }
};

class Copier : public Scanner, public Printer
{
public:
    Copier(int scanner, int printer, int power)
        : Scanner(scanner, power), Printer(printer, power)
        , PowerDevice(power) // virtual 넣을 때 없으면 error
    {}
};

int main()
{
    Copier cop(1, 2, 3);

    // same address
    cout << &cop.Scanner::PowerDevice::m_i << endl;
    cout << &cop.Printer::PowerDevice::m_i << endl;

    return 0;
}