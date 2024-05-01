import java.util.Scanner;

public class Mobile {
    String companyName;
    double screenSize;

    // Constructor to initialize data members
    public Mobile(String companyName, double screenSize) {
        this.companyName = companyName;
        this.screenSize = screenSize;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Mobile[] mobiles = new Mobile[5]; // Array to store five mobile objects

        // Input data for five mobiles
        for (int i = 0; i < 5; i++) {
            System.out.println("Enter details for Mobile " + (i+1) + ":");
            System.out.print("Company Name: ");
            String companyName = scanner.nextLine();
            System.out.print("Screen Size (in inches): ");
            double screenSize = scanner.nextDouble();
            scanner.nextLine(); // Consume newline character

            // Create a Mobile object and store it in the array
            mobiles[i] = new Mobile(companyName, screenSize);
        }

        // Display data for five mobiles
        System.out.println("\nMobile Details:");
        for (int i = 0; i < 5; i++) {
            System.out.println("Mobile " + (i+1) + ":");
            System.out.println("Company Name: " + mobiles[i].companyName);
            System.out.println("Screen Size: " + mobiles[i].screenSize + " inches");
            System.out.println();
        }

        scanner.close();
    }
}
