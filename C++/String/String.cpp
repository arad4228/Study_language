#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    // 이전의 C's의 문자열의 문제점을 해결하는 방법.
    string address, name;
    cout << "자신의 이름을 적어주세요 : ";
    //문자열 입출력은 기존과 거의 비슷합니다.
    getline(cin, name);
    cout << "자신이 살고 있는 도시를 적어주세요 : ";
    getline(cin, address);
    cout <<"안녕하세요" <<address << "에 살고 있는 " << name << "입니다. \n감사합니다!"<< endl;
    // 이제는 C의 문자열대신 C++의 String을 사용할 것이다.
    string dog;
    cout << "현재 dog 변수의 길이는 " << dog.length() << "입니다." << endl;
    // string 타입 dog에 값을 삽입.
    dog = "Navi";
    cout << dog << "! 정말 이쁜 이름이네요!" << endl;
    
    cout << "현재 dog 변수의 길이는 " << dog.length() << "입니다." << endl; 
    cout << "강아지 이름의 첫 글자는 바로 " << dog[0] << "입니다." << endl;
    // 이 string은 class로 자바의 string class와 유사함.
    // 따라서 각종 기본적인 함수들이 있다.
    // 따라서 C의 문자열에서는 복잡한 방식의 처리를 간단하게 할 수 있음

    string str1 = "C++ is Good to ";
    string str2 = "Fun Cool Sexy~";
    string str3 = str1 + str2;
    cout << str3 << endl;
    cout << (str1+=str2) << endl;

    return 0;
}