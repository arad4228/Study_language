#include <iostream>

using namespace std;

int Smallnum(int n1, int n2)
{
    return n1 > n2 ? n2: n1;
}

// call by value?
void Local(int num)
{
    num += 10;
}

void Inter(int& num)
{
    num += 10;
}

int main(void)
{
    cout << "4,6에서 작은 숫자는 " << Smallnum(4,6) << "입니다." << endl;
    cout << "8,6에서 작은 숫자는 " << Smallnum(8,6) << "입니다." << endl;
    cout << "2,8에서 작은 숫자는 " << Smallnum(2,8) << "입니다." << endl;

    int num = 10;
    cout << "기존의 num 값은 " << num << "이고 " << endl;
    Local(num);
    cout << "Local 함수를 호출후 값은 " << num << "입니다. " << endl;
    Inter(num);
    cout << "Inter 함수를 호출후 값은 " << num << "입니다. " << endl;
    
    return 0;
}