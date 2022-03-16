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
class info {
private:
string infos;
// 자식의 생성자 정의
public:
info(const string& infos)
{
    this->infos = infos;
}
void ShowInfo()
{
    cout << infos << endl;
}
};

class StudentClid :public Person, public info{
private:
string templaze;
public:
StudentClid(const string& name, int age, const string& infos, const string& templaze) : Person(name,age), info(infos)
{
    this->templaze = templaze;
}
void Print()
{
    cout << templaze << endl;
}
};

int main(void)
{
    Person hong("길동", 29);
	hong.ShowPersonInfo();
    StudentClid arad("arad4228", 24,"길동의 자식","현재 서울에 있음.");
    arad.ShowPersonInfo();
    arad.ShowInfo();
    arad.Print();
    return 0;
}