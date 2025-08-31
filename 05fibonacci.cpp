// 1 1 2 3 5 8 13 21 34 ...
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms = ";
    cin >> n;
    int t1 = 1, t2 = 1, nextTerm;
    cout << "Fibonacci Series: " << t1 << ", " << t2;

    for (int i = 3; i <= n; i++)
    {
        nextTerm = t1 + t2;
        cout << ", " << nextTerm;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}