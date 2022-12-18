
import java.util.Scanner;

public class NumberOfNegativeNumbers {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Counter of negative numbers
        int negative = 0;
      
        while (true) {
            // Ask numbers from the user
            System.out.println("Give a number:");
            int number = Integer.valueOf(scanner.nextLine());
            
            // Check if the numbers are negative
            if (number < 0) {
                // sum 1 to the counter
                negative = negative + 1;
            }
            
            // Check if the user wants to stop
            if (number == 0) {
                break;
            }
        }
        // output the number of negative numbers
        System.out.println("Number of negative numbers: " + negative);
        
        
        
    }
}
