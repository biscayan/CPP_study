#include <iostream>

int main()
{
	using namespace std;

	int x;
	cin >> x;

	if (x > 10)
		//�����ϰ��� �ϴ°� �� �� �� ���� �߰�ȣ ��������
		//������ �� �� �̻��� ���� �� �߰�ȣ�� ����ؾ���
		cout << x << " is greater than 10" << endl;
	else
	{
		cout << x << " is smaller than 10" << endl;
		cout <<"Try to input another number" << endl;
	}

	int y, z;
	cin >> y >> z;

	//if (y > 0 && z > 0); //���ǹ����� ;��� x
	if (y > 0 && z > 0) 
		cout << "Both numbers are positive" << endl;
	else if (y > 0 || z > 0)
		cout << "Only one number is positive" << endl;
	else
		cout << "Neither number is positive" << endl;

	int q;
	cin >> q;

	if (q > 0)
		cout << "Positive" << endl;
	else if (q == 0)
		return 0; //���α׷��� ����
	else if (q == -1)
		cout << "Negative" << endl;

}