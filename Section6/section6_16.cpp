#include <iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;

	person.age = 5;
	person.weight = 30;

	// reference
	Person& ref = person;
	ref.age = 15;

	// pointer
	Person* ptr = &person;
	ptr->age = 30;
	(*ptr).age = 23;

	return 0;
}