#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	// cin, cout���� ���� �ε�ȣ�� �ٸ��� (operator overloading)
	// << left shift
	// >> right shift
	// ~, &, |, ^

	unsigned int a = 3; //00000011
	cout << std::bitset<8>(a) << " " << a << endl; //a�� 8��Ʈ�� 2������ ǥ����
	cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl; //�������� 1�̵� //00000110 //3 * 2
	cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl; //�������� 2�̵� //00001100 //3 * 2^2
	cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl; //�������� 3�̵� //00011000 //3 * 2^3

	unsigned int b = 64; //01000000
	cout << std::bitset<8>(b) << " " << b << endl; //b�� 8��Ʈ�� 2������ ǥ����
	cout << std::bitset<8>(b >> 1) << " " << (b >> 1) << endl; //���������� 1�̵� //00100000 //64 / 2
	cout << std::bitset<8>(b >> 2) << " " << (b >> 2) << endl; //���������� 2�̵� //00010000 //64 / 2^2
	cout << std::bitset<8>(b >> 3) << " " << (b >> 3) << endl; //���������� 3�̵� //00001000 //64 / 2^3
	
	//bitwise not
	cout << std::bitset<8>(~b) << " " << (~b) << endl; 

	//������ǥ�� -> �տ� 0b�� ����
	unsigned int c = 0b1100;
	unsigned int d = 0b0110;
	cout << c << endl; //12
	cout << d << endl; //6

	cout << std::bitset<8>(c & d) << " " << (c & d) << endl; //bitwise and //0100
	cout << std::bitset<8>(c | d) << " " << (c | d) << endl; //bitwise or //1110
	cout << std::bitset<8>(c ^ d) << " " << (c ^ d) << endl; //bitwise xor //1010

	//Quiz
	/*
	0110 >> 2   10������
	5 | 12
	5 & 2
	5 ^ 2
	*/
	return 0;
}