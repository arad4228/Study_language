#include <iostream>

using namespace std;

// 보통 많이 쓰는 재귀호출 방법
int Sum(int n)
{
    if(n == 30)
        return n;
    return Sum(n+1);
}

int Sums(int n)
{
    for(int i = 0 ; i<30; i++)
        n += 1;
    return n;
}

int main(void)
{
    int n = 1;
    n = Sum(n);
    cout << "재귀호출을 거친 n의 값은 " << n << "입니다." << endl;
    return 0;
}