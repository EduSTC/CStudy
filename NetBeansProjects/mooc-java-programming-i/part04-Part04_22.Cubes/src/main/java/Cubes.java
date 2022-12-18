
import java.util.Scanner;

public class Cubes {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        while (true) {
            String number = String.valueOf(scanner.nextLine());
            if (number.equals("end")) {
                break;
            }
            
            int value = Integer.valueOf(number);
            int cube = value * value * value;
            System.out.println(cube);
        }
        

    }
}
