#include <iostream>
#include <set>
#include <map>
#include <iostream>

using namespace std;

int main(void)
{
    /*
        Associate의 종류
        1. Set
        2. Multiset
        3. Map
        4. Multimap
    */

    // Set & MultiSet
    int arr[5] = {10, 20, 30, 40, 50};	// 배열 생성 및 초기화 
	set<int> st(arr, arr+3);			// 배열의 일부 요소를 가지고 셋 컨테이너를 생성함. 
	cout << "현재 집합의 모든 요소는 다음과 같습니다 : ";
	copy(st.begin(), st.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	st.insert(60);	                    // 요소의 추가 
	st.insert(70);	                    // 요소의 추가 
	st.erase(20);	                    // 요소의 삭제 
	cout << "현재 집합의 모든 요소는 다음과 같습니다.";
	copy(st.begin(), st.end(), ostream_iterator<int>(cout, " "));
    cout << endl << endl;

    // Map & MultiMap
    map<string, int> course;
	course.insert(pair<string, int>("국어", 80));	// 익명의 pair 객체를 생성하여 추가함. 
    course.insert(pair<string, int>("영어", 85));
	course["수학"] = 100;							// 첨자 연산자를 이용하여 추가함. 
    course["과학"] = 90;
	
	cout << "현재 맵의 모든 요소는 다음과 같습니다 : ";
	map<string, int>::iterator it;
	for(it = course.begin(); it != course.end(); it++)
	{
		cout << it->first << " : " << it->second << "\t";
	}
    cout << endl;

    return 0;
}