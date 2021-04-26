#include "Person.h"

int main()
{
	Person person("Hyeongju", 28);

	cout << person.getName() << endl;
	cout << person.getAge() << endl;

	person.setName("Namsoo");
	person.setAge(31);

	cout << person.getName() << endl;
	cout << person.getAge() << endl;

	return 0;
}