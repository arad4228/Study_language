#include <iostream>
using namespace std;

int main(void)
{
    int num = 2147483647;
    cout << "변수 num에 저장된 값은 " << num << "입니다." << endl;  
    // overflow를 확인하기 위한 설정
    num = 2147483648;
    cout << "변수 num에 저장된 값은 " << num << "입니다." << endl;

    // float 타입의 유효 자릿수는 소수점 6자리
    float num01 = 3.1415926535897932;
    cout << "변수 num01에 저장된 값은 " << num01 << "입니다." << endl;  
    
    // double 타입의 유효 자릿수는 소수점 16자리
    double num02 = 3.1415926535897932; 
    cout << "변수 num02에 저장된 값은 " << num02 << "입니다." << endl;

    char char1 = 'A';
    cout << "char1에 저장된 값은 " << char1 << "입니다." << endl;

    bool checker = true;
    cout << "Checker의 값은 " << checker << "입니다." << endl;
    checker = false;
    cout << "Checker의 값은 " << checker << "입니다." << endl;

    return 0;
}