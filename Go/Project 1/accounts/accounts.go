package accounts

import "errors"

// Acount Private struct
type Account struct {
	owner   string
	balance int
}

var errNoMoney = errors.New("Can't with draw")

// New Account create Account
func NewAccount(owner string) *Account {
	account := Account{owner: owner, balance: 0}
	return &account
}

// Method를 생성하는 방법
// (a Account)는 receiver에 해당한다.
// 현재의 방식은 a의 값을 복사해온다.
// Deposit X amount on your account
func (a Account) Deposit1(amount int) {
	a.balance += amount
}

// 아래와 같이 수정해야한다.
// 이는 C의 call by reference와 비슷
func (a *Account) Deposit2(amount int) {
	a.balance += amount
}

func (a Account) Balance() int {
	return a.balance
}

// error에 관한 사항을 정리
// nil은 아무에러를 표시 X
// Withdraw X amount from your account
func (a *Account) Withdraw(amount int) error {
	if a.balance < amount {
		//return errors.New("Can's Withdraw you are poor")
		return errNoMoney
	}
	a.balance -= amount
	return nil
}
