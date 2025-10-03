#include <iostream>
#include <cmath> // For pow() function
using namespace std;

int main()
{
    double a, b, c;

    // Input the sides
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;

    // Check if the triangle is valid using triangle inequality
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Triangle is valid.\n";

        // Check type based on sides
        if (a == b && b == c)
        {
            cout << "It is an Equilateral triangle.\n";
        }
        else if (a == b || b == c || a == c)
        {
            cout << "It is an Isosceles triangle.\n";
        }
        else
        {
            cout << "It is a Scalene triangle.\n";
        }

        // Check for right triangle using Pythagoras theorem
        // First, find the largest side
        double maxSide = max(a, max(b, c));
        double sumSquares = 0;

        if (maxSide == a)
            sumSquares = b * b + c * c;
        else if (maxSide == b)
            sumSquares = a * a + c * c;
        else
            sumSquares = a * a + b * b;

        if ((maxSide * maxSide == sumSquares))
            cout << "It is also a Right-angled triangle.\n";
    }
    else
    {
        cout << "Triangle is NOT valid.\n";
    }

    return 0;
}
