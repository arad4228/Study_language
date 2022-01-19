#include <iostream>
// std::cin, std::cout의 앞의 std를 선언해주는 방법.
using namespace std;

int main(void)
{
    int age;
    cout << "당신의 나이를 입력해주세요.";
    cin >> age;
    
    cout << "당신의 나이는 " << age << "살입니다." << endl;
    return 0;
}
