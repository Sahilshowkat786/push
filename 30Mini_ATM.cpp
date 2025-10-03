// mini ATM simulation
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int pin;
    float balance = 10000.00; // initial balance
    cout << "Enter you name  = ";
    getline(cin, name);
    cout << "Enter you 4 digit pin  = ";
    cin >> pin;
    if (pin < 1000 || pin > 9999)
    {
        cout << "Invalid pin! Exiting..." << endl;
        return 0;
    }
    while (true)
    { // infinite loop to simulate lock
        cout << "Menu options:" << endl;
        cout << "1.Check Balance" << endl;
        cout << "2.Cash withdrawal" << endl;
        cout << "3.Cash deposit " << endl;
        cout << "4.Exit" << endl;
        int option;
        cout << "Choose option = ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Your balance is = " << balance << endl;
            break;
        case 2:
            float withdraw;
            cout << "Enter amount to withdraw = ";
            cin >> withdraw;
            if (withdraw > balance)
            {
                cout << "Insufficient balance!" << endl;
            }
            else
            {
                balance -= withdraw;
                cout << "Please collect your cash" << endl;
                cout << "Your new balance is = " << balance << endl;
            }
            break;
        case 3:
            float deposit;
            cout << "Enter amount to deposit = ";
            cin >> deposit;
            balance += deposit;
            cout << "Your new balance is = " << balance << endl;
            break;
        case 4:
            cout << "Exiting..." << endl;
            return 0;
            break;
        default:
            cout << "Invalid option! Exiting..." << endl;
        }
    }
}
