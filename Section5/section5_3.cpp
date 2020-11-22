#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	BLUE,
	GREEN
};

void PrintColor1(Colors color)
{
	switch (color)
	{
	case Colors::BLACK:
		cout << "Black" << endl;
		break; //break을 하지 않으면 아래의 내용들까지 모두 출력
	case Colors::WHITE:
		cout << "White" << endl;
		break; 
	case Colors::RED:
		cout << "Red" << endl;
		break; 
	case Colors::BLUE:
		cout << "Blue" << endl;
		break; 
	case Colors::GREEN:
		cout << "Green" << endl;
		break; 
	}
		
}

void PrintColor2(Colors color)
{
	switch (static_cast<int>(color))
	{
	case 0:
		cout << "Black" << endl;
		break; 
	case 1:
		cout << "White" << endl;
		break; 
	case 2:
		cout << "Red" << endl;
		break; 
	case 3:
		cout << "Blue" << endl;
		break; 
	case 4:
		cout << "Green" << endl;
		break; 
	}

}

void Calcnum(int x)
{
	switch (x)
	{

	case 0:
	{
		int y = 10;
		int z;
		z = y + x;
		cout << y << " + " << x << " = " << z << endl;
		break;
	}

	case 1:
	{
		int y = 10;
		int z;
		z = y - x;
		cout << y << " - " << x << " = " << z << endl;
		break;
	}

	//case에 없는 값일 때
	default:
		cout << "Undefined input " << x << endl;
		break;
	}
}


int main()
{
	PrintColor1(Colors::BLUE);
	PrintColor2(Colors::BLUE);

	int x;
	cin >> x;

	Calcnum(x);

	return 0;
}