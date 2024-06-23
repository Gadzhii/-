package main

import "fmt"

func addLargeNumbers(a int32, b int32) int32 {
	return a + b
}

func main() {
	var maxInt int32 = 2147483647 // Maximum value for a 32-bit signed integer
	a := maxInt
	b := int32(1)
	fmt.Printf("The result of adding %d and %d is: %d\n", a, b, addLargeNumbers(a, b))
}
