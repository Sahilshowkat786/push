#include<iostream>
using namespace  std;
int main(){
    int temp;
    int hcount = 0,pcount = 0, Ccount = 0;
    for( ; ;){
    cout<<"Enter temperature : ";
    cin>>temp;


    if(temp>=85)
    {
      
        hcount++; 
        }
     else if(temp >= 60 && temp <=84){
       
        pcount++;
     }
     else if  (temp<60){
     
      Ccount++;
     
    
     cout<<" hot days = "<<hcount<<endl<<"pleasent days = "<<pcount<<endl;
     cout<<"cold days = "<<Ccount;
    cout<<endl;

    }
}
    }

