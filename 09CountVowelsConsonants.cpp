#include <iostream>
using namespace std;
int main()
{
    string str;
    int vowels = 0, consonants = 0;
    cout << "Enter a string = ";
    getline(cin, str); // takes full line input including spaces

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            ch = tolower(ch); // convert uppercase to lowercase i.e A to a
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants;
    return 0;
}