#include <iostream>

using namespace std;

// 부모 클래스
class Person{
private:
string name;
int age;
public:
// 부모의 생성자 정의
Person(const string& name, int age)
{
    this->name = name;
    this->age = age;
}
void ShowPersonInfo() 
{
    cout << name << "의 나이는 " << age << "살입니다." << endl;
}
};

// 자식 클래스
class Student : public Person{
private:
int student_id;
// 자식의 생성자 정의
public:
Student(int sid, const string& name, int age) :Person(name,age) 
{
    this->student_id = sid;
}
// 부모함수를 재정의
void ShowPersonInfo()
{
    cout << "이 학생의 학번은 " << student_id << "입니다. "<< endl;
}
};

int main(void)
{
    // 멤버 함수 오버라이딩 관련
    Person lee("순신", 35);
	lee.ShowPersonInfo();
	Student hong(123456789, "길동", 29);
	hong.ShowPersonInfo();

    // 오버라이딩의 문제점.
    Person* ptr_person;
	Person lees("순신", 35);
	Student hongs(123456789, "길동", 29);
	
	ptr_person = &lees;
	ptr_person->ShowPersonInfo();
	ptr_person = &hongs;
	ptr_person->ShowPersonInfo();
    return 0;
}