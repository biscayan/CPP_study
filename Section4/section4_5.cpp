#include <iostream>
#include <typeinfo>

int main()
{
	using namespace std;

	//��� data type������ �˷���
	cout << typeid(4.0).name() << endl;  //double

	auto a = 123;
	cout << typeid(a).name() << endl; //int

	//�Ͻ��� ����ȯ : ���α׷��Ӱ� ����ȯ�� �ش޶�� ��û���� ����, compiler�� �ڵ����� ����ȯ�� ��
	int b = 123.0; //double -> int
	cout << typeid(b).name() << endl; //int

	//numeric promotion : ���� �� �ִ� �޸𸮰� ���� �������� ū ������ ��ȯ�� ���� ���� ������ ������ ����
	float c = 1.0f;
	double d = a; 

	//numeric conversion
	int e = 30000;
	char f = e; //�޸� �������� f�� 30000�̶�� ���ڸ� ���� �� ����
	cout << static_cast<int>(f) << endl; //48

	float g = 3.14f;
	int h = g; //�Ҽ��ڸ��� ����
	cout << h << endl; //3

	//����ȯ �켱���� : int < unsigned int < long < unsigned long < long long < unsigned long long < float < double < long double
	//unsigned int�� �켱������ int���� �� �����Ƿ� int�� �ٲ��� ����
	cout << 5u - 10 << endl; //4294967291, �̻��� ���� ����

	//����� ����ȯ : ���α׷��Ӱ� ���������� ���� ��ȯ��
	int i = int(4.0); //c++ style cast
	int j = (int)4.0; //c style cast
	int k = static_cast<int>(4.0);

	return 0;
}