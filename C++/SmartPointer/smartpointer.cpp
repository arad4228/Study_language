#include <iostream>
#include <memory>

using namespace std;

// 스마트 포인터는 포인터처럼 동작하는 클래스 템플릿으로, 사용이 끝나면 자동으로  회수딘다.
class Person
{
private:
    string name_;
    int age_;
public:
    // 기초 클래스 생성자의 선언
    Person(const string& name, int age)
    {
        name_ = name;
        age_ = age;
        cout << "생성자가 호출되었습니다." << endl;
    }
    ~Person() 
    { 
        cout << "소멸자가 호출되었습니다." << endl; 
    }
    void ShowPersonInfo()
    {
        cout << name_ << "의 나이는 " << age_ << "살입니다." << endl;
    }
};

int main(void)
{
    // uniqure_ptr
    // int형 unique_ptr인 ptr1을 선언하고 초기회.
    unique_ptr<int> ptr1(new int(5));
    // 소유권은 ptr1->ptr2
    auto ptr2 = move(ptr1);
    // 대입연산자를 이용한 복사는 오류를 발생.
    // Ptr1이 가르키는 메모리 공간을 삭제
    ptr2.reset();
    // ptr1이 가르키는 메모리 공간을 삭제
    ptr1.reset();
    // 해당 방법을 통해 class도 생성할 수 있음.
    // make_unique가 동작하지 않음.
    // unique_ptr<Person> hong = make_unique<Person>("길동", 29);
    // hong->ShowPersonInfo();

    // shard_ptr
    shared_ptr<int> ptr01(new int(5));
    cout << ptr01.use_count() << endl;
    // 1
    auto ptr02(ptr01);
    cout << ptr01.use_count() << endl;
    // 2
    auto ptr03 = ptr01;
    cout << ptr01.use_count() << endl;
    // 3
    shared_ptr<Person> hong = make_shared<Person>("길동", 29);
    // 1
	cout << "현재 소유자 수 : " << hong.use_count() << endl;
	auto han = hong;
    // 2
	cout << "현재 소유자 수 : " << hong.use_count() << endl;
    // shared_ptr인 han을 해제함.
	han.reset();		 
    // 1
	cout << "현재 소유자 수 : " << hong.use_count() << endl;

    // weak_ptr
    // weak_ptr은 하나 이상의 shared_ptr 인스턴스가 소유하는 객체에 대한 접근을 제공하지만, 소유자의 수에는 포함되지 않는 스마트 포인터입니다.
    return 0;
}