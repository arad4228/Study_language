#include <iostream>

using namespace std;

/*
    예외처리 방법
    1. try 문에 도달한 프로그램의 제어는 try 문 내의 코드를 실행합니다.
    2. 이때 예외가 발생(throw)하지 않으면 프로그램의 제어는 맨 마지막 catch 절 바로 다음으로 이동합니다.
    3. 만약 예외가 발생하면 catch 핸들러는 다음과 같은 순서로 적절한 catch 절을 찾게 됩니다.
        3-1. 스택에서 try 문과 가장 가까운 catch 절부터 차례대로 검사합니다.
        3-2. 만약 적절한 catch 절을 찾지 못하면, 바로 다음 바깥쪽 try 문 다음에 위치한 catch 절을 차례대로 검사합니다.
        3-3. 이러한 과정을 가장 바깥쪽 try 문까지 계속 검사하게 됩니다.
        3-4. 그래도 적절한 catch 절을 찾지 못하면, 미리 정의된 terminate() 함수가 호출됩니다.
    4. 만약 적절한 catch 절을 찾게 되면, throw 문의 피연산자는 예외 객체의 형식 매개변수로 전달됩니다.
    5. 모든 예외 처리가 끝나면 프로그램의 제어는 맨 마지막 catch 절 바로 다음으로 이동합니다.
*/

int increseNum(int num)
{
    if(num < 0)
    throw num;
    else if (num == 0)
    throw "0은 입력할 수  없습니다.";
    return ++num;
}

int main(void)
{
    int num;
    cout << "양의 정수 하나를 입력해주세요: ";
    while(cin >> num)
    {
        try
        {
            cout << "입력한 정수에서 1을 증가한 값: " << increseNum(num) << endl;
        }
        catch(int input)
        {
           cout << input << "의 값은 양의 정수가 아닙니다." << endl;
           cout << "양의 정수를 다시 입력해 주세요." << endl;
           continue;
        }
        catch(const char* str)
        {
            cout << str << endl;
            cout << "양의 정수를 다시입력해주세요." << endl;
            continue;
        }
        break;
    }
    return 0;
}