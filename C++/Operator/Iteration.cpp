#include <iostream>

using namespace std;

int main(void)
{
    int i = 0;
    int num;
    cout << "반복문을 설정할 숫자를 입력하세요. ";
    cin >> num;

    //while문을 통한 반복문
    while(i < num)
    {
        cout << "조건문이 " << i+1 << "번 반복되었습니다." << endl;
        i++;
    }
    // 다른 반복문을 돌리기 위해 초기화.
    i = 0;

    // do-while문
    do
    {
        cout << "do while문이 현재 " << i+1 << "번째 반복을 수행중입니다." << endl;
        i++;
    }while(i > num);
    cout << "do while문이 종료후 변수의 값은 " << i << "입니다."<< endl;

    // for문
    for(i = 0; i < num; i++)
    {
        cout << "For문이 현재 " << i+1 << "번째 수행중입니다." << endl;
    }
    cout << "for문이 종료후 변수의 값은 " << i << "입니다."<< endl;
    
    // 이렇게 해당 선언문을 안에 두고 사용이 가능하다.
    for(int j = 0; j < num; j++)
    {
        cout << "For문이 현재 " << j+1 << "번째 수행중입니다." << endl;
    }

    // 범위기반 for문
    int range[5] = {1,2,3,4,5};
    for (int element : range)
    {
        cout << "각 숫자는 " << element << "입니다. " << endl;
    }

    // continue, break를 통해 제어가 가능하다.
    return 0;
}