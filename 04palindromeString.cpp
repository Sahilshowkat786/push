#include <iostream>
#include <cstring> // for strlen
using namespace std;
int main()
{
    char str[100];
    cout << "enter a string = ";
    cin >> str;
    int x = strlen(str);
    bool ispalindrome = true;

    int i = 0;
    while (i < x / 2)
    {
        if (str[i] != str[x - 1])
            ispalindrome = false;
        break;
        i++;
        x--;
    }
    if (ispalindrome)
        cout << " pallindrome ";
    else
        cout << " not pallindrome ";
    return 0;
}
