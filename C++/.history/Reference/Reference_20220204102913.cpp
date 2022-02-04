#include <iostream>

using namespace std;

int main(void)
{
    int x = 10;
    int& xr = x;

    cout << "x: " << x << " x's reference: " << xr << endl;
    xr++;
    cout << "x: " << x << " x's reference: " << xr << endl;
    cout << "x의 주소는 " << &x << "x's reference: "<< &xr << endl;
    return 0;
}