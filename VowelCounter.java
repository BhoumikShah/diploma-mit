import java.util.Scanner;

public class VowelCounter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input string from the user
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        // Count the number of vowels in the input string
        int vowelCount = countVowels(input);

        // Print the number of vowels
        System.out.println("Number of vowels in the string: " + vowelCount);

        scanner.close();
    }

    // Method to count the number of vowels in a string
    public static int countVowels(String str) {
        // Convert the string to lowercase to handle both uppercase and lowercase vowels
        str = str.toLowerCase();

        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                count++;
            }
        }
        return count;
    }
}
