package main

import (
	"fmt"
	"io/ioutil"
	"net/http"
	"os"
	"path/filepath"
)

func main() {
	http.HandleFunc("/readfile", readFileHandler)
	http.ListenAndServe(":8080", nil)
}

func readFileHandler(w http.ResponseWriter, r *http.Request) {
	filename := r.URL.Query().Get("file")
	if filename == "" {
		http.Error(w, "File parameter is missing", http.StatusBadRequest)
		return
	}

	// Опасное место: нет проверки пути
	filePath := filepath.Join("uploads", filename)

	data, err := ioutil.ReadFile(filePath)
	if err != nil {
		http.Error(w, "File not found", http.StatusNotFound)
		return
	}

	w.Write(data)
}

func init() {
	// Создание директории uploads и тестового файла
	os.Mkdir("uploads", 0755)
	ioutil.WriteFile("uploads/test.txt", []byte("This is a test file."), 0644)
	fmt.Println("Test file created at uploads/test.txt")
}
