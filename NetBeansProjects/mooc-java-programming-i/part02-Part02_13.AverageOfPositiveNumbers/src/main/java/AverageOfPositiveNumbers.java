
import java.util.Scanner;

public class AverageOfPositiveNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // track the number of positive numbers
        int positive = 0;
        // track the sum of positive numbers
        int sumPositive = 0;
        // calculate the average
        double average = 0;
        
        // loop to get numbers from input
        while (true) {
            System.out.println("Give a number:");
            int number = Integer.valueOf(scanner.nextLine());
            
            // check if user wants to quit
            if (number == 0) {
                break;
            }
            
            // check if the number is positive
            if (number >= 0) {
                sumPositive = sumPositive + number;
                positive = positive + 1;
            }
        }
        // check if there's at least one positive
        if (positive == 0) {
            System.out.println("Cannot calculate the average");
        } else {
            average = (double) sumPositive / positive;
            System.out.println(average);
        }
    }
}
