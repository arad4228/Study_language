package main

import (
	"Project2/mydict"
	"fmt"
)

func main() {
	dictionary := mydict.Dictionary{"first": "first word"}
	baseword := "hello"
	dictionary.Add(baseword, "first")
	err := dictionary.Update(baseword, "Second")
	if err != nil {
		fmt.Println(err)
	}
	word, _ := dictionary.Search(baseword)
	fmt.Println(word)
	dictionary.Delete(baseword)
	words, errs := dictionary.Search(baseword)
	if errs != nil {
		fmt.Println(errs)
	}
	fmt.Println(words)
}
