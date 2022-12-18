
import java.util.Scanner;

public class RepeatingBreakingAndRemembering {

    public static void main(String[] args) {
        
        // This exercise is worth five exercise points, and it is 
        // gradually extended part by part.
        
        // If you want, you can send this exercise to the server
        // when it's just partially done. In that case the server will complain about 
        // the parts you haven't done, but you'll get points for the finished parts.
        
        Scanner scanner = new Scanner(System.in);
        // variables
        int sum = 0;
        int n = 0;
        double average = 0;
        int even = 0;
        int odd = 0;
        
        
        while (true) {
            // input
            System.out.println("Give numbers:");
            int number = Integer.valueOf(scanner.nextLine());
            
            // break
            if (number == -1) {
                break;
            }
            
            if (number % 2 == 0) {
                even += 1;
            } else {
                odd += 1; 
            }
            
            
            
            // valid input
            sum += number;
            n += 1;
                    
                    
                    
        } 
        average = (double) sum / n;
        System.out.println("Thx! Bye!");
        System.out.println("Sum: " + sum);
        System.out.println("Numbers: " + n);
        System.out.println("Average: " + average);
        System.out.println("Even: " + even);
        System.out.println("Odd: " + odd);
        

    }
}
