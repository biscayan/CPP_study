#pragma once


class Fraction
{
private:
	int numer; // 분자
	int denom; // 분모

public:
	// 생성자
	Fraction(int num, int den);
	Fraction();
	Fraction(const Fraction& fract);

	// 소멸자
	~Fraction();

	// 접근자
	int getNumer() const;
	int getDenom() const;
	void print() const;

	// 설정자
	void setNumer(int num);
	void setDenom(int den);

private:
	void normalize();
	int GCD(int n, int m);
};