#include <iostream>

using namespace std;

int main(void)
{
    // 기본적으로 c와 동일하게 포인터를 사용한다.
    // 이유는 C언어의 기능을 포함하고 있기에 C++도 동일한 형식을 취함.
    int n = 100;
    int* ptrn = &n;

    cout << "현재 포인터가 가르키는 값은 다음입니다. " << *ptrn << endl;

    int num1 = 1234;
	double num2 = 3.14;
	
	int* ptr_num1 = &num1;
	double* ptr_num2 = &num2;
	
	cout << "포인터의 크기는 " << sizeof(ptr_num1) << "입니다." << endl;
	cout << "포인터 ptr_num1가 가리키고 있는 주소값은 " << ptr_num1 << "입니다." << endl;
	cout << "포인터 ptr_num1가 가리키고 있는 주소에 저장된 값은 " << *ptr_num1 << "입니다." << endl;
	cout << "포인터 ptr_num2가 가리키고 있는 주소값은 " << ptr_num2 << "입니다." << endl;
	cout << "포인터 ptr_num2가 가리키고 있는 주소에 저장된 값은 " << *ptr_num2 << "입니다.";

    return 0;
}