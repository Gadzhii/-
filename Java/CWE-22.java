import java.io.*;

public class VulnerablePathTraversalExample {
    public static void main(String[] args) {
        if (args.length < 1) {
            System.out.println("Usage: java VulnerablePathTraversalExample <filename>");
            return;
        }

        String filename = args[0];
        String basePath = "C:\\safe_directory\\";
        String filePath = basePath + filename;

        try {
            BufferedReader reader = new BufferedReader(new FileReader(filePath));
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }
            reader.close();
        } catch (IOException e) {
            System.err.println("Error reading file: " + e.getMessage());
        }
    }
}
