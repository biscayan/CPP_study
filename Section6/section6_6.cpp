#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char mystring[] = "string"; //�������� ������ �ʴ� null character("\0")�� ����

	for (int i = 0; i < 7; ++i)
	{
		cout << (int)mystring[i] << endl; //115 116 114 105 110 103 0
	}

	//����ڰ� ������ �𸣴� 255��� ū ���ڷ� ����
	char mystring2[255];

	cin >> mystring2;

	cout << mystring2 << endl;

	//c style
	char source[] = "Copy!!";
	char destination[50];

	strcpy_s(destination, source); //���ڿ� ����
	strcat_s(destination, source); //���ڿ� ��ġ��

	//�� ���ڿ��� �������� ��
	//���ڿ��� ������ 0, �ƽ�Ű ���� str1>str2�̸� 1, str1<str2�̸� -1 ����
	cout << strcmp(mystring, source) << endl;; 

	return 0;
}