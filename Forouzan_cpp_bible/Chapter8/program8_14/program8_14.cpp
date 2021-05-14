#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	const int CAPACITY = 10;

	int array[CAPACITY] = { 0 };

	ifstream integerfile;
	integerfile.open("integerFile.txt");

	if (!integerfile)
	{
		cout << "파일을 열 수 없습니다." << endl;
		cout << "프로그램을 종료합니다." << endl;

		return 0;
	}

	int data;
	int size = 0;

	while (integerfile >> data)
	{
		if (data >= 0 && data <= 9)
		{
			size++;
			array[data]++;
		}
	}

	integerfile.close();

	cout << "파일에 " << size << "개의 데이터가 있습니다." << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << setw(3) << i << " ";

		for (int j = 1; j <= array[i]; j++)
		{
			cout << "*";
		}
		cout << " " << array[i] << endl;
	}

	return 0;
}