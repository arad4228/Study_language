#include <iostream>

using namespace std;

class Book{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};

int main(void)
{
    // 생성자의 암시적 호출 
	Book web_book("HTML과 CSS", 350);
    // 생성자를 명시적으로 호출
    Book CSS_book = Book("CSS와 Js", 350);
	// 생성자가 호출되어 멤버 변수인 percent_가 초기화되었는지를 확인함. 
	cout << web_book.percent_<< endl;
    cout << CSS_book.percent_<< endl;
	return 0;
}

Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}

void Book::set_percent()
{
	percent_ = (double) current_page_ / total_page_ * 100;
}