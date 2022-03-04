package main

import (
	"Project2/mydict"
	"fmt"
)

func main() {
	dictionary := mydict.Dictionary{"first": "first word"}
	definition, err := dictionary.Search("first")
	if err != nil {
		fmt.Println(err)
	} else {
		fmt.Println(definition)
	}
}
