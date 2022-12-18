
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Scanner;

public class SportStatistics {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int games = 0;
        int wins = 0;
        int losses = 0;
        
        System.out.println("File:");
        String file = String.valueOf(scan.nextLine());
        System.out.println("Team:");
        String team = String.valueOf(scan.nextLine());
        
        
        try (Scanner fileName = new Scanner(Paths.get(file))) {
            while (fileName.hasNextLine()) {
                String line = fileName.nextLine();
                
                String[] parts = line.split(",");
                
                if (parts[0].equals(team) || parts[1].equals(team)) {
                    games += 1;
                    if (parts[0].equals(team) && Integer.valueOf(parts[2]) > Integer.valueOf(parts[3])) {
                        wins += 1;
                    } else if (parts[1].equals(team) && Integer.valueOf(parts[2]) < Integer.valueOf(parts[3])){
                        wins += 1;
                        
                    } else {
                        losses += 1;
                    }
                }
                

            }
            
        } catch (Exception e) {
            System.out.println("Error: " + e);
        }
        
        System.out.println("Games: " + games);
        System.out.println("Wins: " + wins);
        System.out.println("Losses: " + losses);

    }

}
