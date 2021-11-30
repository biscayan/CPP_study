#include <iostream>
#include <cctype>
#include <string>
#include <bitset>

using namespace std;

void printCharacterClassification(const int& i)
{
    cout << boolalpha;
    cout << "isalnum " << bool(std::isalnum(i)) << endl;
    cout << "isblank " << bool(std::isblank(i)) << endl;
    cout << "isdigit " << bool(std::isdigit(i)) << endl;
    cout << "islower " << bool(std::islower(i)) << endl;
    cout << "isupper " << bool(std::isupper(i)) << endl;
}

void printStates(const std::ios& stream)
{
    cout << boolalpha;
    cout << "good()=" << stream.good() << endl;
    cout << "eof()=" << stream.eof() << endl; // end of file
    cout << "fail()=" << stream.fail() << endl;
    cout << "bad()=" << stream.bad() << endl;
}

bool isAllDigit(const string& str)
{
    bool ok_flag = true;

    for (auto e : str)
        if (!std::isdigit(e))
        {
            ok_flag = false;
            break;
        }

    return ok_flag;
}

void classifyCharacters(const string& str)
{
    for (auto e : str)
    {
        cout << e << endl;
        std::cout << "isdigit " << std::isdigit(e) << endl;
        std::cout << "isblank " << std::isblank(e) << endl;
        std::cout << "isalpha " << std::isalpha(e) << endl;
    }
}

int main()
{
    while (true)
    {
        char i;
        cin >> i;

        printStates(cin);

        //cout << boolalpha;
        //cout << std::bitset<8>(cin.rdstate()) << endl;
        //cout << std::bitset<8>(std::istream::goodbit) << endl;
        //cout << std::bitset<8>(std::istream::failbit) << endl;
        //cout << !bool((cin.rdstate() & std::istream::failbit) != 0) << endl;

        printCharacterClassification(i);

        cin.clear();
        cin.ignore(1024, '\n');
        cout << endl;
    }

    cout << boolalpha;
    cout << isAllDigit("1234") << endl;
    cout << isAllDigit("a1234") << endl;

    classifyCharacters("1234");
    classifyCharacters("a 1234");

    return 0;
}