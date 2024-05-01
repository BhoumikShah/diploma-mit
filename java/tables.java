public class tables {
    public static void main(String[] args) {
        int tableSize = 10;

        System.out.println("Table of 4\t\tTable of 6");
        for (int i = 1; i <= tableSize; i++) {
            System.out.println((4 + " x " + i + " = " + (4 * i)) + "\t\t" + (6 + " x " + i + " = " + (6 * i)));
        }
    }
}
