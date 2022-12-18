
import java.util.Scanner;

public class AverageOfNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // track the number of numbers
        int n = 0;
        // track the sum of the numbers
        int sum = 0;
        
        // loop to get input numbers
        while (true) {
            System.out.println("Give a number:");
            int number = Integer.valueOf(scanner.nextLine());
            
            // check if the user wants to quit
            if (number == 0) {
                break;
            } else {
                sum = number + sum;
                n = n + 1;
            }
        }
        // calculate the average
        double average = (double) sum / n;
        System.out.println("Average of the numbers: " + average);

    }
}
