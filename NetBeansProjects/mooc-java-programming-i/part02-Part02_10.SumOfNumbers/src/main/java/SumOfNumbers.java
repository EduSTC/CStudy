
import java.util.Scanner;

public class SumOfNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // sum of all numbers entered
        int sum = 0;
        // loop to input numbers
        while (true) {
            System.out.println("Give a number:");
            int number = Integer.valueOf(scanner.nextLine());
            
            // check if user wants to quit
            if (number == 0) {
                break;
            } else {
                sum = sum + number;
            }
        }
        System.out.println("Sum of the numbers: " + sum);
    }
}
