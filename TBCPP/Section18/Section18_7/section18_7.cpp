#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

int main()
{
    const string filename = "my_file.txt";

    // make a file
    {
        ofstream ofs(filename);

        for (char i = 'a'; i <= 'z'; i++)
            ofs << i;
        ofs << endl;
    }

    // read the file
    {
        ifstream ifs(filename);

        ifs.seekg(5); // move 5 byte and read
        cout << (char)ifs.get() << endl; // f

        ifs.seekg(5, ios::cur); // cursor
        cout << (char)ifs.get() << endl; // l

        string str;
        getline(ifs, str); 
        cout << str << endl; // mnopqrstuvwxyz
    }

    {
        fstream iofs(filename);

        iofs.seekg(5);
        cout << (char)iofs.get() << endl; // f

        iofs.seekg(5);
        iofs.put('A'); // f -> A
    }

    return 0;
}