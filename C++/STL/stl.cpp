#include <iostream>

using namespace std;

// input iterator
// 가장 단순한 형태의 반복자로, 컨테이너로부터 값을 읽는 데 사용된다.
// 입력 반복자를 사용했을 때는 컨테이너로부터 값을 읽을 수 있으나 프로그램이 그 값을 변경할 수 없다.
// 이 반복자는 읽기 전용에서 사용한다.
// 아래는 순차 검색을 통해 컨테이너에 폼한된 특정한 값을 찾아내는 Find()의 원형이다.
template<class InputIterator, class T>
InputIterator Find(InputIterator first, InputIterator last, const T& value);

// output iterator
// 출력반복자는 입력반복자와 다르게 값을 변경하기 위해 사용한다.
// 따라서 이를 사용하면 값을 읽을 수는 없으나 컨테이너의 값을 변경할 수 있다.
template<class Inputiterator, class OutputIterator>
OutputIterator Copy(Inputiterator first, Inputiterator last, OutputIterator result);

// forward iterator
// 이 순방향 반복자는 입출력이 모두 가능한 방복자이다.
// 따라서 이 반복자는 다중 패스 알고리즘에서 사용할 수 있다.
// 순방향 반복자는 ++ 연산을 상요하여 순방향으로 이동할 수 있다.
template<class ForwardIterator, class T>
void Replace(ForwardIterator first, ForwardIterator last, const T& target, const T& replacememt);

// bidirectional iterator
// 양방향 반복자도 입출력이 모두 가능한 반복자이다.
// 양방향 반복자는 ++을 사용해서 순방향으로, --을 사용해서 역방향으로 이동할 수 있다.
template<class BidirectionalIterator, class OutputIterator>
OutputIterator Reverse(BidirectionalIterator first, BidirectionalIterator last, OutputIterator result);

// random access iterator
// 임의 접근 반복자는 최사우이 레벨의 반복자로서 가장많은 기능을 제공한다.
// 임의 접근 반복자는 양방향 반복자의 모든 기능을 포함하며, []연산을 통해 임의의 요소에 접근할 수 있다.
// 또 ++, -- 연산을 통해 접근도 가능하다.
template<class RandomAccessIterator>
void Sort(RandomAccessIterator first, RandomAccessIterator last);