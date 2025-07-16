#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentname;
    int rollno;
    string division;
    string classes;
    string dateofbirth;
    string aadharnumber;
    string bloodgroup;
    string address;
    string contact;

    static int totalStudents;

public:
    // Constructor
    Student(string name, int roll, string d, string c, string dob, string ano, string bg, string add, string con) {
        studentname = name;
        rollno = roll;
        division = d;
        classes = c;
        dateofbirth = dob;
        aadharnumber = ano;
        bloodgroup = bg;
        address = add;
        contact = con;
        totalStudents++;
    }

    void display() {
        cout << "Name: " << studentname << endl;
        cout << "Roll No.: " << rollno << endl;
        cout << "Division: " << division << endl;
        cout << "Class: " << classes << endl;
        cout << "Aadhar Number: " << aadharnumber << endl;
        cout << "Blood Group: " << bloodgroup << endl;
        cout << "Address: " << address << endl;
        cout << "Contact Number: " << contact << endl;
        cout << "\n";
    }

    static void displayTotalStudents() {
        cout << "Total number of students: " << totalStudents << endl;
    }
};

int Student::totalStudents = 0;

int main() {
    Student s1("Rahul", 101, "A", "12th", "2005-06-15", "1234-5678-9012", "B+", "123 Street, City", "12349");
    s1.display();

    Student s2("Bhoumik", 102, "A", "2nd", "2005-07-17", "9876-5432-2109", "O+", "Skellige", "81387");
    s2.display();

    Student::displayTotalStudents();

    return 0;
}