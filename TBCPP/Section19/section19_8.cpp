#include <iostream>
#include <vector>
#include <algorithm> // std::min
#include <typeinfo>

using namespace std;

class Examples
{
public:

    void ex1()
    {
        std::vector<int> vect;
        for (std::vector<int>::iterator itr = vect.begin();
            itr != vect.end(); ++itr)
            cout << *itr;

        for (auto itr = vect.begin(); itr != vect.end(); ++itr)
            cout << *itr;

        for (auto itr : vect) // for (const auto & itr : vect)
            cout << itr;
    }

    void ex2()
    {
        int x = int();
        auto auto_x = x;

        const int& crx = x;
        auto auto_crx1 = crx; 
        const auto& auto_crx2 = crx;

        volatile int vx = 1024;
        auto avx = vx; 
        volatile auto vavx = vx;
    }

    template<class T>
    void func_ex3(const T& arg)
    {}

    void ex3()
    {
        const int& crx = 123;
        func_ex3(crx); // const int
    }

    void ex4()
    {
        const int c = 0;
        auto& rc = c;
        //rc = 123; // error
    }

    void ex5() // amendent
    {
        int i = 42;
        auto&& ri_1 = i; // l-value
        auto&& ri_2 = 42; // r-value
    }

    void ex6()
    {
        int x = 42;
        const int* p1 = &x;
        auto p2 = p1; // const int ptr
        // *p2 = 43; // error
    }

    template<typename T, typename S>
    void func_ex7(T lhs, S rhs) // lhs and rhs have different dtype
    {
        auto prod1 = lhs * rhs;
        typedef decltype(lhs* rhs) product_type; // just infer the type
        product_type prod2 = lhs * rhs;
        decltype(lhs * rhs) prod3 = lhs * rhs;
    }

    template<typename T, typename S>
    //decltype(lhs *rhs) func_ex8(T lhs, S rhs)
    auto func_ex8(T lhs, S rhs) -> decltype(lhs* rhs)
    {
        return lhs * rhs;
    }

    void ex7_8()
    {
        func_ex7(1.0, 345);
        auto a = func_ex8(1.2, 345);
    }

    struct S
    {
        int m_x;

        S()
        {
            m_x = 42;
        }
    };

    void ex9()
    {
        int x;
        const int cx = 42;
        const int& crx = x;
        const S* p = new S();

        auto a = x;
        auto b = cx;
        auto c = crx;
        auto d = p;
        auto e = p->m_x;

        typedef decltype(x) x_type;
        typedef decltype(cx) cx_type;
        typedef decltype(crx) crx_type;
        typedef decltype(p->m_x) m_x_type; // 'declared type'

        typedef decltype((x)) x_with_parens_type; // add references to lvalues
        typedef decltype((cx)) cx_with_parens_type;
        typedef decltype((crx)) crx_with_parens_type;
        typedef decltype((p->m_x)) m_x_with_parens_type;
    }

    const S foo()
    {
        return S();
    }

    const int& foobar()
    {
        return 123;
    }

    void ex10()
    {
        std::vector<int> vect = { 42,43 };

        auto a = foo();
        typedef decltype(foo()) foo_type;

        auto b = foobar();
        typedef decltype(foobar()) foobar_type;

        auto itr = vect.begin();
        typedef decltype(vect.begin()) iterator_type;

        auto first_element = vect[0];
        decltype(vect[1]) second_element = vect[1];
    }

    void ex11()
    {
        int x = 0;
        int y = 0;

        const int cx = 42;
        const int cy = 43;

        double d1 = 3.14;
        double d2 = 2.72;

        typedef decltype(x* y) prod_xy_type;
        auto a = x * y;

        typedef decltype(cx* cy) prod_cxcy_type; // result is prvalue
        auto b = cx * cy;

        typedef decltype(d1 < d2 ? d1 : d2) cond_type; // result is lvalue. & is added.
        auto c = d1 < d2 ? d1 : d2;

        typedef decltype(x < d2 ? x : d2) cond_type_mixed; // promotion of x to double
        auto d = x < d2 ? x : d2;

        //auto d = std::min(x, dbl); // error
    }

    template<typename T, typename S>
    auto fpmin_wrong(T x, S y) -> decltype(x < y ? x : y)
    {
        return x < y ? x : y;
    }

    template<typename T, typename S>
    auto fpmin(T x, S y) ->
        typename std::remove_reference<decltype(x < y ? x : y)>::type
    {
        return x < y ? x : y;
    }

        void ex12()
    {
        int i = 42;
        double d = 45.1;

        auto a = std::min(static_cast<double>(i), d);

        int& j = i;

        typedef decltype(fpmin_wrong(d, d)) fpmin_return_type1;
        typedef decltype(fpmin_wrong(i, d)) fpmin_return_type2;
        typedef decltype(fpmin_wrong(d, j)) fpmin_return_type3;
    }

    void ex13()
    {
        std::vector<int> vect; // vect is empty
        typedef decltype(vect[0]) integer;
    }

    template<typename R>
    class SomeFunctor
    {
    public:
        typedef R result_type;

        SomeFunctor()
        {}

        result_type operator() ()
        {
            return R();
        }
    };

    void ex14()
    {
        SomeFunctor<int> func;
        typedef decltype(func)::result_type integer; // nested type
    }

    void ex15()
    {
        auto lambda = []() {return 42; };
        decltype(lambda) lambda2(lambda);
        decltype((lambda)) lambda3(lambda);

        cout << "Lambda functions" << endl;
        cout << &lambda << " " << &lambda2 << endl;
        cout << &lambda << " " << &lambda3 << endl;
    }

    void ex16()
    {
        // generic lamda
        auto lamda = [](auto x, auto y)
        {
            return x + y;
        };

        cout << lamda(1.1, 2) << " "
            << lamda(3, 4) << " "
            << lamda(4.5, 2.2) << endl;
    }
};

int main()
{
    Examples example;

    //example.ex1();
    //example.ex2();
    //example.ex3();
    //example.ex4();
    //example.ex5();
    //example.ex6();
    //example.ex7_8();
    example.ex15();

    return 0;
}