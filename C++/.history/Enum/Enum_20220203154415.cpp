#include <iostream>

using namespace std;

enum Weather {Sunny = 0, Cloudly = 10, Rain = 20, Snow = 30};

int main(void)
{
    int input;
    Weather wt;
    cout << "Sunny = 0, Cloudly = 10, Rain = 20, Snow = 30}" << endl;
    cin >> input;
    wt = (Weather)input;

    switch (wt)
    {
    case Sunny:
        cout << "오늘의 날씨는 맑음입니다. "  << endl;
        break;
    case Cloudly:
        cout << "오늘의 날씨는 흐림입니다. "  << endl;
        break;
    case Rain:
        cout << "오늘의 날씨는 비옴입니다. "  << endl;
        break;
    case Snow:
        cout << "오늘의 날씨는 눈옴입니다. "  << endl;
        break;
    default:
        cout << "정확한 값을 입력하세요 " << endl;
        break;
    }
    cout << endl << "열거체 Weather의 각 상숫값은 " << Sunny << ", " << Cloudly<< ", "<< Rain << ", " << Snow << "입니다.";

    return 0;
}