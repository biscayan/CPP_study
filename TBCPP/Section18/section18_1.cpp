#include <iostream>
#include<iomanip> 
using namespace std;

int main()
{
	char buf[5]; //qweasdzxc
	cin >> setw(5) >> buf; // reduce the cin to 5 chars including the space
	cout << buf << endl; //qwea

	cin.get(buf, 5);
	cout << cin.gcount() << " " << buf << endl; // 4 sdzx

	char buf[10]; // Hello
	cin.ignore(2); // ignore 2 chars
	cin >> buf;
	cout << buf << endl; //llo

    char buf[1024];
    cin >> buf;
    cout << buf << endl;
    cin.unget(); // push last char in buf to the buf again
    cin >> buf;
    cout << buf << endl;
  
    char buf[1024];
    cin >> buf;
    cout << buf << endl;
    cin.putback('A'); // push A into the buf
    cin >> buf;
    cout << buf << endl;

	return 0;
}