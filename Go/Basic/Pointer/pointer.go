package main

import "fmt"

func main() {
	a := 2
	// C와 같이 메모리 할당
	b := &a
	a = 5
	fmt.Println(&a, b)
	// C와 같이 메모리의 값 보기
	fmt.Println(a, *b)
	*b = 20101
	fmt.Println(a, *b)
}
