#include <iostream>
#include <iterator>
#include <vector>
#include <list>
using namespace std;

int main(void)
{
    // Stream itorator
    vector<int> v = { 1, 2, 3, 4, 5};
    copy(v.begin(), v.end(), ostream_iterator<int>(cout));
    cout << endl;
    copy(v.begin(), v.end(), ostream_iterator<int>(cout," "));
    cout << endl;

    // Insertion iterator
    list<int> ls = {10};
	ls.push_back(20);	// back_insert_iterator를 사용함. 
	ls.push_front(30);	// front_insert_iterator를 사용함. 
	copy(ls.begin(), ls.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
