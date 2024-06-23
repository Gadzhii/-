using System;

public class OutOfBoundsWriteExample {
    public static void Main() {
        int[] arr = new int[5];
        for (int i = 0; i <= 5; i++) { // Ошибка: запись за пределы массива
            arr[i] = i;
        }
    }
}
