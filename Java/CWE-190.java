public class IntegerOverflowExample {
    public static void main(String[] args) {
        int maxInt = Integer.MAX_VALUE;
        int result = maxInt + 1;  // Здесь происходит переполнение
        System.out.println("Result: " + result);
    }
}
