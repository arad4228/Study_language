#include <iostream>

using namespace std;

struct book{
    string title;
    string author;
    int price;
};

int main(void)
{
    book webbook = {"HTML과 CSS", "정경재", 28000};
    book javabook = {"JAVA", "정경재", 2000};

    cout << "첫번째 책의 이름은 " << webbook.title << "이고 저자는 " << webbook.author << "이고 가격은 " << webbook.price << "원입니다. " << endl;
    cout << "두번째 책의 이름은 " << javabook.title << "이고 저자는 " << javabook.author << "이고 가격은 " << javabook.price << "원입니다. " << endl;

    
    return 0;
}