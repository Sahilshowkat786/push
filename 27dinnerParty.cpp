#include <iostream>
using namespace std;

int main() {
    int guests, chairs;
    cout << "Enter number of guests: ";
    cin >> guests;
    cout << "Enter number of chairs: ";
    cin >> chairs;

    long long arrangements = 1;
    for (int i = 0; i < chairs; i++) {
        arrangements *= (guests - i);
    }

    cout << "Number of possible arrangements = " << arrangements << endl;
    return 0;
}
