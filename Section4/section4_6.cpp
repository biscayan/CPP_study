#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	//string : ���α׷��ӵ��� ���ڿ��� �ٷ궧 ���� ����ϴ� ���� ��Ƴ��� class
	const string my_hello = "Hello, world";
	const char my_strs [] = "Hello, world";

	cout << my_hello << endl;

	cout << "What is your name? : ";
	string name;

	//�߰��� ���Ⱑ �ִ� ���� ���������� �Է��� �ȵ�
	//cin >> name;
	
	//getline�� ���͸� ĥ ������ ��� �޾Ƶ���, �� ������ ��ä�� �Է°���
	getline(cin, name);

	cout << "What is your age? : ";

	int int_age;

	//�Է����� ���� buffer�� �������� ��������
	cin >> int_age;

	//new line�� �ö����� 32767���� ���ڸ� ���� �� ����	
	//cin.ignore(32767, '\n');

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "What is your age? : ";
	string str_age;
	getline(cin, str_age);
	cout << name << " is " << str_age << " years old." <<endl;

	//string append
	//append(+)�� string class�ȿ� ���ǵǾ� ����
	string a = "Hello, ";
	string b = "world";

	cout << a + b << endl;

	cout << a.length() << endl; //7

	return 0;
}