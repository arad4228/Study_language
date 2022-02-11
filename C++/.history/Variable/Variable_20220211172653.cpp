#include <iostream>

using namespace std;

void Local1();
void Local2();
void Local3();
void Static();

static int vars;

int main(void)
{
    // auto variable (C's Local Variable) 실습
    int i = 5;
    int var = 10;
    cout << "main() 함수 내의 자동 변수 var의 값은 " << var << "입니다." << endl;
    if (i < 10)
    {
        Local1();
        int var = 30;
        cout << "if 문 내의 자동 변수 var의 값은 " << var << "입니다." << endl;
    }
    cout << "현재 자동 변수 var의 값은 " << var << "입니다." << endl;
    
    cout << "Static 실습 1번째 " << endl;
    for(int j = 0; j < 3; j++)
    {
        Local2();
        Static();
    }

    cout << "static 실습 2번째 " << endl;
    cout << "변수 vars의 초깃값은 " << vars <<"입니다." << endl;
    int k = 5;
    int vars = 10; // 자동 변수 선언
    cout << "main() 함수 내의 자동 변수 vars의 값은 " << vars <<"입니다." << endl;
    if (k < 10)
    {
        Local3();
        cout << "현재 변수 vars의 값은 " << var << "입니다." << endl; // 자동 변수에 접근
    }
    cout << "더 이상 main() 함수에서는 정적 변수 vars에 접근할 수가 없습니다." << endl;

    return 0;
}

void Local1(void)
{
    int var = 20;
    cout << "Local() 함수 내의 자동 변수 var의 값은 " << var << "입니다." << endl;
}
// register역시 c++에서 auto와 같은 의미로 사용된다.

void Local2(void)
{
    int count = 1;
    cout << "Local() 함수가 " << count << " 번째 호출되었습니다." << endl;
    count++;
}

void Local3(void)
{
    vars = 20; // 정적 변수의 값 변경
    cout << "Local() 함수 내에서 접근한 정적 변수 var의 값은 " << var << "입니다." << endl;
}

void Static(void)
{
    static int static_count = 1; // 연결을 가지지 않는 정적 변수
    cout << "StaticVar() 함수가 " << static_count << " 번째 호출되었습니다." << endl;
    static_count++;
}
