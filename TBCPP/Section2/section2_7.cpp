#include <iostream>
#include <limits>

int main()
{
	using namespace std;
	char c1 = 65; 
	char c2 = 'A'; //�����ϳ��� '' ��� , ���ڿ��� "" ���

	cout << c1 << endl;
	cout << int(c2) << endl;

	//C style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	//C++ style casting
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;
	cout << static_cast<int>(c2) << endl;

	cout << sizeof(char) << endl;
	cout << int(std::numeric_limits<char>::max()) << endl;
	cout << int(std::numeric_limits<char>::lowest()) << endl;

	// /n�� endl�� �ٹٲ��� �ϴ� ����� ������,
	// /n�� ���ڿ� �Ұ��ϰ� endl�� cout buffer�� �ִ� ������� ȭ�鿡 �� ���
	cout << "\"first line\"" << '\n';
	cout << "\"second line\"" << '\n';

	cout << "\"first line\"" << endl;
	cout << "\"second line\"" << endl;

	//ascii�� �Ѿ� unicode�� �ִ� ���ڸ� cover
	wchar_t c3;
	char32_t c4;

	return 0;
}