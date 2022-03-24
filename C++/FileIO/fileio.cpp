#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
    ifstream ifs;
    string str;
    char c;
    char buf[20];

    ifs.open("example.txt");
    if(!ifs.is_open())
    {
        cout << "파일을 열 수 없습니다." << endl;
        exit(0);
    }
    else 
    {
        cout << "파일을 성공저그올 열었습니다." << endl;
        getline(ifs,str);
        ifs >> c;
        ifs.getline(buf,20);
        cout << str << endl;
        cout << c << endl;
        cout << buf << endl;
        ifs.close();
    }
    return 0;
}
