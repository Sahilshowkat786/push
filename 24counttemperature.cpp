#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int hotDays = 0, pleasantDays = 0, coldDays = 0;
    int sum = 0;

    cout << "Enter " << n << " temperatures:\n";

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        sum += t;

        cout << "Day " << (i+1) << " (" << t << "): ";

        if (t >= 85) {
            cout << "Hot Day\n";
            hotDays++;
        } else if (t >= 60 && t <= 84) {
            cout << "Pleasant Day\n";
            pleasantDays++;
        } else {
            cout << "Cold Day\n";
            coldDays++;
        }
    }

    double average =(sum) / n;

    cout << "\nSummary:\n";
    cout << "Hot Days      = " << hotDays << endl;
    cout << "Pleasant Days = " << pleasantDays << endl;
    cout << "Cold Days     = " << coldDays << endl;
    cout << "Average Temp  = " << average << endl;

    return 0;
}

