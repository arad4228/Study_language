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
    int t = 0;
    n = Sum(n);
    t = Sums(t);
    cout << "재귀호출을 사용하지 않은 t의 값은 " << t << "입니다." << endl;
    cout << "재귀호출을 거친 n의 값은 " << n << "입니다." << endl;
    return 0;
}