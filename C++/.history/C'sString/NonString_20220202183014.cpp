#include <iostream>

using namespace std;

int main(void)
{
    // 크기에 대한 값을 상수로 설정
    const int SIZE = 20;
    
    // C언어는 문자열을 만들기 위해 char배열을 사용했었다.
    char address[SIZE];
    char name[SIZE];
    
    cout << "자신의 이름을 적어주세요 : ";
    // printf("%s", name);과 같은 역활을 하는 것으로 추정.
    // 실제는 getc와 같은 역활을 하며 객체지향의 특성으로 인자로 값을 줄 수 있음.
    cin.get(name, SIZE).get();
    cout << "자신이 살고 있는 도시를 적어주세요 : ";
    cin.get(address, SIZE).get();

    cout << "안녕하세요" <<address << "에 살고 있는 " << name << "입니다. \n감사합니다!"<< endl;

    // 20바이트를 넘어도 입력은 받지만 20바이트까지만 저장할 수 있게하는 방법.
    cout << "자신의 이름을 적어주세요 : ";
    cin.get(name, SIZE).ignore(SIZE, '\n');
    cout << "자신이 살고 있는 도시를 적어주세요 : ";
    cin.get(address, SIZE).ignore(SIZE, '\n');
    
    cout << "안녕하세요" <<address << "에 살고 있는 " << name << "입니다. \n감사합니다!"<< endl;

    return 0;
}