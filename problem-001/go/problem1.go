package main

import "fmt"

func get_multiples_below(n int) []int {
	multiples := make([]int, n/2)

	for i := 0; i < n; i++ {
		if i % 3 == 0 || i % 5 == 0 {
			multiples = append(multiples, i)
		 }
	}

	return multiples
}

func sum_slice(slice []int) int {
	sum := 0

	for _, v := range slice {
		sum += v
	}

	return sum
}

func main() {
	fmt.Println(sum_slice(get_multiples_below(1000)))
}
