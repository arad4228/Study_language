package main

import "fmt"

func main() {
	// 상수에 대한 것으로 이름 형식 = 내용으로 구성
	const name1 string = "Jung"
	// 변수에 대한 생성방식
	var name2 string = "kyoung"
	// 위의 방식은 아래와 동일하다.
	// 이 방식은 func안에서만 축약이 가능하다.
	name3 := "Kyoung"
	name2 = "Jae"
	fmt.Println(name1)
	fmt.Println(name2)
	fmt.Println(name3)
}
