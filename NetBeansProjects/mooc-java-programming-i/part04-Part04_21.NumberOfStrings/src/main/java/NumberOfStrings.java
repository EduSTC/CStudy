
import java.util.Scanner;

public class NumberOfStrings {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int stringCount = 0;
        while (true) {
            String text = String.valueOf(scanner.nextLine());
            if (text.equals("end")) {
                break;
            }
            stringCount += 1;
            
            
        }
        System.out.println(stringCount);

    }
}
