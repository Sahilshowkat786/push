#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array = "; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    int targetsum ;
    cout<<"Enter the target sum = ";    
    cin>>targetsum;

    // start concept

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){ // i+1 not repeat
            if(arr[i]+arr[j]==targetsum){
                cout<<"["<<arr[i]<<","<<arr[j]<<"]"<<endl;
            }
        }
    }
}