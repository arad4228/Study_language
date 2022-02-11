#include <iostream>
#include "NameSpace.h"

using namespace std;
using namespace kang;
using namespace kim;

int main(void)
{
    kang::countz = 4;
    kim::display = 3.14;
    kim::counts = 100;

    cout << kang::countz << endl;
    cout << kim::display << endl;
    cout << kim::counts << endl;

    countz = 3;
    display = 4.14;
    counts = 20;

    cout << countz << endl;
    cout << display << endl;
    cout << counts << endl;

    return 0;
}