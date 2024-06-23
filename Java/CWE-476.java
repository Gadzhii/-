public class NullPointerDereference {
    public static void main(String[] args) {
        dereferenceNullPointer();
    }

    public static void dereferenceNullPointer() {
        String str = null; // Инициализация строки нулевым значением
        System.out.println(str.length()); // Попытка вызова метода на нулевой ссылке
    }
}
