#include<iostream>
using namespace std;
int main(){
    int monthNo,year;
    cout<<"Enter month number = ";
    cin>>monthNo;
    cout<<"Enter year = ";
    cin>>year;  
    switch(monthNo){
        case 1:
            cout<<"31 days in january"<<endl;
            break;
        case 2:
            if((year%4==0 && year%100!=0) || (year%400==0)){
                cout<<"29 days in february"<<endl;
            }
            else{
                cout<<"28 days in february"<<endl;
            }
            break;
        case 3:
            cout<<"31 days in march"<<endl;
            break;
        case 4:
            cout<<"30 days in april"<<endl;
            break;
        case 5:
            cout<<"31 days in may"<<endl;
            break;
        case 6:
            cout<<"30 days in june"<<endl;
            break;
        case 7:
            cout<<"31 days in july"<<endl;
            break;
        case 8:
            cout<<"31 days in august"<<endl;
            break;
        case 9:
            cout<<"30 days in september"<<endl;
            break;
        case 10:
            cout<<"31 days in october"<<endl;
            break;
        case 11:
            cout<<"30 days in november"<<endl;
            break;
        case 12:
            cout<<"31 days in december"<<endl;
            break;        
        default:
            cout<<"invalid month number"<<endl;
    }
}