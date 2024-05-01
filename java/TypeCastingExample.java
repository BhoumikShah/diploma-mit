public class TypeCastingExample {
    public static void main(String[] args) {
        // Implicit type casting (Widening Conversion)
        int numInt = 10;
        double numDouble = numInt; // Implicit casting from int to double

        // Explicit type casting (Narrowing Conversion)
        double numDouble2 = 10.5;
        int numInt2 = (int) numDouble2; // Explicit casting from double to int

        // Printing values
        System.out.println("Implicit type casting:");
        System.out.println("int value: " + numInt);
        System.out.println("double value after implicit casting: " + numDouble);

        System.out.println("\nExplicit type casting:");
        System.out.println("double value: " + numDouble2);
        System.out.println("int value after explicit casting: " + numInt2);
    }
}
