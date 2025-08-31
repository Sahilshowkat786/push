#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number = ";
    cin >> n;
    int limt = (int)sqrt(n);// to reduce the number of iterations

    cout << " pairs such that x^2 + y^2 = "<< n<<endl;
    // x and y can be negative but their squares will be positive so we will only consider positive values
    // also we will consider 0 as well
    for (int i = 0; i <= limt; i++)
    {
        for (int j = 0; j <= limt; j++)
        {
            int sum = (i * i + j * j);
            if (sum == n)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
            else if (sum > n){
                break;
            }
        }
    }
}
