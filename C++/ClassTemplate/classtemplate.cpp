#include <iostream>

using namespace std;


// 해당 클래스는 단일 클래스 템플릿이다.
template <typename T>
class Data
{
private:
    T data;
public:
    Data(T dt)
    {
        this->data = dt;
    }
    T get_data()
    {
        return this->data;
    }
};
/*
해당 부분은 중첩 클래스 템플릿의 예시이다.
template <typename T>
class X
{
    template <typename U>
    class Y
    {

    }
}

template <typename T>
template <typename U>
X<T>::Y<U>::멤버함수이름(){};
*/
int main(void)
{
    Data<string> str_data("C++ 공부");
    Data<int> int_data(12);

    cout << "Str_data: " << str_data.get_data() << endl;
    cout << "Int_data: " << int_data.get_data() << endl;
    return 0;
}