#include <iostream>
using namespace std;

int main() {
    float voltage;

    cout << "Enter battery voltage: ";
    cin >> voltage;

    while(voltage >= 12) {
        cout << "Enter battery voltage: ";
        cin >> voltage;
    }

    cout << "Battery voltage low. Recharge required.";
    return 0;
}
