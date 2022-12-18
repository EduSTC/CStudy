
import java.util.Scanner;

public class AbsoluteValue {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int value = Integer.valueOf(scanner.nextLine());
        int negative = value * -1;
        if (value < 0) { 
            System.out.println(negative);
        } else {
            System.out.println(value);
        }
    }
}
