import java.util.Scanner;

public class AuthenticationExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Define the correct password
        System.out.print("Enter the correct password: ");
        String correctPassword = scanner.nextLine();

        try {
            System.out.print("Enter password: ");
            String enteredPassword = scanner.nextLine();

            if (!enteredPassword.equals(correctPassword)) {
                throw new AuthenticationFailureException("Authentication Failure!");
            } else {
                System.out.println("Authentication successful!");
            }
        } catch (AuthenticationFailureException e) {
            System.out.println(e.getMessage());
        } finally {
            scanner.close();
        }
    }
}

class AuthenticationFailureException extends Exception {
    public AuthenticationFailureException(String message) {
        super(message);
    }
}
