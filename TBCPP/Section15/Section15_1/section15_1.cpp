#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

// RAII : resource acquisition is initialization
void doSomething()
{
    try
    {
        //Resource *res = new Resource; // dull pointer
        //delete res; // 메모리를 꼭 지워야 함

        AutoPtr<Resource> res(new Resource); // smart pointer

        if (true) return; // early return
    }
    catch (...)
    {}

    return;
}

int main()
{
    //doSomething();

    {
        AutoPtr<Resource> res1(new Resource);
        AutoPtr<Resource> res2;

        cout << std::boolalpha;

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;

        // res1의 메모리를 지웠는데, res2에서 다시 지우려고 하면 에러가 발생
        // 소유권을 res2로 이전시킬 필요가 있음 (move semantics)
        res2 = res1; 

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
    }

    // syntax vs. semantics
    // syntax : 문법이 맞나 안맞나, 컴파일이 되나
    // semantics: 컴파일이 되는 것은 공통적인지만, 내부적인 의미가 무엇인가

    int x = 1, y = 1;
    x + y; // 숫자를 더함

    string str1("Hello"), str2("World");
    str1 + str2; // 문자끼리 더한다는 것은 append를 의미함

    // value semantics (copy semantics)
    // reference semantics (pointer semantics)
    // move semantics (move semantics)

    return 0;
}