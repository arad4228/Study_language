#include <iostream>

using namespace std;

int main(void)
{
    int num;
    cout << "Testing하기를 원하는 값을 입력하게요. ";
    cin >> num;
    // if문을 통한 제어
    if (num < 5)
    {
        cout << "입력한 수는 5보다 작습다. " << endl;
    }
    if (num == 5)
    {
        cout << "입력한 값은 5입니다. "<< endl;
    }
    if (num > 5)
    {
        cout << "입력한 값은 5보다 큽니다. "<< endl;
    }

    //if else문을 통한 제어 

    if (num > 5)
    {
        cout << "입력한 수는 5보다 큽니다. "<< endl;
    }
    else
    {
        if(num == 5)
        {
            cout << "입력한 수는 5입니다. "<< endl;
        }

        else
        {
            cout << "입력한 수는 5보다 작습니다. "<< endl;
        }
    }

    // if else-if문을 통한 제어
    if (num > 5)
    {
        cout << "입력한 값은 5보다 큽니다."<< endl;
    }
    else if (num < 5)
    {
        cout << "입력한 값은 5보다 작습니다. "<< endl;
    }
    else
    {
        cout << "입력한 값은 5입니다. "<< endl;
    }

    // 삼항 연산자를 통한 제어문
    num > 5 ? cout << "입력 값은 5보다 큽니다. " : cout << "입력한 값은 5보다 작습니다. "<< endl;

    // switch를 통한 제어문
    switch (num)
    {
        case 1:
            cout << "입력하신 수는 1입니다." << endl;
            break;
        case 2:
            cout << "입력하신 수는 2입니다." << endl;
            break;
        case 3:
            cout << "입력하신 수는 3입니다." << endl;
            break;
        case 4:
            cout << "입력하신 수는 4입니다." << endl;
            break;
        case 5:
            cout << "입력하신 수는 5입니다." << endl;
            break;
        default:
            cout << "1부터 5까지의 수만 입력해 주세요!" << endl;
            break;
    }
    
    return 0;
}