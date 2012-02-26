package main

import "fmt"
//4000000
func sum_fibonacci_evens() uint {
	var sum, prev, last_but_one, fib uint
	sum = 0
	prev = 1
	last_but_one = 0

	for fib <= 4000000 {
		fib = prev + last_but_one
		last_but_one = prev
		prev = fib

		if fib % 2 == 0 {
			sum += fib
		}
	}

	return sum
}

func main() {
	 fmt.Println(sum_fibonacci_evens())
	 //sum_fibonacci_evens()
}
