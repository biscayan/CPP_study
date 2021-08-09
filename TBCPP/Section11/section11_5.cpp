#include <iostream>

class Base
{
public:
	int m_public; // ��� �������� ���� ����
protected:
	int m_protected; // �ڽ� Ŭ���������� ���� ����
private:
	int m_private; // ���� Ŭ���������� ���� ����
};

class Derived : private Base
{
public:
	Derived()
	{
		Base::m_public;
		Base::m_protected;
		Base::m_private; // ���� �Ұ���
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		Derived::m_public; // ���� �Ұ���, derived�� privateó�� �۵��ϱ� ����
	}
};

int main()
{
	Derived derived;
	derived.m_public = 1234; // ���� �Ұ���
}