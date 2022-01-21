#include <iostream>
using namespace std;

int main(void)
{
    // 묵시적 typecasting
    int mtnum1 = 3.1415;
    int mtnum2 = 8.3E12;
    double mtnum3 = 5;
    
    cout << "num1에 저장된 값은 " << mtnum1 << "입니다." << endl;
    cout << "num2에 저장된 값은 " << mtnum2 << "입니다." << endl;
    cout << "num3에 저장된 값은 " << mtnum3 << "입니다." << endl;  

    // 산술연산에서의 묵시적 typecasting
    double mtresult1 = 5 + 3.14;
    double mtresult2 = 5.0f + 3.14;

    cout << "result1에 저장된 값은 " << mtresult1 << "입니다." << endl;
    cout << "result2에 저장된 값은 " << mtresult2 << "입니다." << endl;

    // 명시적 type casting
    int mcnum1 = 1;
    int mcnum2 = 4;
    double mcresult1 = mcnum1 / mcnum2;
    double mcresult2 = (double) mcnum1 / mcnum2;
    double mcresult3 = double (mcnum1) / mcnum2;
    
    cout << "result1에 저장된 값은 " << mcresult1 << "입니다." << endl;
    cout << "result2에 저장된 값은 " << mcresult2 << "입니다." << endl;
    cout << "result3에 저장된 값은 " << mcresult3 << "입니다." << endl;

    return 0;
}