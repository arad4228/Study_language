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

    // Constant iterator
    list<int> Cs = {10, 20, 30};
	list<int>::iterator iter;
    // 실수 반복자가 가르키는 요소를 상수화 한것이지 반복자 자체를 상수화 X
	list<int>::const_iterator citer;
	
	iter = Cs.begin();
	*iter = 100;
	citer = Cs.end();
	// *citer = 300;	// 상수 반복자이므로 값의 변경은 불가능함. 
		
	for(citer = Cs.begin(); citer != Cs.end(); citer++)
	{
		cout << *citer << " ";
	}
    cout << endl;

    return 0;
}
