
import java.util.Scanner;

public class SquareRootOfSum {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Give first number:");
        int first = Integer.valueOf(scanner.nextLine());
        System.out.println("Give second number:");
        int second = Integer.valueOf(scanner.nextLine());
        double squareRoot = Math.sqrt(1.0 * first + second);
        System.out.println(squareRoot);
    }
}
