#include <iostream>
#include <string>

using namespace std;

//struct : �������� �����͸� �ϳ��� ����
struct Person
{
	double height;
	float weight;
	int age;
	string name;

	void printPerson()
	{
		cout << height << " " << weight << " " << age << " " << name << " " << endl;
	}
};

struct Employee //14bytes
{
	short id; //2bytes
	int age; //4bytes
	double wage; //8bytes
};

int main()
{
	Person me{1.7, 59.8, 27, "Hyeongju"};
	me.printPerson();

	Employee emp1;

	//2bytes�� �߰��� (padding)
	cout << sizeof(Employee) << endl; //16bytes

	return 0;
}