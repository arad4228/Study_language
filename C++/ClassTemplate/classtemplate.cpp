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

int main(void)
{
    Data<string> str_data("C++ 공부");
    Data<int> int_data(12);

    cout << "Str_data: " << str_data.get_data() << endl;
    cout << "Int_data: " << int_data.get_data() << endl;
    return 0;
}