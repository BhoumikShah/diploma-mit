public class cube {
    double length;
    double breadth;
    double height;

    // Constructor with all parameters
    public cube(double length, double breadth, double height) {
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    // Constructor with same dimensions (for a cube)
    public cube(double side) {
        this.length = side;
        this.breadth = side;
        this.height = side;
    }

    // Default constructor
    public cube() {
        this.length = 1; // Default length
        this.breadth = 1; // Default breadth
        this.height = 1; // Default height
    }

    // Method to calculate and return volume
    public double getVolume() {
        return length * breadth * height;
    }

    public static void main(String[] args) {
        // Initialize cubes using different constructors
        cube cube1 = new cube(3, 4, 5); // Cube with specified dimensions
        cube cube2 = new cube(2.5); // Cube with same side length
        cube cube3 = new cube(); // Cube with default dimensions

        // Display volume of each cube
        System.out.println("Volume of Cube 1: " + cube1.getVolume());
        System.out.println("Volume of Cube 2: " + cube2.getVolume());
        System.out.println("Volume of Cube 3: " + cube3.getVolume());
    }
}
