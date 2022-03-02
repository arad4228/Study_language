package main

import "fmt"

func canIDrink(age int) bool {
	switch age {
	case 10:
		return false
	case 18:
		return true
	}
	return false
}

//위나 아래와 같이 if else if else를 줄일 수 있다.
func canIDrinks(age int) bool {
	switch {
	case age < 18:
		return false
	case age == 18:
		return true
	case age > 50:
		return false
	}
	return false
}

// 또는 아래와 같이 variable expression이 가능하다.
func canIDrinkz(age int) bool {
	switch koreanAge := age + 2; koreanAge {
	case 10:
		return false
	case 18:
		return true
	case 50:
		return false
	}
	return false
}

func main() {
	fmt.Println(canIDrink(18))
	fmt.Println(canIDrinks(20))
	fmt.Println(canIDrinkz(20))
}
