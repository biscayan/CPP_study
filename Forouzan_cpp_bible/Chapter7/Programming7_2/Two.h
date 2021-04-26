#pragma once

class Two
{
private:
	int m_x;
	char m_a;

public:
	Two(int x, char a);

	int getX() const;
	char getA() const;

	void setX(int x);
	void setA(char a);
};