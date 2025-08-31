#include<iostream>
using namespace std;
int main(){
    int income;
    cout<<"Enter your income = ";
    cin>>income;
    if(income<=250000){
        cout<<"no tax" <<endl;

    }
    else if(income>250001 && income <=500000){
        cout<<"5% tax = "<<(income*5)/100 <<endl;
    }
    else if(income>500001 && income <=1000000){
        cout<<"20% tax = "<<(income*20)/100 <<endl;
    }
    else{
        cout<<"30% tax = "<<(income*30)/100 <<endl;
    }
}