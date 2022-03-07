package main

import (
	"fmt"
	"time"
)

func main() {
	/*
		Top-down방식의 일방적인 방법.
		fmt.Println("일반적인 하나씩 처리하는 방법")
		sexyCount("jung")
		sexyCount("kung")

		병렬처리
		이방식은 Goroutine이 살아있는 동안에만 유효하다.
		따라서 main이 살아있는 동안이지에 동작 따라서
		모든 함수에서 go를 사용하면 아무일도 일어나지 않는다.
		fmt.Println("하나씩이 아닌 병렬적으로 처리하는 방법")
		go sexyCount("jung")
		sexyCount("kung")

		따라서 아래의 방법으로 임시 방편으로 살릴 수 있다.
		go sexyCount("jung")
		go sexyCount("kung")
		time.Sleep(time.Second * 5)
	*/
	c := make(chan bool)
	people := [2]string{"jung", "kyng"}
	for _, person := range people {
		go isSexy(person, c)
	}
	// result := <- c
	// fmt.Println(result)
	// 2개의 Goroutine과 2개의 Channel이 생성됨을 안다.
	fmt.Println(<-c)
	fmt.Println(<-c)
}

// 병렬처리를 위해 생성한 함수
func sexyCount(person string) {
	for i := 0; i < 10; i++ {
		fmt.Println(person, "is sexy ", i)
		time.Sleep(time.Second)
	}
}

// Channel을 사용하기 위해 생성한 함수.
func isSexy(person string, c chan bool) {
	time.Sleep(time.Second * 5)
	fmt.Println(person)
	// Goroutine을 통해 return을 받는 대신에 channel을 통해 메시지를 보냄
	c <- true
}
