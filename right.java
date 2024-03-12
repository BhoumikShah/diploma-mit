

// Java Program to print
// Right Pascal’s Triangle
import java.util.Scanner;
 
// Java code for printing pattern
public class right {
 
    // Function to demonstrate pattern
    public static void printPattern(int n)
    {
        int i, j;
        int num = 1;
 
        // outer loop to handle upper part
        for (i = 1; i <= n; i++) {
            // inner loop to print stars
            for (j = 1; j <= i; j++) {
                System.out.print("* ");
            }
 
            System.out.println();
        }
 
        // outer loop to handle lower part
        for (i = n-1; i >= 1; i--) {
            // inner loop to print stars
            for (j = 1; j <= i; j++) {
                System.out.print("* ");
            }

            System.out.println();
        }
    }

    // Driver Function
    public static void main(String args[])
    {
        int n = 4;
        printPattern(n);
    }
}