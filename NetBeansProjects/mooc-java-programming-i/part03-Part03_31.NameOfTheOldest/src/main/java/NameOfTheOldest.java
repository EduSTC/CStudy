
import java.util.Scanner;

public class NameOfTheOldest {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int oldest = 0;
        String name = "";
        
        while (true) {
            String text = String.valueOf(scanner.nextLine());
            if (text.equals("")) {
                break;
            }
            String[] pieces = text.split(",");
            int age = Integer.valueOf(pieces[1]);
            if (age >= oldest) {
                name = pieces[0];
                oldest = age;
            }
        }
        System.out.println("Name of the oldest: " + name);


    }
}
