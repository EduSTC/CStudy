
import java.util.Scanner;

public class NumberOfNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // The task is to count the number of numbers
        int numbers = 0;
        
        // The task is to make a loop of user inputs
        while (true) {
            System.out.println("Give a number:");
            // read user number
            int n = Integer.valueOf(scanner.nextLine());
            // Check if the number is equal to 0
            if (n != 0) {
                numbers = numbers + 1;
            }
            // Close if number entered is 0
            if (n == 0) {
                break;
            }
        }
        // total of numbers entered
        System.out.println("Number of numbers: " + numbers);
    }
}
