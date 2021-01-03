#include <iostream>
#include <limits>

using namespace std;

int main()
{
	cout << "short min : " << numeric_limits<short>::min() << endl;
	cout << "short max : " << numeric_limits<short>::max() << endl;

	cout << "unsigned int min : " << numeric_limits<unsigned int>::min() << endl;
	cout << "unsigned int max : " << numeric_limits<unsigned int>::max() << endl;

	cout << "long min : " << numeric_limits<long>::min() << endl;
	cout << "long max : " << numeric_limits<long>::max() << endl;

	cout << "long long min : " << numeric_limits<long long>::min() << endl;
	cout << "long long max : " << numeric_limits<long long>::max() << endl;

	cout << "float min : " << numeric_limits<float>::min() << endl;
	cout << "float max : " << numeric_limits<float>::max() << endl;

	cout << "double min : " << numeric_limits<double>::min() << endl;
	cout << "double max : " << numeric_limits<double>::max() << endl;

	return 0;
}