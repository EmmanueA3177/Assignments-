#include <iostream>
using namespace std;

int main() {
    float current;

    cout << "Enter current: ";
    cin >> current;

    while(current <= 10) {
        cout << "Safe current: " << current << " A" << endl;
        cout << "Enter current: ";
        cin >> current;
    }

    cout << "Overcurrent detected. Monitoring stopped.";
    return 0;
}
