package main

import "fmt"

func dereferenceNullPointer() {
	var ptr *int = nil // Указатель инициализирован нулем
	fmt.Println(*ptr)  // Попытка разыменования нулевого указателя
}

func main() {
	dereferenceNullPointer()
}
