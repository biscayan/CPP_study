#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout.setf(std::ios::showpos); // set the flag
	cout << 108 << endl; //+108
	cout.unsetf(std::ios::showpos); // delete the flag
	cout << 109 << endl; //109

	cout.setf(std::ios::hex, std::ios::basefield);
	cout << 108 << endl; //6c
	cout.setf(std::ios::uppercase);
	cout << 108 << endl; //6C
	cout.setf(std::ios::dec, std::ios::basefield);
	cout << 109 << endl; //109

	cout << std::boolalpha;
	cout << true << " " << false << endl; //true false

	cout << std::defaultfloat;
	cout << setprecision(3) << 123.456 << endl; //123
	cout << setprecision(4) << 123.456 << endl; //123.5
	cout << setprecision(5) << 123.456 << endl; //123.46
	cout << setprecision(6) << 123.456 << endl; //123.456
	cout << setprecision(7) << 123.456 << endl; //123.456

	cout << std::fixed;
	cout << setprecision(3) << 123.456 << endl; //123.456
	cout << setprecision(4) << 123.456 << endl; //123.4560
	cout << setprecision(5) << 123.456 << endl; //123.45600
	cout << setprecision(6) << 123.456 << endl; //123.456000
	cout << setprecision(7) << 123.456 << endl; //123.4560000

	cout << std::scientific;
	cout << setprecision(3) << 123.456 << endl; //1.235E+02
	cout << setprecision(4) << 123.456 << endl; //1.2346E+02
	cout << setprecision(5) << 123.456 << endl; //1.23456E+02
	cout << setprecision(6) << 123.456 << endl; //1.234560E+02
	cout << setprecision(7) << 123.456 << endl; //1.2345600E+02

	cout << -12345 << endl; //-12345
	cout.fill('*');
	cout << std::setw(10) << -12345 << endl; //****-12345
	cout << std::setw(10) << std::left << -12345 << endl; //-12345****
	cout << std::setw(10) << std::right << -12345 << endl; //****-12345
	cout << std::setw(10) << std::internal << -12345 << endl; //-****12345

	return 0;
}