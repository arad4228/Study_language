#include <iostream>

using namespace std;

/*
    1. 부모 클래스는 반드시 자신만의 생성자를 작성해야 합니다.
    2. 부모 클래스에는 기초 클래스의 접근할 수 있는 모든 멤버 변수들이 저장됩니다.
    3. 부모 클래스는 기초 클래스의 접근할 수 있는 모든 멤버 함수를 사용할 수 있습니다.
    4. 부모 클래스에는 필요한 만큼 멤버를 추가할 수 있습니다.
*/

// 부모 클래스
class Person{
private:
string name;
int age;
public:
Person(const string& name, int age){
    this->name = name;
    this->age = age;
}
void ShowPersonInfo() {
    cout << name << "의 나이는 " << age << "살입니다." << endl;
}

};

// 자식 클래스
class Student : public Person{
    private:
    int student_id;
    public:
    Student(int sid, const string& name, int age) :Person(name,age) {
        this->student_id = sid;
    }
};

int main(void)
{
    Student hong(123456789, "길동", 29);
	hong.ShowPersonInfo();
	
    return 0;
}