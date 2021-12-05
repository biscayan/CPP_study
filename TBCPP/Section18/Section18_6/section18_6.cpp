#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>// exit()
#include <sstream>

using namespace std;

int main()
{
    // ascii writing 
    if (true)
    {
        ofstream ofs("my_first_file_ascii.dat"); 

        // ascii save
        ofs << "Line 1" << endl;
        ofs << "LIne 2" << endl;

        ofs.close(); // not necessary
    }

    // ascii reading
    if (true)
    {
        ifstream ifs("my_first_file_ascii.dat");

        if (!ifs)
        {
            cerr << "Cannot open file" << endl;
            exit(1);
        }

        while (ifs)
        {
            std::string str;
            getline(ifs, str);
            std::cout << str << endl;
        }
    }

    // prefer to save in binary because ascii is very slow
    // binary writing 
    if (true)
    {
        ofstream ofs("my_first_file_binary.dat", ios::binary);

        // binary save
        const unsigned num_data = 10;
        ofs.write((char*)&num_data, sizeof(num_data));

        for (int i = 0; i < num_data; i++)
            ofs.write((char*)&i, sizeof(i));
    }

    // binary reading
    if (true)
    {
        ifstream ifs("my_first_file_binary.dat", ios::binary);

        if (!ifs)
        {
            cerr << "Cannot open file" << endl;
            exit(1);
        }

        unsigned num_data = 0;
        ifs.read((char*)&num_data, sizeof(num_data));

        for (unsigned i = 0; i < num_data; i++)
        {
            int num;
            ifs.read((char*)&num, sizeof(num));
            cout << num << endl;
        }
    }

    return 0;
}