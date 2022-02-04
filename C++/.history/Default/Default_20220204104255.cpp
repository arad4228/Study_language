#include <iostream>

using namespace std;

// Default를 설절 오른쪽인자는 아무런 인수가없으면 2로 초기화
double Multi(double, double = 2);

int main(void)
{
    // Multi(3, 2)와 같음 : 3 * 3 
    cout << Multi(3) << endl;
    // 3 * 3 * 3		
	cout << Multi(3, 3) << endl;
    // 3 * 3 * 3 * 3	
	cout << Multi(3, 4);			
    return 0;
}
double Multi(double x, double n)
{
	double result = x;
	
	for (int i = 1; i < n; i++)
		result *= x;
        
	return result;
}