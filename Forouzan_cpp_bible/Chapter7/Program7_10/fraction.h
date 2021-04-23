#pragma once


class Fraction
{
private:
	int numer; // ����
	int denom; // �и�

public:
	// ������
	Fraction(int num, int den);
	Fraction();
	Fraction(const Fraction& fract);

	// �Ҹ���
	~Fraction();

	// ������
	int getNumer() const;
	int getDenom() const;
	void print() const;

	// ������
	void setNumer(int num);
	void setDenom(int den);

private:
	void normalize();
	int GCD(int n, int m);
};