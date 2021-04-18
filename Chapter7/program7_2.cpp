#include <iostream>

using namespace std;

class Circle
{
private:
	double radius;

public:
	Circle(double radius);
	~Circle();

	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
};

// �Ű������� �ִ� ������
Circle::Circle(double rds)
	:radius(rds)
{
	cout << "������ ȣ��" << endl;
}

// �Ҹ���
Circle::~Circle()	
{
	cout << "�Ҹ��� ȣ��" << endl;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const
{
	const double PI = 3.14;

	return (PI * radius * radius);
}

double Circle::getPerimeter() const
{
	const double PI = 3.14;

	return (2 * PI * radius);
}


int main()
{
	Circle circle1(10.0);

	cout << "Circle1" << endl;
	cout << "Radius : " << circle1.getRadius() << endl;
	cout << "Area : " << circle1.getArea() << endl;
	cout << "Perimeter : " << circle1.getPerimeter() << endl;
	cout << endl;

	Circle circle2(20.0);

	cout << "Circle2" << endl;
	cout << "Radius : " << circle2.getRadius() << endl;
	cout << "Area : " << circle2.getArea() << endl;
	cout << "Perimeter : " << circle2.getPerimeter() << endl;
	cout << endl;

	Circle circle3(30.0);

	cout << "Circle3" << endl;
	cout << "Radius : " << circle3.getRadius() << endl;
	cout << "Area : " << circle3.getArea() << endl;
	cout << "Perimeter : " << circle3.getPerimeter() << endl;
	cout << endl;

	// �Ҹ��� ȣ�� ����, �Ҹ��ڸ� ���� ȣ������ �ʾƵ� �ý����� �˾Ƽ� �Ҹ��ڸ� ȣ����
	// ��ü�� ������ ������ �ݴ�� ��ü�� �Ҹ��, �� circle3 -> circle2 -> circle1 ������ �Ҹ�

	return 0;
}