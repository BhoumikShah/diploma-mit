import java.util.Scanner;

public class ReversedString {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input string from the user
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();

        // Reverse the string
        String reversed = reverse(input);

        // Print the reversed string
        System.out.println("Reversed string: " + reversed);

        scanner.close();
    }

    // Method to reverse a string
    public static String reverse(String str) {
        // Convert the string to a character array
        char[] charArray = str.toCharArray();

        // Reverse the character array
        int left = 0;
        int right = charArray.length - 1;
        while (left < right) {
            char temp = charArray[left];
            charArray[left] = charArray[right];
            charArray[right] = temp;
            left++;
            right--;
        }

        // Convert the character array back to a string
        return new String(charArray);
    }
}
