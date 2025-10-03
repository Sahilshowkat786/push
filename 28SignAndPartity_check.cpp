#include<iostream>
#include<cmath> 
using namespace std;
int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    // for +ve no
    if(n>0){
        cout<<"the number is positive"<<endl;
    }
    else if(n<0){
        cout<<"the number is negative"<<endl;
    
    }
    else{
        cout<<"the number is zero"<<endl;
    }

    if(n%2==0){
        cout<<"the number is even"<<endl;
    }
    else{
        cout<<"the number is odd"<<endl;
    }

}