
import java.util.Scanner;

public class SumOfASequenceTheSequel {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // creating the sum variable
        int sum = 0;
        // input the start value
        System.out.println("First number?");
        int first = Integer.valueOf(scanner.nextLine());
        // input the finish value
        System.out.println("Last number?");
        int last = Integer.valueOf(scanner.nextLine());
        // loop for the sum
        for (int i = first;i <= last; i++) {
            sum = sum + i;
        }
        // printing the result
        System.out.println("The sum is: " + sum);
        
        
        

    }
}
