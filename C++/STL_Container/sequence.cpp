#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <iterator>

using namespace std;

int main(void)
{
    /*
        Sequence의 종류
        1. Vector
        2. Deque
        3. list
        4. forward_list
    */

    // Vector
    // 객체 생성 및 초기화
    vector<int> vc = {10,20,30};
    cout << "현재 vc vector의 크기는 "<< vc.size() << "입니다."<< endl;
    vc.push_back(40);                                               // vector 요소의 추가 
	cout << "현재 벡터의 크기는 " << vc.size() << "입니다." << endl;
	cout << "현재 벡터의 네 번째 요소는 " << vc[3] << "입니다." << endl;
	
	cout << "현재 벡터의 모든 요소는 다음과 같습니다 :";
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << endl;

    // Deque
    deque<int> dq = {20};	                                        // deque 객체의 선언 및 초기화 
	dq.push_back(30);		                                        // 요소의 후방 삽입 
	dq.push_front(10);		                                        // 요소의 전방 삽입 

	cout << "현재 데큐의 모든 요소는 다음과 같습니다 :";
	copy(dq.begin(), dq.end(), ostream_iterator<int>(cout, " "));
	cout << endl << "현재 데큐의 첫 번째 요소는 " << dq.front() << "입니다." << endl;

	dq.pop_front();			// 요소의 전방 삭제 
	cout << "현재 데큐의 모든 요소는 다음과 같습니다 :";
	copy(dq.begin(), dq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    cout << endl;

    // List
    list<int> ls = {1, 2, 2, 3, 4, 3, 5, 5};	// list 객체의 선언 및 초기화 
	// ls.sort();	// 1, 2, 3, 4, 5
	ls.unique();	// 1, 2, 3, 4, 3, 5
	cout << "현재 리스트의 모든 요소는 다음과 같습니다 :";
	copy(ls.begin(), ls.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    // Forward_list
    forward_list<int> fls01 = {10, 20, 400, 30};	// forward_list 객체의 선언 및 초기화 
	forward_list<int> fls02 = {40, 50};
	forward_list<int>::iterator itr;
	
	fls01.remove(400);				// 값이 400인 모든 요소를 삭제함.
	cout << "현재 순방향 리스트의 모든 요소는 다음과 같습니다 :";
	copy(fls01.begin(), fls01.end(), ostream_iterator<int>(cout, " "));
	cout << endl; 
	
	itr = fls01.begin();			// fls01의 첫 번째 요소를 가리키도록 반복자를 초기화함. 
	fls01.splice_after(itr, fls02);	// fls02의 모든 요소를 fls01의 첫 번째 요소 다음에 삽입함. 
	cout << "fls01 : "; 
	copy(fls01.begin(), fls01.end(), ostream_iterator<int>(cout, " "));
	cout << endl << "fls02 : "; 
	copy(fls02.begin(), fls02.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}