#include <iostream>

using namespace std;

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

// Double형에 대한 명시적 특수화
template <> class Data<double>
{
private:
    double data;
public:
    Data(double dt)
    {
        this->data = dt;
    }
    double get_data()
    {
        cout << "double형 데이터를 출력합니다." << endl;
        return data;
    }
};

int main(void)
{
    Data<string> str_data("C++ 공부");
    Data<double> Double_data(3.141592);

    cout << "Str_data: " << str_data.get_data() << endl;
    cout << "Double_data: " << Double_data.get_data() << endl;
    return 0;
}