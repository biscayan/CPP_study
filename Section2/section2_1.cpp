#include <iostream>

int main()
{
	using namespace std;

	bool bValue = true;
	char chValue = 'A';
	//float�� �ڿ� f�� �ٿ�����
	float fValue = 3.141592f;
	double dValue = 3.141592;

	//�������Ҷ� �ڷ����� �ڵ����� ����
	auto aValued = 3.141592;
	auto aValuef = 3.141592f;

	//������ �ʱ�ȭ�ϴ� ���
	int a = 123; //1.copy initialization
	int a(123); //2.direct initialization
	int a{ 123 }; //3.uniform initialization

	//�������� ������ �ѹ��� ����, �� �ڷ����� ���ƾ���
	int k = 1, l = 2, m = 3;

	//bValue�� ���̸�1, �����̸� 0 ���
	cout << (bValue ? 1 : 0) << endl;
	cout << chValue << endl;

	//�Ҽ��� �ڸ��� ������ ����
	cout << fValue << endl;
	cout << dValue << endl;
	cout << aValued << endl;
	cout << aValuef << endl;

	//������ ����� ���
	cout<< sizeof(aValued) << endl;
	cout << sizeof(aValuef) << endl;
	//�ڷ����� ���� �־��൵ ��
	cout << sizeof(char) << endl;

	return 0;
}