#include <iostream>

using namespace std;

struct Book{
    string title;
    string autor;
    int price;
};

void Display(const Book&);

int main(void)
{
    int x = 10;
    int& xr = x;

    cout << "x: " << x << " x's reference: " << xr << endl;
    xr++;
    cout << "x: " << x << " x's reference: " << xr << endl;
    cout << "x의 주소는 " << &x << "x's reference: "<< &xr << endl;

    // 함수의 인자 전달
    int num1 =3, num2 = 6;
    cout << "변경전 num1의 값은 " << num1 << "변경전 num2의 값은 " << num2 <<endl;
    swap(num1, num2);
    cout << "변경 후 num1은 " << num1 << "변경 후 num2의 값은 " << num2 << endl;

    // 구조체의 참조
    Book mbook = {"HTML CSS book","Jung", 1000};
    Display(mbook);
    return 0;
}

int swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void Display(const Book& bs)
{
    cout << "책의 이름은 " << bs.title << "이고 작가는 " << bs.autor << "이며 가격은 " << bs.price << "원 입니다."<< endl;
}