package main

import (
	"fmt"
)

func superAdd(numbers ...int) int {
	total := 0
	for _, number := range numbers {
		total = total + number
	}
	// index와 number를 준다.
	for index, number := range numbers {
		fmt.Println(index, number)
	}
	// 아래와 같은 형식으로 작성이 가능하다.
	for i := 0; i < len(numbers); i++ {
		fmt.Println(numbers[i])
	}
	return total
}

func main() {
	result := superAdd(1, 2, 3, 4, 5, 6, 7)
	fmt.Println(result)
}
