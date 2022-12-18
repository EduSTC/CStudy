
import java.util.Scanner;

public class NumberAndSumOfNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // track the number of numbers
        int n = 0;
        // track the sum of the numbers
        int sum = 0;
        // loop to get numbers from input
        while (true) {
            System.out.println("Give a number:");
            int number = Integer.valueOf(scanner.nextLine());
            
            // check if the user wants to quit
            if (number == 0) {
                break;
            } else {
                sum = sum + number;
                n = n + 1;
            }
            
        }
        // output the number of number and their sum
        System.out.println("Number of numbers: " + n);
        System.out.println("Sum of the numbers: " + sum);
        

    }
}
