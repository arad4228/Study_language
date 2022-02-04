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

    int num1 =3, num2 = 6;
    cout << "변경전 num1의 값은 " << num1 << "변경전 num2의 값은 " << num2 <<endl;
    swap(num1, num2);
    cout << "변경 후 num1은 " << num1 << "변경 후 num2의 값은 " << num2 << endl;
    return 0;
}

int swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}