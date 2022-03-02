package main

import "fmt"

type person struct {
	name    string
	age     int
	favfood []string
}

//	go는 class나 object가 없다.

func main() {
	favfood := []string{"chick", "kimchi"}
	// jung := person{"jung", 24, favfood}
	// 위의 방식보다 아래의 방싣이 더 명확하다.
	jung := person{name: "jung", age: 24, favfood: favfood}
	fmt.Println(jung)
	fmt.Println(jung.favfood)
}
