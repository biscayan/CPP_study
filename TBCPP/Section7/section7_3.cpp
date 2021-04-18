#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void Add_one(int& y)
{
	y += 1;
	cout << y << " " << &y << endl; 
}

// degree를 입력 받아 sin, cos를 out
void Get_sin_cos(const double degree, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592;
	const double radian = degree * pi / 180.0;

	sin_out = sin(radian);
	cos_out = cos(radian);

}

// array도 참조로 전달 가능
void Print_element(vector<int>&arr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int x = 5;
		
	cout << x << " " << &x << endl; // 5 0066FA4C

	// x변수 자체가 함수에 매개변수로 전달됨
	Add_one(x); // 6 0066FA4C

	// 참조에 의해 전달하면 함수 밖에서도 영향을 받음
	cout << x << " " << &x << endl; // 6 0066FA4C

	double sin, cos = 0.0;

	Get_sin_cos(60.0, sin, cos);

	cout << sin << " " << cos << endl; // 0.866025 0.5

	vector<int> arr{ 1,2,3,4,5 };
	Print_element(arr); //1 2 3 4 5

	return 0;
}