#include <iostream>

int main()
{
	using namespace std;

	int x;
	cin >> x;

	if (x > 10)
		//실행하고자 하는게 한 줄 일 때는 중괄호 생략가능
		//하지만 두 줄 이상일 때는 꼭 중괄호를 사용해야함
		cout << x << " is greater than 10" << endl;
	else
	{
		cout << x << " is smaller than 10" << endl;
		cout <<"Try to input another number" << endl;
	}

	int y, z;
	cin >> y >> z;

	//if (y > 0 && z > 0); //조건문에는 ;사용 x
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
		return 0; //프로그램을 종료
	else if (q == -1)
		cout << "Negative" << endl;

}