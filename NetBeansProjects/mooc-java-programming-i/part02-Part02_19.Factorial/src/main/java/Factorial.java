
import java.util.Scanner;

public class Factorial {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // asking the number
        System.out.println("Give a number:");
        // factorial variable
        int factorial = 1;
        int number = Integer.valueOf(scanner.nextLine());
        if (number != 0) {
            for (int i = 1; i <= number; i++) {
                factorial = factorial * i;
            }
        } 
        System.out.println("Factorial: " + factorial);

    }
}
