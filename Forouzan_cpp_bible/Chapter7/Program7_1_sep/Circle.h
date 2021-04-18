#pragma once

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