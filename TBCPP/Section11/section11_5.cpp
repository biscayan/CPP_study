#include <iostream>

class Base
{
public:
	int m_public; // 모든 범위에서 접근 가능
protected:
	int m_protected; // 자식 클래스까지만 접근 가능
private:
	int m_private; // 현재 클래스에서만 접근 가능
};

class Derived : private Base
{
public:
	Derived()
	{
		Base::m_public;
		Base::m_protected;
		Base::m_private; // 접근 불가능
	}
};

class GrandChild : public Derived
{
public:
	GrandChild()
	{
		Derived::m_public; // 접근 불가능, derived가 private처럼 작동하기 때문
	}
};

int main()
{
	Derived derived;
	derived.m_public = 1234; // 접근 불가능
}