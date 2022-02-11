#include <iostream>

using namespace std;

void Local();
void Static();

int main(void)
{
    // auto variable (C's Local Variable)
    int i = 5;
    int var = 10;
    cout << "main() 함수 내의 자동 변수 var의 값은 " << var << "입니다." << endl;
    if (i < 10)
    {
        Local();
        int var = 30;
        cout << "if 문 내의 자동 변수 var의 값은 " << var << "입니다." << endl;
    }
    cout << "현재 자동 변수 var의 값은 " << var << "입니다." << endl;
    
    for(int i = 0; i < 3; i++)
    {
        Local();
        Static();
    }
    return 0;
}

void Local(void)
{
    int var = 20;
    cout << "Local() 함수 내의 자동 변수 var의 값은 " << var << "입니다." << endl;
}

void Static(void)
{
    static int static_count = 1; // 연결을 가지지 않는 정적 변수
    cout << "StaticVar() 함수가 " << static_count << " 번째 호출되었습니다." << endl;
    static_count++;
}
// register역시 c++에서 auto와 같은 의미로 사용된다.