#include <iostream>
using namespace std;

class Book
{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title, int total_page); 
	~Book();	// 소멸자의 원형 정의 
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};

int main(void)
{
	Book web_book("HTML과 CSS", 350);	// 생성자의 암시적 호출 
	// 생성자가 호출되어 멤버 변수인 percent_가 초기화되었는지를 확인함. 
	cout << web_book.percent_ << endl;
	return 0;
}

Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}

// 소멸자의 선언 
Book::~Book()	
{
	// 프로그램이 종료될 때 컴파일러에 의해 자동으로 호출됨.
	cout << "Book 객체의 소멸자가 호출되었습니다." << endl; 
}

void Book::set_percent()
{
	percent_ = (double) current_page_ / total_page_ * 100;
}