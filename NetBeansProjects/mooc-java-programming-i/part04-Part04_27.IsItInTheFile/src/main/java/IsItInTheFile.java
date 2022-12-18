
import java.nio.file.Paths;
import java.util.Scanner;

public class IsItInTheFile {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean find = false;

        
        System.out.println("Name of the file:");
        String file = scanner.nextLine();

        System.out.println("Search for:");
        String searchedFor = scanner.nextLine();
        
        try (Scanner fileName = new Scanner(Paths.get(file))) {
            while (fileName.hasNextLine()) {
                String row = fileName.nextLine();
                if (row.equals(searchedFor)) {
                    find = true;
                }    
            }
            
        } catch (Exception e) {
            System.out.println("Reading the file " + file + " failed.");
        }
        
        if (find) {
            System.out.println("Found!");
        } else {
            System.out.println("Not found.");
        }
        

    }
}
