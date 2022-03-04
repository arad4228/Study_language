package mydict

import "errors"

var errNotFound = errors.New("Not Found")
var errWordExists = errors.New("That word already exists")

type Dictionary map[string]string

// Search for a word
func (d Dictionary) Search(word string) (string, error) {
	value, exist := d[word]
	if exist {
		return value, nil
	}
	return "", errNotFound
}

// Add a word to the dictionary
func (d Dictionary) Add(word, def string) error {
	_, err := d.Search(word)
	/*
		if err == errNotFound {
			d[word] = def
		} else if err == nil {
			return errWordExists
		}
	*/
	//또는 switch로 가능하다.
	switch err {
	case errNotFound:
		d[word] = def
	case nil:
		return errWordExists
	}
	return nil
}
