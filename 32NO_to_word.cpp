#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (0-99): ";
    cin >> num;

    if(num < 0 || num > 99) {
        cout << "Number out of range!" << endl;
        return 0;
    }

    int tens = num / 10;
    int ones = num % 10;

    if(num < 10) {
        // Single-digit numbers
        switch(ones)
         {
            case 0: cout << "Zero"; break;
            case 1: cout << "One"; break;
            case 2: cout << "Two"; break;
            case 3: cout << "Three"; break;
            case 4: cout << "Four"; break;
            case 5: cout << "Five"; break;
            case 6: cout << "Six"; break;
            case 7: cout << "Seven"; break;
            case 8: cout << "Eight"; break;
            case 9: cout << "Nine"; break;
        }
                }

     else if(tens == 1) {
        // Numbers from 10 to 19
        switch(ones)
         {
            case 0: cout << "Ten"; break;
            case 1: cout << "Eleven"; break;
            case 2: cout << "Twelve"; break;
            case 3: cout << "Thirteen"; break;
            case 4: cout << "Fourteen"; break;
            case 5: cout << "Fifteen"; break;
            case 6: cout << "Sixteen"; break;
            case 7: cout << "Seventeen"; break;
            case 8: cout << "Eighteen"; break;
            case 9: cout << "Nineteen"; break;
        }
                      }
     else {
        // Numbers from 20 to 99
        switch(tens) {
            case 2: cout << "Twenty"; break;
            case 3: cout << "Thirty"; break;
            case 4: cout << "Forty"; break;
            case 5: cout << "Fifty"; break;
            case 6: cout << "Sixty"; break;
            case 7: cout << "Seventy"; break;
            case 8: cout << "Eighty"; break;
            case 9: cout << "Ninety"; break;
        }

        if(ones != 0) {
            switch(ones) {
                case 1: cout << "-one"; break;
                case 2: cout << "-two"; break;
                case 3: cout << "-three"; break;
                case 4: cout << "-four"; break;
                case 5: cout << "-five"; break;
                case 6: cout << "-six"; break;
                case 7: cout << "-seven"; break;
                case 8: cout << "-eight"; break;
                case 9: cout << "-nine"; break;
            }
        }
    }

    cout << endl;
    return 0;}
