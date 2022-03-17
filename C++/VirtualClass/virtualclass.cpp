#include <iostream>
using namespace std;

class Animal
{
public:
    // 가상의 소멸자
	virtual ~Animal() {}
    // 순수 가상 함수의 선언
	virtual void Cry()=0;
};

class Dog : public Animal
{
public:
	virtual void Cry() 
    { 
        cout << "멍멍!!" << endl; 
        }
};

class Cat : public Animal
{
public:
	virtual void Cry() 
    { 
        cout << "야옹야옹!!" << endl; 
    }
};

int main(void)
{
	Dog my_dog;
	my_dog.Cry();
	Cat my_cat;
	my_cat.Cry();
	return 0;
}