#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"
using namespace std;

AutoPtr<Resource> generateResource()
{
    AutoPtr<Resource> res(new Resource(10000000));
    return res;
}

int main()
{
    streambuf *orig_buf = cout.rdbuf();
    //cout.rdbuf(NULL); // disconnect cout from buffer

    {
        AutoPtr<Resource> main_res;
        main_res = generateResource();
    }

    cout.rdbuf(orig_buf);

    return 0;
}