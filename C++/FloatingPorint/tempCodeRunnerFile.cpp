#include <iostream>
using namespace std;

int main(void)
{
    int i;
    float sum = 0;
    
    for (i = 0; i < 1000; i++)
    {
        sum += 0.1;
    }
    cout << "0.1을 1000번 더한 합계는 " << sum <<"입니다."<< endl;

    return 0;
}