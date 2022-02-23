#include <iostream>

using namespace std;

class Rects
{
private:
	double height_;
	double width_;
public:
	Rects(double height, double width);	// 생성자 
	void DisplaySize();
	Rects operator*(double mul) const;
    friend Rects operator*(double mul, const Rects& origin);
};

class Rect
{
private:
	double height_;
	double width_;
public:
	Rect(double height, double width);	// 생성자 
	void height() const;
	void width() const;
	friend class Display;	// 프렌드 클래스 선언 
};

class Display
{
public:
    void ShowSize(const Rect& target);
    void ShowDiagonal(const Rect& target);
};

int main(void)
{
	Rects origin_rect(10, 20);
	Rects changed_rect1 = origin_rect * 2;
	Rects changed_rect2 = 3 * origin_rect;
	
	changed_rect1.DisplaySize();
    changed_rect2.DisplaySize();
	return 0;
}

Rects::Rects(double height, double width)
{
	height_ = height;
	width_ = width;
}

void Rects::DisplaySize()
{
	cout << "이 사각형의 높이는 " << this->height_ << "이고, 너비는 " << this->width_ << "입니다." << endl;
}

Rects Rects::operator*(double mul) const
{
	return Rects(height_ * mul, width_ * mul);
}
Rects operator*(double mul, const Rects& origin) 
{ 
    return origin * mul; 
}