package main

import "fmt"

// Map은 java의 Object와 비슷하나 같지는 않다.

func main() {
	//key와 value가 string
	jung := map[string]string{"name": "jung", "age": "12"}
	// for문을 통해 해당을 출력할 수 있다.
	// key나 value중 하나를 선택출력의 경우 _를 통해 해결가능하다.
	for key, value := range jung {
		fmt.Println(key, value)
	}
	fmt.Println(jung)
}
