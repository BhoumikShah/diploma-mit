class Shape {
    void draw() {
        System.out.println("Drawing a shape...");
    }
}

class Circle extends Shape {
    void drawCircle() {
        System.out.println("Drawing a circle...");
    }
}

class Rectangle extends Shape {
    void drawRectangle() {
        System.out.println("Drawing a rectangle...");
    }
}

public class multilevel {
    public static void main(String[] args) {
        Circle circle = new Circle();
        Rectangle rectangle = new Rectangle();

        circle.draw();
        circle.drawCircle();

        rectangle.draw();
        rectangle.drawRectangle();
    }
}
