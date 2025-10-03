#include <iostream>
#include <cmath>
using namespace std;
// factorial function
long long fac(long long n) // long long for large numbers
{
    if (n < 0) // for negative numbers
        return -1;
    if (n == 0 || n == 1)
        return 1;
    return n * fac(n - 1);
}
// prime function
void isprime(int n)
{
    if (n < 2)
    {
        cout << n << " is not prime" << endl;
        return;
    }
    for (int i = 2; i <= sqrt(n); i++) // sqrt(n) is more efficient than n/2 because a larger factor of the number must be a multiple of a smaller factor that has been already checked
    {
        if (n % i == 0)
        {
            cout << n << " is not prime" << endl;
            return;
        }
    }
    cout << n << " is prime" << endl;
}
// palindrome function
void ispallindrome(int n)
{
    int original = n, rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if (rev == original)
        cout << original << " is palindrome" << endl;
    else
        cout << original << " is not palindrome" << endl;
}
// Armstrong number check
void isArmstrong(int n)
{
    int digits = 0, temp = n;
    // count digits
    while (temp)
    {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;
    // compute sum of digits^digits
    while (temp) // while temp is not 0
    {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) // calculate digit^digits
            power *= digit;              // more efficient than pow function
        sum += power;
        temp /= 10;
    }
    if (sum == n)
        cout << n << " is an Armstrong number" << endl;
    else
        cout << n << " is not an Armstrong number" << endl;
}

int main()
{
    while (true)
    { // infinite loop
        cout << "\n--- Menu ---\n";
        cout << "1. Factorial\n";
        cout << "2. Prime Number Check\n";
        cout << "3. Armstrong Number Check\n";
        cout << "4. Palindrome Number Check\n";
        cout << "5. Exit\n";

        char choice;
        cout << "Choose option: ";
        cin >> choice;

        int num;
        switch (choice)
        {
        case '1':
            cout << "Enter a number: ";
            cin >> num;
            if (num < 0)
                cout << "Factorial not defined for negative numbers\n";
            else
                cout << "Factorial of " << num << " = " << fac(num) << endl;
            break;
        case '2':
            cout << "Enter a number: ";
            cin >> num;
            isprime(num);
            break;
        case '3':
            cout << "Enter a number: ";
            cin >> num;
            isArmstrong(num);
            break;
        case '4':
            cout << "Enter a number: ";
            cin >> num;
            ispallindrome(num);
            break;
        case '5':
            cout << "Exiting program...\n"; // exit the program
            return 0;
        default:
            cout << "Invalid option! Try again.\n"; // handle invalid input
        }
    }
}
