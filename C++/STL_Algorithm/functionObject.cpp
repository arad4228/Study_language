#include <iostream>
#include <functional>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(void)
{
    // 일반적으로 아래와 같이 사용하지 않는다.
    plus<int> add;
    equal_to<int> comp;
    greater_equal<int> ge;

    cout << add(7,3) << endl;
    cout << comp(3,4) << endl;
    cout << ge(7,3) << endl;

    // 일반적으로는 함수의 인수로 전달 된다.
    vector<int> vc = {20, 40, 10, 30};

    sort(vc.begin(), vc.end(), greater<int>());
    copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    sort(vc.begin(), vc.end(), less<int>());
    copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}