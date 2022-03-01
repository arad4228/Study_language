package main

import (
	"fmt"
	"strings"
)

// naked return
// return을 명시적으로 하지 않아도 된다.
func lenAndUpper1(name string) (length int, uppercase string) {
	length = len(name)
	uppercase = strings.ToUpper(name)
	return
}

// defer
// function이 끝나면 추가적으로 다른 일을 처리
func lenAndUpper2(name string) (length int, uppercase string) {
	defer fmt.Println("I'm Done")
	length = len(name)
	uppercase = strings.ToUpper(name)
	return
}

func main() {
	totalLength1, upper1 := lenAndUpper1("asffqwe")
	totalLength2, upper2 := lenAndUpper2("asdgfqfdf")
	fmt.Println(totalLength1, upper1)
	fmt.Println(totalLength2, upper2)
}
