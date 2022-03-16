#include <iostream>

using namespace std;

// 가상함수는 자식클래스에서 재정의할 것으로 기대하는 멤버함수를 의미.
class A
{
public:
    virtual void Print()
    {
        cout << "A 클래스의 Print함수. "<< endl;
    }
};

class B : public A
{
public:
    virtual void Print()
    {
        cout << "B 클래스의 Print함수. " << endl;
    }
};

int main(void)
{
    A* ptr;
	A obj_a;
	B obj_b;
	
	ptr = &obj_a;
	ptr->Print();
	ptr = &obj_b;
	ptr->Print();
	return 0;
}