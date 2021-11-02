#include <iostream>
#include <string>
#include <vector>
#include <sstream> // stringstream

using namespace std;

template <typename T>
std::string ToString(T x)
{
    std::ostringstream osstream;
    osstream << x;
    return osstream.str();
}

template <typename T>
bool FromString(const std::string& str, T& x)
{
    std::istringstream isstream(str);
    return (isstream >> x) ? true : false;
}

int main()
{
    {
        std::string my_string("my string");
        //std::string second_string(my_string, 3); // string
        std::string second_string(my_string, 3, 5); // strin
    }

    // c-style
    {
        const char* my_string = "my string";
        std::string second_string(my_string, 4); // my s
    }

    {
        std::string second_string(10, 'A'); // AAAAAAAAAA
    }

    {
        std::vector<char> vec;
        for (auto e : "Today is a good day.")
            vec.push_back(e);

        //std::string second_string(vec.begin(), vec.end()); // Today is a good day.
        std::string second_string(vec.begin(), std::find(vec.begin(), vec.end(), 'y')); // Toda
    }

    {
        std::string my_str(std::to_string(1004));

        int i = std::stoi(my_str); // string -> int
        float f = std::stof(my_str); // string -> float

        my_str += std::to_string(128); // 1004128
    }

    {
        std::string my_str(ToString(3.141592));
        std::string my_str("Hello");

        double d;

        if (FromString(my_str, d))
            cout << d << endl;
        else
            cout << "Can not convert string to double" << endl;
    }

    return 0;
}