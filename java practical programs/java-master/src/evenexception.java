import java.util.Scanner;

public class evenexception {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Define the correct password
        System.out.print("Enter an integer: ");
        int intValue = scanner.nextInt();
        scanner.nextLine();

        try {

            if (intValue%2!=0) {
                throw new AuthenticationFailureException("number "+intValue+
                    "not even");
            } else {
                System.out.println("number "+intValue +" is even");
            }
        } catch (AuthenticationFailureException e) {
            System.out.println(e.getMessage());
        } finally {
            scanner.close();
        }
    }
}

class failure extends Exception {
    public failure(String message) {
        super(message);
    }
}
