#include <iostream>

using namespace std;

int main(void)
{
    // 2가지의 동적할당 방식을 사용할 수 있다.
    // 첫번째는 C언어의 동적할당 방식.
    // 두번째는 C++언어의 new를 통한 동적할당방식.
    // 두가지 모두 사용이 가능하지만 new를 통한 할당을 하는 것을 연습.
    int* ptr = (int*)malloc(sizeof(int));
	int* ptr_int = new int;
	*ptr_int = 100;
    *ptr = 101;
	
	double* ptr_double = new double;
	*ptr_double = 100.123;
	
    cout << "int형 숫자 값(C언어 동적할당) " << *ptr << "입니다." << endl;
	cout << "int형 숫자의 값은 " << *ptr_int << "입니다." << endl;
	cout << "int형 숫자의 메모리 주소는 " << ptr_int << "입니다." << endl;
	
	cout << "double형 숫자의 값은 " << *ptr_double << "입니다." << endl;	
	cout << "double형 숫자의 메모리 주소는 " << ptr_double << "입니다." << endl;
	
	delete ptr_int;
	delete ptr_double;
	return 0;
}