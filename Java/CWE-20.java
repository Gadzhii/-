import java.util.Scanner;

public class VulnerableExample {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a file name: ");
        String fileName = scanner.nextLine();

        // Vulnerable code: no validation on the file name
        System.out.println("Opening file: " + fileName);

        try {
            // Simulate file opening (the actual file operation is omitted for simplicity)
            openFile(fileName);
        } catch (Exception e) {
            System.out.println("Error opening file: " + e.getMessage());
        }

        scanner.close();
    }

    public static void openFile(String fileName) throws Exception {
        // Simulate file operation
        if (fileName.contains("..")) {
            throw new Exception("Invalid file path");
        }

        // Here you would normally open the file
        System.out.println("File opened successfully: " + fileName);
    }
}
