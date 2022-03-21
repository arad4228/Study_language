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
    /*
        STL에서 제공하는 삽입 반복자.
        1. insertion_iterator
        2. back_insertion_iterator
        3. front_insertion_iterator 
    */
	ls.push_back(20);	// back_insert_iterator를 사용함. 
	ls.push_front(30);	// front_insert_iterator를 사용함. 
	copy(ls.begin(), ls.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    // Reverse iterator
    list<int> Rs = {10, 20, 30};
	copy(Rs.rbegin(), Rs.rend(), ostream_iterator<int>(cout, " "));
    cout << endl;
    
    return 0;
}
