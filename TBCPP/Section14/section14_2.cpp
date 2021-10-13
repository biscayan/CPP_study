#include <iostream>

using namespace std;

//unnecessary
//void last() throw(int) int type exception specifier
//void last() throw(...) all type exception specifier

void first();
void second();
void third();
void last();

//void first() throw () // 파라미터가 없으면 예외를 안 던질것이라는 의미
void first()
{
    cout << "first" << endl;

    try
    {
        second();
    }
    catch (int)
    {
        cerr << "first caught int exception" << endl;
    }

    cout << "End first " << endl;
}

void second()
{
    cout << "second" << endl;

    try
    {
        third();
    }
    catch (double)
    {
        cerr << "second caught int exception" << endl;
    }

    cout << "End second " << endl;
}

void third()
{
    cout << "third" << endl;

    last();

    cout << "End third " << endl;
}

void last()
{
    cout << "last" << endl;
    cout << "Throws exception" << endl;

    throw - 1;

    cout << "End last " << endl;
}

int main()
{
    cout << "Start" << endl;

    // start -> first -> second -> third -> last -> throw exception -> first에서 catch -> end first -> end main
    // last, third, second에서 catch x 즉, unwind가 일어남
    try
    {
        first();
    }
    catch (int)
    {
        cerr << "main caught int exception" << endl;
    }

    // ellipsis -> catch-all handler
    //catch (...)  
    //{
    //    cerr << "main caught ellipses exception" << endl;
    //}

    //cout << "End main" << endl;

    return 0;
}