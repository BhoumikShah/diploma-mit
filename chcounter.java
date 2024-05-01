import java.util.Scanner;

public class chcounter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input string from the user
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        // Count the number of characters in the input string
        int charCount = countCharacters(input);

        // Print the number of characters
        System.out.println("Number of characters in the string: " + charCount);

        scanner.close();
    }

    // Method to count the number of characters in a string
    public static int countCharacters(String str) {
        // Use the length() method of the String class to get the number of characters
        return str.length();
    }
}
