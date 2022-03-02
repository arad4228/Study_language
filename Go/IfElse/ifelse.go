package main

import "fmt"

func canIDrink(age int) bool {
	// 새로운 var 생성가능
	// koreaAge := age + 2
	// if koreaAge < 18
	// 과 동일하다. = variable expression
	if koreaAge := age + 2;koreaAge < 18 {
		return false
	}

	return true
}

func main() {
	fmt.Println(canIDrink(16))
}
