#include <iostream>
#include <memory>
#include "Resource.h"

using namespace std;

auto doSomething()
{
    //auto res1 = std::make_unique<Resource>(5);
    //return res1;

    return std::unique_ptr<Resource>(new Resource(5));

    //return std::make_unique<Resource>(5);
}

//void doSomething2(std::unique_ptr<Resource> &res) // R-Value
void doSomething2(Resource* res)                    // L-Value
{
    res->setAll(10);
}
//auto doSomething2(std::unique_ptr<Resource> &res)                    
//{
//    res->setAll(10);
//    return res;
//}

int main()
{   
    // example 1.
    {
        std::unique_ptr<int> upi(new int);

        // unique_ptr initialization
        // 1.
        //auto *ptr = new Resource(5);
        //std::unique_ptr<Resource> res1(ptr);
        // 2.
        //std::unique_ptr<Resource> res1(new Resource(5));
        // 3.
        auto res1 = std::make_unique<Resource>(5);
        // 4.
        //auto res1 = doSomething();

        res1->setAll(5);
        res1->print();

        std::unique_ptr<Resource> res2; // nullptr

        // nullptr ���� Ȯ��
        cout << std::boolalpha;
        cout << static_cast<bool>(res1) << endl; // true
        cout << static_cast<bool>(res2) << endl; // false

        // unique_ptr�� copy semantics �Ұ�, move semantics�� ����
        //res2 = res1; 
        res2 = std::move(res1);

        cout << std::boolalpha;
        cout << static_cast<bool>(res1) << endl; // false
        cout << static_cast<bool>(res2) << endl; // true

        if (res1 != nullptr) res1->print();
        if (res2 != nullptr) res2->print(); // (*res2).print();
    }

    // example 2.
    {
        auto res1 = std::make_unique<Resource>(5);
        res1->setAll(1);
        res1->print();

        //doSomething2(res1); // R-Value

        // L-value�� �ְ� ���� ��, ���α׷����� ��Ÿ�Ͽ� ���� �ڵ尡 �ٸ�
        // 1. 
        //doSomething2(std::move(res1)); // move �� res1�� null�� ��ȭ
        //res1 = doSomething2(std::move(res1)); // �������� �ٽ� ���� ����

        // 2.
        doSomething2(res1.get()); // L-value

        cout << std::boolalpha;
        cout << static_cast<bool>(res1) << endl;
        res1->print();
    }

    //{
    //    // �������� �� �� �ָ� �ȵ�, unique��� �̸��� ���� ����� ��
    //    Resource *res = new Resource;
    //    std::unique_ptr<Resource> res1(res);
    //    std::unique_ptr<Resource> res2(res); // x

    //    // ���� ���� �� ������� �Ͽ� error
    //    delete res; // x
    //}

    return 0;
}