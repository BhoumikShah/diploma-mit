/*import java.util.Scanner;

public class employee {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        
        System.out.println("Name of employee?");
        
        String name=scan.nextLine();
        System.out.println("Employeeid");
        int value=Integer.valueOf(scan.nextLine());
        System.out.println("Salary?");
        int salary=Integer.valueOf(scan.nextLine());
        double net;
        net=salary-((salary)*0.10);
        System.out.println("Net salary is "+net);


}
}*/
import java.util.Scanner;

public class employee {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        System.out.println("Name of employee?");
        String name = scan.nextLine();
        
        System.out.println("Employee ID?");
        int id = Integer.valueOf(scan.nextLine());
        
        System.out.println("Salary?");
        int salary = Integer.valueOf(scan.nextLine());
        
        double net = salary - (salary * 0.10);
        System.out.println("Net salary is " + net);

        scan.close();
    }
}


