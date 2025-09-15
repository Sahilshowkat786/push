#include <iostream>
using namespace std;

int main()
{
    int n, id, hours;
    float wage, gross, net, tax, total = 0, average;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Employee ID: ";
        cin >> id;

        cout << "Enter hourly wage: ";
        cin >> wage;

        cout << "Enter hours worked: ";
        cin >> hours;

        // Gross Salary Calculation
        if (hours <= 40)
            gross = wage * hours;
        else
            gross = (40 * wage) + ((hours - 40) * (1.5 * wage));

        // Tax Deduction (3.625%)
        tax = gross * 0.03625f;
        net = gross - tax;

        // Display Employee Net Pay
        cout << "Employee ID: " << id << " | Net Pay: " << net << endl;

        // Add to total payroll
        total += net;
    }

    // Calculate average pay
    average = total / n;

    cout << "\nTotal Payroll: " << total;
    cout << "\nAverage Pay: " << average << endl;

    return 0;
}
