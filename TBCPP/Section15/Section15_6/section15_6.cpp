#include <iostream>
#include "Resource.h"
using namespace std;

void doSomething(std::unique_ptr<Resource> res)
{}

// shared_ptr�� �ڱⰡ ����Ű�� �ִ� �ּ��� �����Ͱ� �� �������� �����ϰ� �ִ����� ��
int main()
{
    // doSomething �Լ� ȣ�� �ÿ�
    //doSomething(std::unique_ptr<Resource>(new Resource(10000000)));
    //doSomething(std::make_unique<Resource>(10000000)); // ����

    // �̷� ����� �ʱ�ȭ�� �������� ����
    //Resource *res = new Resource(3);
    //res->setAll(1);

    {
        //std::shared_ptr<Resource> ptr1(res);

        // make�� ���ؼ� ���������� �ʱ�ȭ�ϴ� ���� ��ȣ��
        auto ptr1 = std::make_shared<Resource>(3);
        ptr1->setAll(1);
        ptr1->print();

        {
            //std::shared_ptr<Resource> ptr2(ptr1);
            
            // ptr2�� res�κ��� ���� ��������� ptr1�� resource�� �������� ��� �ִ����� ��, ������ ��
            //std::shared_ptr<Resource> ptr2(res);

            auto ptr2 = ptr1;

            ptr2->setAll(3);
            ptr2->print();

            cout << "Going out of the book" << endl;
            // ptr2 �Ҹ�
        }

        // ptr1�� ������ �������, �������� ������ ����
        ptr1->print();

        cout << "Going out of the outer block" << endl;
    }
    // ������ shared pointer�� �Ҹ�Ǹ鼭 resource�� ����
    // ��, ����� �����鼭 resource �Ҹ�

    return 0;
}