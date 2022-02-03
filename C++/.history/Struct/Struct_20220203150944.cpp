#include <iostream>

using namespace std;

struct book{
    string title;
    string author;
    int price;
};

struct Prop{
    int saving;
    int load;
};

int CalProperty(int, int);
int CalProperty(Prop* );

int main(void)
{
    book webbook = {"HTML과 CSS", "정경재", 28000};
    book javabook = {"JAVA", "정경재", 2000};

    cout << "첫번째 책의 이름은 " << webbook.title << "이고 저자는 " << webbook.author << "이고 가격은 " << webbook.price << "원입니다. " << endl;
    cout << "두번째 책의 이름은 " << javabook.title << "이고 저자는 " << javabook.author << "이고 가격은 " << javabook.price << "원입니다. " << endl;

    int Jung_prop1, Jung_prop2;
    Prop Jung = {1000000, 400000};

    Jung_prop1 = CalProperty(Jung.saving,Jung.load);
    Jung_prop2 = CalProperty(&Jung);

    cout << "정경재의 재산은 적금 " <<  Jung.saving << "원에 이율 " << Jung.load << "원을 제외한 총 " << Jung_prop1 << "원입니다." << endl;
    cout << "정경재의 재산은 적금 " <<  Jung.saving << "원에 이율 " << Jung.load << "원을 제외한 총 " << Jung_prop2 << "원입니다." << endl;
    return 0;
}

int CalProperty(int s, int i)
{
    return (s-i);
}

int CalProprty(Prop* money)
{
    money->saving = 20000;
    return (money->saving - money->load);
}