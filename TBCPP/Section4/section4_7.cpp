#include <iostream>
#include <typeinfo>

//enum -> user-defined data types
enum Color
{
	//���� �빮�ڷ� ����
	COLOR_BLACK, //0
	COLOR_RED, //1
	COLOR_BLUE, //2
	COLOR_GREEN //3
}; 
//;�� �� �־����

enum Feeling
{
	//���ڸ� ���Ҽ��� ����
	ANGRY = -2, //-2
	SAD, //-1
	TIRED, //0
	EXCITED = 3, //3
	HAPPY //4
};

int main()
{
	using namespace std;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	cout << paint << endl; //0

	//detour
	Color my_color = static_cast<Color>(3);

	int in_number;
	cin >> in_number;

	if (in_number == static_cast<Color>(0))
		my_color = static_cast<Color>(0);

	return 0;
}