#include <iostream>

using namespace std;

// 1. Ŭ���� ���� : ������ ����� ��� �Լ��� ����
class Circle
{
private:
	double radius;

public:
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
	void setRadius(double value);
};

// 2. ��� �Լ� ����
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

void Circle::setRadius(double value)
{
	radius = value;
}

// 3. ���ø����̼�
int main()
{
	Circle circle1;

	circle1.setRadius(10.0);

	cout << "Circle1" << endl;
	cout << "Radius : " << circle1.getRadius() << endl;
	cout << "Area : " << circle1.getArea() << endl;
	cout << "Perimeter : " << circle1.getPerimeter() << endl;
	cout << endl;

	Circle circle2;

	circle2.setRadius(20.0);

	cout << "Circle2" << endl;
	cout << "Radius : " << circle2.getRadius() << endl;
	cout << "Area : " << circle2.getArea() << endl;
	cout << "Perimeter : " << circle2.getPerimeter() << endl;
	cout << endl;

	return 0;
}