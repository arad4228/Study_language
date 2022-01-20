#include <iostream>
using namespace std;

int sum(int x, int y)
{
    return x+y;
}

int main(void)
{
    auto a = 0B0101111;
    auto b = 0.123f;
    auto c = "This is auto Test";
    auto d = sum(3,5);

    cout << "a는 " << a << endl;
    cout << "b는 " << b << endl;
    cout << "c는 " << c << endl;
    cout << "3 + 5는 " << d << endl;

    return 0;
}