#include <iostream>
using namespace std;

double calc_Gross_Pay(float basic, float da, float hra) {
    return basic + da / 100 * basic + hra;
}

double calc_Gross_Pay(float hours, float wage_hr) {
    return hours * wage_hr;
}

double calc_Gross_Pay(float pay) {
    return pay;
}

int main() {
    float basic, da, hra, hours, wage_hr, pay;

    // Input values
    cout << "Enter basic, DA, and HRA: ";
    cin >> basic >> da >> hra;

    cout << "Enter hours worked and wage per hour: ";
    cin >> hours >> wage_hr;

    cout << "Enter direct pay: ";
    cin >> pay;

    // Function calls
    cout << "Gross Pay (basic, da, hra): " << calc_Gross_Pay(basic, da, hra) << endl;
    cout << "Gross Pay (hours, wage_hr): " << calc_Gross_Pay(hours, wage_hr) << endl;
    cout << "Gross Pay (direct pay): " << calc_Gross_Pay(pay) << endl;

    return 0;
}