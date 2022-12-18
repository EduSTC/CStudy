
import java.util.Scanner;

public class FromWhereToWhere {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Write your program here
        // ask user finishing point
        System.out.println("Where to?");
        int finish = Integer.valueOf(scanner.nextLine());
        // ask user starting point
        System.out.println("Where from?");
        int start = Integer.valueOf(scanner.nextLine());
        // loop to print the numbers
        for (int i = start;i <= finish; i++) {
            System.out.println(i);
        }
    }
}
