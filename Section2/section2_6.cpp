#include <iostream>

bool isEqual(int x, int y)
{
	//x�� y�� ������ true, �ٸ��� false return
	bool result = (x == y);

	return result;
}

int main()
{
	using namespace std;

	bool b1 = true; //copy initialization
	bool b2(false); //direct initialization
	bool b3{ true }; //uniform initialization

	cout << b1 << endl; //1���
	cout << b2 << endl; //0���

	cout << std::boolalpha;
	cout << b1 << endl; //true���
	cout << b2 << endl; //false���

	cout << !b1 << endl; //!�� not������ false���
	cout << !b2 << endl; //!�� not������ true���

	//and�� or operator�� ��ȣ�� �ι��� ���࿩�Ѵ�. �Ǽ� ����!!
	//�Ѵ� true�϶��� true���
	cout << (true && true) << endl; //&&�� and operator
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << (false && false) << endl;

	//�� �� �ϳ��� true���� true���
	cout << (true || true) << endl; //||�� or operator
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;

	int a = 3;
	int b = 1;

	if (a > b)
	//����� �� �� �̻��϶��� �߰�ȣ�� ����ؾ���
	{
		cout << "This is true" << endl;
		cout << a << " is larger than "<< b << endl;
	}
	else
	{
		cout << "This is false" << endl;
		cout << a << " is smaller than " << b << endl;
	}
		
	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 1) << endl;

	return 0;
}	