#include <iostream>
#include <iterator>
#include <stack>
#include <queue>

using namespace std;

int main(void)
{
    /*
        Container Adapter
        1. Stack
        2. Queue
        3. Priority_Queue
    */

    // Stack
    int decimal = 123;
	stack<int> decimal_stack;
	cout << "Stack을 통한 10진수 " << decimal << "을 2진수로 변환하기." << endl << "결과: ";

	// 10진수를 2진수로 변환 
	do {
		decimal_stack.push(decimal % 2);
		decimal /= 2;
	} while(decimal);
	
	// 스택의 모든 요소를 인출 
	while(!decimal_stack.empty())
	{
		cout << decimal_stack.top();
		decimal_stack.pop();
	}
    cout << endl << endl;

    // Queue
    cout << "Queue를 통해 피보나치 수열 작성하기. " << endl;
    int n = 20;		// 20개의 피보나치 수열을 출력함. 
	queue<int> fibonaci_que;
	fibonaci_que.push(0);	// 초기값인 0과 1을 저장함. 
	fibonaci_que.push(1);
	
	// 피보나치 수열 
	for(int i = 2; i < n; i++)
	{
		int temp = fibonaci_que.front();
		cout << temp << " ";
		fibonaci_que.pop();
		fibonaci_que.push(temp + fibonaci_que.front());
	}
    cout << endl << endl;

    // Priority_Queue
    cout << "Priority Queue를 통해 우선순위 호출" << endl;
    priority_queue<int> pq;
	pq.push(10); 
	pq.push(20);
	pq.push(100);
	pq.push(3);
	
	// 우선 순위 큐의 모든 요소를 인출 
	while(!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
    cout << endl;
    return 0;
}