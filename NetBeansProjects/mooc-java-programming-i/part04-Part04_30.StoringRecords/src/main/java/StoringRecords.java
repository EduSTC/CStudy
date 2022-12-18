
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Scanner;

public class StoringRecords {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Filename:");
        String file = scan.nextLine();

        ArrayList<Person> records = readRecordsFromFile(file);
        System.out.println("Persons: " + records.size());
        System.out.println("Persons:");
        for (Person person : records) {
            System.out.println(person);

        }
    }

    public static ArrayList<Person> readRecordsFromFile(String file) {
        ArrayList<Person> persons = new ArrayList<>();
        try (Scanner fileName = new Scanner(Paths.get(file))) {
            while (fileName.hasNextLine()) {
                String line = fileName.nextLine();
                
                String[] parts = line.split(",");
                
                int age = Integer.valueOf(parts[1]);
                
                String name = String.valueOf(parts[0]);
                
                persons.add(new Person(name, age));
                
            }
            
            
        } catch (Exception e) {
            System.out.println("Error: " + e);
            
        }
        

        // Write here the code for reading from file
        // and printing the read records
        return persons;

    }
}
