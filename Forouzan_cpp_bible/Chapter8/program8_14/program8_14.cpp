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
		cout << "������ �� �� �����ϴ�." << endl;
		cout << "���α׷��� �����մϴ�." << endl;

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

	cout << "���Ͽ� " << size << "���� �����Ͱ� �ֽ��ϴ�." << endl;

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