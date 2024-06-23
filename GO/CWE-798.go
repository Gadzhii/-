package main

import (
	"fmt"
	"net/http"
)

func main() {
	// Жестко закодированные учетные данные
	username := "admin"
	password := "password123"

	http.HandleFunc("/login", func(w http.ResponseWriter, r *http.Request) {
		user := r.FormValue("username")
		pass := r.FormValue("password")

		if user == username && pass == password {
			fmt.Fprintf(w, "Вход выполнен успешно")
		} else {
			fmt.Fprintf(w, "Неверные учетные данные")
		}
	})

	fmt.Println("Сервер запускается на порту 8080...")
	http.ListenAndServe(":8080", nil)
}
