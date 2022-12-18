
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<String> names = new ArrayList<>();
        ArrayList<String> identifiers = new ArrayList<>();
        
        
        
        while (true) {
            System.out.println("Identifier?(empty will stop)");
            String identifier = String.valueOf(scanner.nextLine());
            if (identifier.isEmpty()) {
                break;
            }
            System.out.println("Name?(empty will stop)");
            String name = String.valueOf(scanner.nextLine());
            if (name.isEmpty()) {
                break;
            }
            if (!(identifiers.contains(identifier))) {
                names.add(name);
                identifiers.add(identifier);
            }
            

        }
        for (int i = 0; i < names.size(); i++) {
            System.out.println(identifiers.get(i) + ": " + names.get(i));
        }
        


    }
}
