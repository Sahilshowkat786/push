#include <iostream>
using namespace std;
int main()
{
    int arr[100], avg = 0;
    int n;
    cout << "enter no of elements = ";
    cin >> n;
    cout << "Enter " << n << " elements  = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        avg = avg + arr[i];
    }
    int smallest = arr[0];
    int largest = arr[0];
    avg = avg / n;

    for (int i = 0; i < n; i++)
    {
        if (smallest >= arr[i])
        {
            smallest = arr[i];
        }
        if (largest <= arr[i])
        {
            largest = arr[i];
        }
    }
    cout << "Largest = " << largest << endl
         << "smallest = " << smallest << endl;
    cout << "avg = " << avg;
}