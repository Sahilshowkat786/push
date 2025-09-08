#include <iostream>
#include <cmath>// for sqrt function
// pre processor directive
using namespace std; // using directed

int main() // command line arguments
{
    double  n, m;
    double  p, q;

    cout << "enter real part of a complex no.1 number = ";
    cin >> n;
    cout << "enter imaginary part of a comlex no.1 number ";
    cin >> p;
    cout << "enter real part of a complex no.2 number = ";
    cin >> m;
    cout << "enter imaginary part of a comlex no.2 number ";
    cin >> q;

    int mag1 = sqrt(n * n + p * p);
    int mag2 = sqrt(m * m + q * q);

    if (mag1 == mag2)
    {
        cout << " mag is same ";
    }
    else
    {
        cout << " mag is not same ";
    }
    return 0;
}
