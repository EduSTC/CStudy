
import java.util.Scanner;

public class SumOfASequence {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // sum of the numbers
        int sum = 0;
        // input the finishing counter
        System.out.println("Last number?");
        int number = Integer.valueOf(scanner.nextLine());
        // loop for getting the sum
        for (int i = 1; i <= number; i++) {
            sum = sum + i;
        }
        // priting the sum value
        System.out.println("The sum is " + sum);
    }
}
