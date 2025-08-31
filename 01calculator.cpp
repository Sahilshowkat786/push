#include <iostream>
using namespace std;
int main()
{
    double n1, n2;
    char op; // operator
    cout << "enter first  numbers = ";
    cin >> n1;
    cout << "enter operator you want ('+','-','*','/')= ";
    cin >> op;
    cout << "enter 2nd numbers = ";
    cin >> n2;
    switch (op)
    {
    case '+':
        cout << "the sum of two  = " << n1 + n2;
        break;
    case '-':
        cout << "the sub  of two = " << n1 - n2;
        break;
    case '*':
        cout << "the multiplicaton of two = " << n1 * n2;
        break;
    case '/':
        cout << "the division  of two  = " << n1 / n2;
        break;
    default:
        cout << "enter a valid operator";
    }
}