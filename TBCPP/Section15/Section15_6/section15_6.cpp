#include <iostream>
#include "Resource.h"
using namespace std;

void doSomething(std::unique_ptr<Resource> res)
{}

// shared_ptr은 자기가 가리키고 있는 주소의 포인터가 몇 군데에서 공유하고 있는지를 셈
int main()
{
    // doSomething 함수 호출 시에
    //doSomething(std::unique_ptr<Resource>(new Resource(10000000)));
    //doSomething(std::make_unique<Resource>(10000000)); // 권장

    // 이런 방식의 초기화를 권장하지 않음
    //Resource *res = new Resource(3);
    //res->setAll(1);

    {
        //std::shared_ptr<Resource> ptr1(res);

        // make를 통해서 직접적으로 초기화하는 것을 선호함
        auto ptr1 = std::make_shared<Resource>(3);
        ptr1->setAll(1);
        ptr1->print();

        {
            //std::shared_ptr<Resource> ptr2(ptr1);
            
            // ptr2가 res로부터 직접 만들어지면 ptr1는 resource의 소유권이 어디 있는지를 모름, 문제가 됨
            //std::shared_ptr<Resource> ptr2(res);

            auto ptr2 = ptr1;

            ptr2->setAll(3);
            ptr2->print();

            cout << "Going out of the book" << endl;
            // ptr2 소멸
        }

        // ptr1은 여전히 살아있음, 소유권을 여전히 가짐
        ptr1->print();

        cout << "Going out of the outer block" << endl;
    }
    // 마지막 shared pointer가 소멸되면서 resource를 지움
    // 즉, 블록을 나오면서 resource 소멸

    return 0;
}