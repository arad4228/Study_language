#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    // 1. length()
    string str1;
    string str2 = "C++ Programming";
    cout << "문자열 str1의 길이는 " << str1.length() << "입니다." << endl;
    cout << "문자열 str2의 길이는 " << str2.size() << "입니다.";

    // 2. append()
    string str1, str2, str3;
    str1.append("C++ Programming");
    str2.append("C++ Programming", 4, 7);
    str3.append(4, 'X');
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3;

    // 3. find()
    string str = "C++ Programming";
    cout << str.find("Pro") << endl;
    cout << str.find('r') << endl;
    if (str.find("Pro", 5) != string::npos)
    {
        cout << "해당 문자열을 찾았습니다.";
    }
    else
    {
        cout << "해당 문자열을 찾지 못했습니다.";
    }

    // 4. compare()
    string str1 = "ABC";
    string str2 = "ABD";
    if (str1.compare(str2) == 0)
    {
        cout << str1 << "이 " << str2 << "와 같습니다.";
    } 
    else if (str1.compare(str2) < 0)
    {
        cout << str1 << "이 " << str2 << "보다 사전 편찬 순으로 앞에 있습니다.";
    }
    else
    {
        cout << str1 << "이 " << str2 << "보다 사전 편찬 순으로 뒤에 있습니다.";
    }

    // 5. replace()
    string str1 = "C++ is very nice!";
    string str2 = "nice";
    string str3 = "awesome";
    string::size_type index = str1.find(str2);
    if (index != string::npos)
    {
        //nice를 awesome으로 변경.
        str1.replace(index, str2.length(), str3);
    }
    cout << str1;
    
    return 0;
}