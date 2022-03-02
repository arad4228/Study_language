package main

import "fmt"

func main() {
	// array는 length에 제한이 걸려있다.
	names := [6]string{"njasd", "asdf", "gasqwe"}
	names[3] = "alala"
	names[4] = "asdfq"
	names[5] = "asgqwe"
	// slice는 length에 제한이 없다.
	namez := []string{"54132", "asdasd", "asdaqwe", "qwrxca", "qradvasd", "asrqwasd"}
	fmt.Println(names)
	namez[4] = "lalala"
	fmt.Println(namez)
	// 만약 slice의 끝에 원소를 추가하길 원한다면 아래와 같이 사용
	namez = append(namez, "7894313")
	fmt.Println(namez)
}
