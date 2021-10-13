#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// ����ó���� �������� ���� ��Ȳ�� ���� �߻��� ���� ����ؼ� ����
	//try, catch, throw

	double x;
	cin >> x;

	try
	{
		if (x < 0.0) throw std::string("Negative input");
		cout << std::sqrt(x) << endl;
	}
	catch (std::string error_message)
	{
		cout << error_message << endl;
	}

	return 0;
}