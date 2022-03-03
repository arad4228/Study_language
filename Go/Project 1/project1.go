package main

import (
	"Project1/accounts"
	"fmt"
	"log"
)

func main() {
	// construct로 내용을 변경할 수 없음.
	account := accounts.NewAccount("jung")
	fmt.Println(account)
	account.Deposit2(20)
	fmt.Println(account.Balance())
	err := account.Withdraw(30)
	if err != nil {
		log.Fatalln(err)
		// 위의 방법이나 아래의 방법을 사용
		//fmt.Println(err)
	}
	fmt.Println(account.Balance())
}
