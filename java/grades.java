import java.util.Scanner;

public class grades {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Give points [0-100]:");
            int points = Integer.valueOf(scanner.nextLine());

            if (points < 0) {
                System.out.println("grade: impossible!");
            } else if (points < 50) {
                System.out.println("grade: failed");
            } else if (points <= 59) {
                System.out.println("grade: 1");
            } else if (points <= 69) {
                System.out.println("grade: 2");
            } else if (points <= 79) {
                System.out.println("grade: 3");
            } else if (points <= 89) {
                System.out.println("grade: 4");
            } else if (points <= 100) {
                System.out.println("grade: 5");
            } else if (points > 100) {
                System.out.println("grade: incredible!");
            }                                   
        } catch (NumberFormatException e) {
            e.printStackTrace();
        }
    }
}
