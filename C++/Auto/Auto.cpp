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

    cout << "aė " << a << endl;
    cout << "bė " << b << endl;
    cout << "cė " << c << endl;
    cout << "3 + 5ė " << d << endl;

    return 0;
}