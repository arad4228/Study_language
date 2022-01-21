#include <iostream>
using namespace std;

int main(void)
{
    // 산술 연산자
    int amnum1 = 10;
    int amnum2 = 4;
    
    cout << "+ 연산자에 의한 결괏값은 " << amnum1 + amnum2 << "입니다." << endl;
    cout << "- 연산자에 의한 결괏값은 " << amnum1 - amnum2 << "입니다." << endl;
    cout << "* 연산자에 의한 결괏값은 " << amnum1 * amnum2 << "입니다." << endl;
    cout << "/ 연산자에 의한 결괏값은 " << amnum1 / amnum2 << "입니다." << endl;
    cout << "% 연산자에 의한 결괏값은 " << amnum1 % amnum2 << "입니다." << endl;

    // 대입 연산자
    int innum1 = 8;
    int innum2 = 8;
    int innum3 = 8;
    innum1 = innum1 + 5;
    innum2 += 5;
    innum3 =+ 5;
    
    cout << "- 연산자에 의한 결괏값은 " << innum1 << "입니다." << endl;
    cout << "+= 연산자에 의한 결괏값은 " << innum2 << "입니다." << endl;
    cout << "=+ 연산자에 의한 결괏값은 " << innum3 << "입니다." << endl;

    // 증감 연산자
    int plnum1 = 8;
    int plnum2 = 8;
    int plresult1, plresult2;
    plresult1 = --plnum1 + 5;
    plresult2 = plnum2-- + 5;
    
    cout << "전위 감소 연산자에 의한 결괏값은 " << plresult1 << "이고,변수의 값은 " << plnum1 << "로 변했습니다." << endl;
    cout << "후위 감소 연산자에 의한 결괏값은 " << plresult2 << "이고, 변수의 값은 " << plnum2 << "로 변했습니다." << endl;

    // 비교 연산자
    int cpnum1 = 3;
    int cpnum2 = 7;
    
    cout << "!= 연산자에 의한 결괏값은 " << (cpnum1 != cpnum2) << "입니다." << endl;
    cout << ">= 연산자에 의한 결괏값은 " << (cpnum1 >= cpnum2) << "입니다." << endl;

    // 논리 연산자
    int lgnum1 = 3;
    int lgnum2 = -7;
    bool lgresult1, lgresult2;
    lgresult1 = (lgnum1 > 0) && (lgnum1 < 5);
    lgresult2 = (lgnum2 < 0) || (lgnum2 > 10);

    cout << "&& 연산자에 의한 결괏값은 " << lgresult1 << "입니다." << endl;
    cout << "|| 연산자에 의한 결괏값은 " << lgresult2 << "입니다." << endl;
    cout << " ! 연산자에 의한 결괏값은 " << !lgresult2 << "입니다." << endl;

    // bit 연산자
    int bonum1 = 15;
    int bonum2 = 8;

    cout << "~ 연산자에 의한 결괏값은 " << (~bonum1) << "입니다." << endl;
    cout << "<< 연산자에 의한 결괏값은 " << (bonum2 << 2) << "입니다." << endl;
    cout << ">> 연산자에 의한 결괏값은 " << (bonum2 >> 2) << "입니다." << endl;

    // 삼항 연산자
    int trnum1 = 11;
    int trnum2 = 10;
    int trresult;
    // true라면 앞의 식을 false라면 뒤의 식을 선택한다.
    trresult = (trnum1 < trnum2) ? trnum1 : trnum2;

    cout << "둘 중에 더 작은수는 " << trresult << "입니다." << endl;

    // 쉼표 연산자이고 C에서 for문에서도 사용이 가능하다.
    int snum1 = 15, snum2 = 8;
    cout << "첫 번째 수는 " << snum1 << "이고, 두 번째 수는 " << snum2 << "입니다." << endl;

    // 추가적으로 sizeof 연산자도 가능하나 이는 너무 쉬우니 넘어간다.

    return 0;
}