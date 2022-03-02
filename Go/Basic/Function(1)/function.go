package main

import (
	"fmt"
	"strings"
)

func multiply1(a int, b int) int {
	return a * b
}

// 인자가 동일하면 합쳐서 쓸 수 있다.
func multiply2(a, b int) int {
	return a * b
}

// Go는 여러개의 return을 가질 수 있다.
func lenAndUpper(name string) (int, string) {
	return len(name), strings.ToUpper(name)
}

//여러개의 인자를 받아 한번에 출력하고 싶을 경우
func repeatMe(words ...string) {
	fmt.Println(words)
}

func main() {
	// 이방법은 2가지의 인수를 받지만 만약 선택적으로 받고 싶다면 아래와 같이 작성한다.
	totalLength1, upperName := lenAndUpper("jung")
	// _는 무시한다는 것이다.
	totalLength2, _ := lenAndUpper("keasd")
	fmt.Println(multiply1(2, 2))
	fmt.Println(multiply2(2, 4))
	fmt.Println(totalLength1, upperName)
	fmt.Println(totalLength2)
	// array의 형태로 출력된다.
	repeatMe("jung", "asdgf", "asgasd", "asgqwe", "qwrtasd")
}
