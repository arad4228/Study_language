#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    // 1. length()
    string str1;
    string str2 = "C++ Programming";
    cout << "문자열 str1의 길이는 " << str1.length() << "입니다." << endl;
    cout << "문자열 str2의 길이는 " << str2.size() << "입니다."<< endl;

    // 2. append()
    string str3, str4, str5;
    str3.append("C++ Programming");
    str4.append("C++ Programming", 4, 7);
    str5.append(4, 'X');
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5;

    // 3. find()
    string str6 = "C++ Programming";
    cout << str6.find("Pro") << endl;
    cout << str6.find('r') << endl;
    if (str6.find("Pro", 5) != string::npos)
    {
        cout << "해당 문자열을 찾았습니다."<< endl;
    }
    else
    {
        cout << "해당 문자열을 찾지 못했습니다."<< endl;
    }

    // 4. compare()
    string str7 = "ABC";
    string str8 = "ABD";
    if (str7.compare(str2) == 0)
    {
        cout << str7 << "이 " << str8 << "와 같습니다."<< endl;
    } 
    else if (str7.compare(str8) < 0)
    {
        cout << str7 << "이 " << str8 << "보다 사전 편찬 순으로 앞에 있습니다."<< endl;
    }
    else
    {
        cout << str7 << "이 " << str8 << "보다 사전 편찬 순으로 뒤에 있습니다."<< endl;
    }

    // 5. replace()
    string str9 = "C++ is very nice!";
    string str10 = "nice";
    string str11 = "awesome";
    string::size_type index = str9.find(str2);
    if (index != string::npos)
    {
        //nice를 awesome으로 변경.
        str9.replace(index, str10.length(), str11);
    }
    cout << str9 << endl;;
    
    return 0;
}