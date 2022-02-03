#include <iostream>

using namespace std;

int Sum(int n)
{
    if(n == 30)
        return n;
    return Sum(n+1);
}

int main(void)
{
    int n = 1;
    n = Sum(n);
    cout << "재귀호출을 거친 n의 값은 " << n << "입니다." << endl;
    return 0;
}