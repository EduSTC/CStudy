
import java.nio.file.Paths;
import java.util.Scanner;

public class RecordsFromAFile {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Name of the file:");
        String name = String.valueOf(scanner.nextLine());
        
        try (Scanner fileName = new Scanner(Paths.get(name))) {
            
            while (fileName.hasNextLine()) {
                String lines = fileName.nextLine();
                
                String[] parts = lines.split(",");
                if (Integer.valueOf(parts[1]) == 1) {
                    System.out.println(parts[0] + ", age: " + parts[1] + " year");
                } else {
                    System.out.println(parts[0] + ", age: " + parts[1] + " years");
                }
                
                
                
            }
        } catch (Exception e) {
            System.out.println("Error: " + e);
        } 

    }
}
