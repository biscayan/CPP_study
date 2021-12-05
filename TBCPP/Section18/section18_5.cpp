#include <iostream>
#include <regex>

using namespace std;

int main()
{
    //regex re("\\d+"); //more than one digit
    //regex re("[ab]"); // a or b
    //regex re("[[:digit:]]{3}"); // 3 digits
    //regex re("[A-Z]+"); // more than one alphabet from A to Z
    //regex re("[A-Z]{1,5}"); // the number of alphabets: 1~5
    //regex re("([0-9]{1})([-]?)([0-9]{1,4})"); // ?: either exist or not
    regex re("([0-9a-zA-Z]+)([@])([a-z]+)([.])(com|net|co.kr)"); // e-mail format

    string str;

    while (true)
    {
        getline(cin, str);

        if (std::regex_match(str, re))
            cout << "Match" << endl;
        else
            cout << "No Match" << endl;

        // print matches
        {
            auto begin = std::sregex_iterator(str.begin(), str.end(), re);
            auto end = std::sregex_iterator();
            for (auto itr = begin; itr != end; ++itr)
            {
                std::smatch match = *itr;
                cout << match.str() << " ";
            }
            cout << endl;
        }
    }
    cout << endl;

    return 0;
}