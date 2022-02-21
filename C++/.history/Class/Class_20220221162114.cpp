#include <iostream>
#include <string>

using namespace std;

class cat
{
    public:
    string name;
    string family;
    int age;
    double weight;

    cat(string name, string family, int age, double weight)
    {
        this->name = name;
        this->family = family;
        this->age = age;
        this->weight = weight;
    }

    void Mew()
    {
        cout << "Mew!" << endl;
    }

    void Eat()
    {
        this->weight++;
    }

    void Sleep()
    {
        cout << "zzzzzz" << endl;
    }
    
    void Play()
    {
        cout << "Play with me!" << endl;
    }
    
    void Set(string name, string family, int age, double weight)
    {
        this->name = name;
        this->family = family;
        this->age = age;
        this->weight = weight;
    }
};

int main(void)
{
    // new를 통한 생성.
    cat* c1 = new cat("나비", "코리안 숏 헤어", 1, 0.1);
    cout << "고양이의 정보는 "<< c1->name << " " << c1->family << " " <<c1->age << " ";
    cout.precision(4);
    cout << fixed <<c1->weight << endl;
    c1->Mew();
    c1->Sleep();
    c1->Play();
    
    return 0;
}