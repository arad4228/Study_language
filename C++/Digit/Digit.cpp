#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cout << "표기하기를 원하는 숫자를 입력해주세요.";
    // stdin으로 입력
    cin >>num;

    cout << "숫자를 10진수로 표현을 하면 " << num << "이고 "<< endl;
    // oct형태로 변경
    cout << oct;
    cout << "숫자를 8진수로 표현하면 " << num << "이고" << endl;
    // hex형태로 변경
    cout << hex;
    cout << "숫자를 16진수로 표현하면 " << num << "입니다." << endl;
    return 0;
}