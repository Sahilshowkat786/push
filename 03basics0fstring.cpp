#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "sahil";
    int x = str.length();
    cout << endl
         << "the length of string is " << x << endl;
    reverse(str.begin(), str.end());
    cout << "reverse string is " << str;
}