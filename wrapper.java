public class wrapper {
    public static void main(String[] args) {
        // Convert primitive to object
        int primitiveInt = 10;
        Integer objectInt = Integer.valueOf(primitiveInt);
        System.out.println("Primitive int: " + primitiveInt);
        System.out.println("Object int: " + objectInt);

        // Convert object to primitive
        Double objectDouble = new Double(3.14);
        double primitiveDouble = objectDouble.doubleValue();
        System.out.println("Object double: " + objectDouble);
        System.out.println("Primitive double: " + primitiveDouble);
    }
}
