import java.util.Scanner;

public class DivisionByZeroExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter numerator: ");
        int numerator = scanner.nextInt();
        System.out.print("Enter denominator: ");
        int denominator = scanner.nextInt();

        try {
            int result = divide(numerator, denominator);
            System.out.println("Result of division: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: Division by zero occurred.");
        } finally {
            scanner.close();
        }
    }

    public static int divide(int numerator, int denominator) {
        return numerator / denominator;
    }
}
