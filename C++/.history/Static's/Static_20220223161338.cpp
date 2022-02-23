#include <iostream>

using namespace std;

class Person{
private:
    string name_;
    int age_;
public:
    // 정적 멤버 변수
    static int person_count_;
    // 정적 멤머 함수의 선언
    static int person_count();
    // 생성자
    Person(const string& name, int age);
    // 소멸자
    ~Person()
    {
        person_count_--;
    }
    void ShowPersonInfo();
};

// 정적 멤버 변수의 정의 및 초기화.
int Person::person_count_ = 0;

int main(void)
{
    Person hong("길동", 29);
	hong.ShowPersonInfo();
	Person lee("순신", 35);
	lee.ShowPersonInfo();
	
	return 0;
}

int Person::person_count()
{
    return person_count_;
}

Person::Person(const string& name, int age)
{
	name_ = name;
	age_ = age;
	cout << ++person_count_ << " 번째 사람이 생성되었습니다." << endl;
}

void Person::ShowPersonInfo()
{
	cout << "이 사람의 이름은 " << name_ << "이고, 나이는 " << age_ << "살입니다." << endl;
}
