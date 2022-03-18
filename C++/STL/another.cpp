#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> v = { 1, 2, 3, 4, 5};
    copy(v.begin(), v.end(), ostream_iterator<int>(cout));
    cout << endl;
    copy(v.begin(), v.end(), ostream_iterator<int>(cout," "));
    return 0;
}
