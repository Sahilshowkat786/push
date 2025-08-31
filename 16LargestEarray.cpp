#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements= ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
      cin >> arr[i];

    int  max = arr[0];// assume first element
    
    for(int i = 1; i < n; i++)
    
     if(arr[i] > max) 
     
     max = arr[i];
     
    cout << "Largest element = " << max << endl;
    
    return 0;
}