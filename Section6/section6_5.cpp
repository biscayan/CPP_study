#include <iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_cols = 5;

	//row-major
	//num_rows는 생략가능, 몇 줄이 있는지는 compiler가 자동으로 측정가능
	//num_cols는 생략불가
	int arr[num_rows][num_cols] =
	{
		//값을 생략한 곳은 0으로 채워짐
		{1,2,3,4,5}, //row0
		{6,7,8,9,10}, //row1
		{11,12,13,14,15} //row2
	};

	for (int i = 0; i < num_rows; ++i)
	{
		for (int j = 0; j < num_cols; ++j)
		{
			cout << arr[i][j] << '\t';
		}

		cout << endl;
	}
	
	//주소값이 4씩 증가, 내부적으로는 1차열로 되어있지만 row별로 접어서 표현을 해줌
	for (int i = 0; i < num_rows; ++i)
	{
		for (int j = 0; j < num_cols; ++j)
		{
			cout << (int)&arr[i][j] << '\t';
		}

		cout << endl;
	}

	return 0;
}