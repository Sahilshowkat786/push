#include<iostream>
using namespace std;    
int main()
{
    try
    {
        cout<<"Inside try block"<<endl;
        throw 10;
        cout<<"End of try block"<<endl;
    }
    catch(int i)
    {
        cout<<"Caught "<<i<<endl;
    }
    return 0;
}