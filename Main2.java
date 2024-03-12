class Person {
    private String name;
    private int age;

    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

class Employee extends Person {
    private String designation;
    private double salary;

    public void setEmployeeDetails(String name, int age, String designation, double salary) {
        setName(name);  // Set name using setter method of the superclass
        setAge(age);    // Set age using setter method of the superclass
        this.designation = designation;
        this.salary = salary;
    }

    public void displayEmployee() {
        display();  // Display name and age using display method of the superclass
        System.out.println("Designation: " + designation);
        System.out.println("Salary: " + salary);
    }
}

public class Main2 {
    public static void main(String[] args) {
        Employee emp = new Employee();
        emp.setEmployeeDetails("John Doe", 30, "Software Engineer", 50000.0);
        emp.displayEmployee();
    }
}
