
import java.util.Scanner;

public class Login {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter a username:");
        String username = String.valueOf(scanner.nextLine());
        System.out.println("Enter password:");
        String password = String.valueOf(scanner.nextLine());
        if ((username.equals("alex") && password.equals("sunshine")) || (username.equals("emma") && password.equals("haskell"))) {
            System.out.println("You successfully logged in!");
        } else {
            System.out.println("Incorret username or password!");
        }

    }
}
