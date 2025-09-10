#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string Ename;
    int Emp_id;

public:
    Employee() {
        Ename = "Unknown";
        Emp_id = 0;
    }

    Employee(string name, int id) {
        Ename = name;
        Emp_id = id;
    }

    void display() {
        cout << "Employee Name: " << Ename << endl;
        cout << "Employee ID: " << Emp_id << endl;
    }

    virtual double earnings() = 0; 
};

class SalariedEmployee : public Employee {
protected:
    double weekly_salary;

public:
    SalariedEmployee() : Employee() {
        weekly_salary = 0.0;
    }

    SalariedEmployee(string name, int id, double salary) : Employee(name, id) {
        weekly_salary = salary;
    }

    double earnings() {
        return weekly_salary;
    }
};

class HourlyEmployee : public Employee {
protected:
    double wage, hours;

public:
    HourlyEmployee() : Employee() {
        wage = 0.0;
        hours = 0.0;
    }

    HourlyEmployee(string name, int id, double w, double h) : Employee(name, id) {
        wage = w;
        hours = h;
    }

    double earnings() {
        if (hours <= 40)
            return wage * hours;
        else
            return (40 * wage) + ((hours - 40) * wage * 1.5);
    }
};

class CommissionEmployee : public Employee {
protected:
    double gross_sales, commission_rate;

public:
    CommissionEmployee() : Employee() {
        gross_sales = 0.0;
        commission_rate = 0.0;
    }

    CommissionEmployee(string name, int id, double sales, double rate) : Employee(name, id) {
        gross_sales = sales;
        commission_rate = rate;
    }

    double earnings() {
        return gross_sales * commission_rate;
    }
};

int main() {
    SalariedEmployee s("John", 101, 5000);
    HourlyEmployee h("Alice", 102, 100, 45);
    CommissionEmployee c("Bob", 103, 20000, 0.10);

    s.display();
    cout << "Earnings: " << s.earnings() << endl << endl;

    h.display();
    cout << "Earnings: " << h.earnings() << endl << endl;

    c.display();
    cout << "Earnings: " << c.earnings() << endl << endl;

    return 0;
}