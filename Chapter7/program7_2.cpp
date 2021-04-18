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

// 매개변수가 있는 생성자
Circle::Circle(double rds)
	:radius(rds)
{
	cout << "생성자 호출" << endl;
}

// 소멸자
Circle::~Circle()	
{
	cout << "소멸자 호출" << endl;
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

	// 소멸자 호출 시점, 소멸자를 직접 호출하지 않아도 시스템이 알아서 소멸자를 호출함
	// 객체가 생성된 순서와 반대로 객체가 소멸됨, 즉 circle3 -> circle2 -> circle1 순서로 소멸

	return 0;
}