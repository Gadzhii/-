import java.io.BufferedReader;
import java.io.InputStreamReader;

public class VulnerableExample {
    public static void main(String[] args) {
        try {
            BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
            System.out.print("Введите директорию: ");
            String directory = reader.readLine();

            // Уязвимая строка
            String command = "ls " + directory;
            Process process = Runtime.getRuntime().exec(command);

            BufferedReader input = new BufferedReader(new InputStreamReader(process.getInputStream()));
            String line;
            while ((line = input.readLine()) != null) {
                System.out.println(line);
            }
            input.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
