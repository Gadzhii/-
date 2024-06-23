package main

import (
	"fmt"
)

func useAfterFree() {
	arr := make([]int, 10)
	arr = nil // Освобождение памяти

	arr[0] = 42 // Использование памяти после освобождения (Use After Free)
	fmt.Println(arr[0])
}

func main() {
	useAfterFree()
}
