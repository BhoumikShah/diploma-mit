import useful.useme;

public class comain {
    public static void main(String[] args) {
        useme utility = new useme();

        // Calculate area
        double length = 5;
        double width = 3;
        double area = utility.area(length, width);
        System.out.println("Area of rectangle: " + area);

        // Calculate salary
        double basicSalary = 50000;
        double allowance = 10000;
        double totalSalary = utility.salary(basicSalary, allowance);
        System.out.println("Total salary: " + totalSalary);

        // Calculate percentage
        double part = 75;
        double whole = 100;
        double percentage = utility.percentage(part, whole);
        System.out.println("Percentage: " + percentage + "%");
    }
}
