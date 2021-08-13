#include <iostream>
using namespace std;

class A
{
public:
    virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
    void print() { cout << "B" << endl; }
    // virtual is not necessary in grammatical purpose, but it is needed for debugging 
    // virtual void print() { cout << "B" << endl; }
};

class C : public B
{
public:
    void print() { cout << "C" << endl; }
};

class D : public C
{
public:
    void print() { cout << "D" << endl; }
    // it makes error because the return type is different
    // int print() { return 0; } 
};

int main()
{
    A a;
    B b;
    C c;
    D d;

    // The effect of virtual function in class A
    A& ref1 = b;
    A& ref2 = c;
    B& ref3 = c;

    ref1.print(); // B
    ref2.print(); // C
    ref3.print(); // C

    return 0;
}