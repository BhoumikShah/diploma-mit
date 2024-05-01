public class ArrayIndexOutOfBoundsExample {
    public static void main(String[] args) {
        int[] numbers = {1, 2, 3, 4, 5};

        try {
            for (int i = 0; i <= numbers.length; i++) {
                System.out.println("Element at index " + i + ": " + numbers[i]);
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: Array index out of bounds occurred.");
        } finally {
            System.out.println("Program execution completed.");
        }
    }
}
