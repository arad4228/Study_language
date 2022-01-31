#include <iostream>

using namespace std;

int main(void)
{
    int sum = 0;
    // 길이가 3인 int형 배열 선언
    int grade[3]; 

    // 인덱스를 이용한 배열의 초기화
    grade[0] = 85; // 국어 점수
    grade[1] = 65; // 영어 점수
    grade[2] = 90; // 수학 점수

    // 선언과 동시에 배열을 초기화
    int arr[4] = {1,2,3,4};
    // 선언 이후에 초기화하는 것은 오류를 발생.
    //  int arr2[3];
    //  arr2 = {1,2,3}; 은 불가능 하다.

    for (int i = 0; i < 3; i++)
    {
        // 인덱스를 이용한 배열로의 접근
        sum += grade[i]; 
    }
    cout << "국영수 과목 총 점수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum/3 <<"점입니다." << endl;

    for (int element : arr)
    {
        cout << "각 배열의 값은 " << element << "입니다. "<< endl;
    }
    // 배열의 길이를 명시하지 않음
    int tgrade[] = {85, 65, 90};                 
    
    // 배열의 길이를 구하는 공식
    int len = sizeof(tgrade) / sizeof(tgrade[0]); 
    cout << "배열 grade의 길이는 " << len << "입니다." << endl;
    
    return 0;
}