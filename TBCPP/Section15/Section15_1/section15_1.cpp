#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

// RAII : resource acquisition is initialization
void doSomething()
{
    try
    {
        //Resource *res = new Resource; // dull pointer
        //delete res; // �޸𸮸� �� ������ ��

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

        // res1�� �޸𸮸� �����µ�, res2���� �ٽ� ������� �ϸ� ������ �߻�
        // �������� res2�� ������ų �ʿ䰡 ���� (move semantics)
        res2 = res1; 

        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
    }

    // syntax vs. semantics
    // syntax : ������ �³� �ȸ³�, �������� �ǳ�
    // semantics: �������� �Ǵ� ���� ������������, �������� �ǹ̰� �����ΰ�

    int x = 1, y = 1;
    x + y; // ���ڸ� ����

    string str1("Hello"), str2("World");
    str1 + str2; // ���ڳ��� ���Ѵٴ� ���� append�� �ǹ���

    // value semantics (copy semantics)
    // reference semantics (pointer semantics)
    // move semantics (move semantics)

    return 0;
}