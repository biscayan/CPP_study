#include <iostream>
#include <cassert>

using namespace std;

class Rectangle
{
private:
	double m_length;
	double m_height;

public:
	Rectangle(double len, double hgt);
	Rectangle(const Rectangle &rec);
	~Rectangle();

	void print() const;
	double getArea() const;
	double getPerimeter() const;
};

Rectangle::Rectangle(double len, double hgt)
	: m_length(len), m_height(hgt)
{
	if ((m_length <= 0.0) || (m_height <= 0.0))
	{
		cout << "Rectangle ��ü�� ������ �� �����ϴ�." << endl;
		assert(false);
	}
}

Rectangle::Rectangle(const Rectangle &rec)
	:m_length(rec.m_length), m_height(rec.m_height)
{}

Rectangle::~Rectangle()
{}

void Rectangle::print() const
{
	cout << "Rectangle�� �ʺ� : " << m_length << endl;
	cout << "Rectangle�� ���� : " << m_height << endl;
}

double Rectangle::getArea() const
{
	return (m_length * m_height);
}

double Rectangle::getPerimeter() const
{
	return (2 * (m_length + m_height));
}

int main()
{
	Rectangle rec1(3.0, 4.2);
	Rectangle rec2(5.1, 10.2);
	Rectangle rec3(rec2);

	cout << "[Rectangle1]" << endl;
	rec1.print();
	cout << "���� : " << rec1.getArea() << endl;
	cout << "�ѷ� : " << rec1.getPerimeter() << endl;
	cout << endl;

	cout << "[Rectangle2]" << endl;
	rec2.print();
	cout << "���� : " << rec2.getArea() << endl;
	cout << "�ѷ� : " << rec2.getPerimeter() << endl;
	cout << endl;

	cout << "[Rectangle3]" << endl;
	rec3.print();
	cout << "���� : " << rec3.getArea() << endl;
	cout << "�ѷ� : " << rec3.getPerimeter() << endl;
	cout << endl;

	return 0;
}
