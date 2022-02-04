#include <iostream>

using namespace std;

inline int sub(int x, int y){return x-y};
inline void print(int x){cout << "계산결과는 " << x << "입니다." <<endl;};

int main(void)
{
    int num1 = 5;
    int num2 = 3;
    int result = sub(num1,num2);
    print(result);
    return 0;
}