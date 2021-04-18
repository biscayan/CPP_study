#include <iostream>
#include <bitset>

int main()
{
	using namespace std;


	////////////////////Bit flags////////////////////

	const unsigned char opt0 = 1 << 0; //00000001
	const unsigned char opt1 = 1 << 1; //00000010
	const unsigned char opt2 = 1 << 2; //00000100
	const unsigned char opt3 = 1 << 3; //00001000

	//no item
	unsigned char items_flag = 0;
	cout << "No item " << bitset<8>(items_flag) << endl; //00000000

	//get item0
	items_flag |= opt0;
	cout << "Item0 obtained " << bitset<8>(items_flag) << endl; //00000001

	//get item3
	items_flag |= opt3;
	cout << "Item3 obtained " << bitset<8>(items_flag) << endl; //00001001

	//lose item3
	items_flag &= ~opt3;
	cout << "Item3 lost " << bitset<8>(items_flag) << endl; //00000001

	//has item1?
	if (items_flag & opt1)
		cout << "Has item1 " << endl;
	else
		cout << "Has not item1 " << endl;

	//get item2 and item3
	items_flag |= (opt2 | opt3);
	cout << "Item2 and item3 obtained " << bitset<8>(items_flag) << endl; //00001101

	// item2 o, item1 x -> item2 x, item1 o
	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= opt2;
		items_flag ^= opt1;
	}
	cout << bitset<8>(items_flag) << endl; //00001011


	////////////////////Bit masks////////////////////

	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;
	
	cout << bitset<32>(red_mask) << endl; //00000000111111110000000000000000
	cout << bitset<32>(green_mask) << endl; //00000000000000001111111100000000
	cout << bitset<32>(blue_mask) << endl; //00000000000000001111111100000000

	unsigned int pixel_color = 0xDAA520;
	cout << bitset<32>(pixel_color) << endl; //00000000110110101010010100100000

	//extract colors
	unsigned char red = (pixel_color & red_mask) >> 16;
	cout << "Red " << bitset<8>(red) << " " << int(red) << endl; //11011010 //218

	unsigned char green = (pixel_color & green_mask) >> 8;
	cout << "Green " << bitset<8>(green) << " " << int(green) << endl; //10100101 //165

	unsigned char blue = pixel_color & blue_mask;
	cout << "Blue " << bitset<8>(blue) << " " << int(blue) <<endl; //00100000 //32

	return 0;
}