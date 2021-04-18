#include <iostream>
#include <limits>

int main()
{
	using namespace std;
	char c1 = 65; 
	char c2 = 'A'; //문자하나는 '' 사용 , 문자열은 "" 사용

	cout << c1 << endl;
	cout << int(c2) << endl;

	//C style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	//C++ style casting
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;
	cout << static_cast<int>(c2) << endl;

	cout << sizeof(char) << endl;
	cout << int(std::numeric_limits<char>::max()) << endl;
	cout << int(std::numeric_limits<char>::lowest()) << endl;

	// /n과 endl은 줄바꿈을 하는 기능은 같지만,
	// /n은 문자에 불과하고 endl은 cout buffer에 있는 내용들을 화면에 다 출력
	cout << "\"first line\"" << '\n';
	cout << "\"second line\"" << '\n';

	cout << "\"first line\"" << endl;
	cout << "\"second line\"" << endl;

	//ascii를 넘어 unicode에 있는 문자를 cover
	wchar_t c3;
	char32_t c4;

	return 0;
}