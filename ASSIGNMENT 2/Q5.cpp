#include <iostream>
using namespace std;

int main() {
    int choice;
    float V, I, P, R, T;

    cout << "1. Calculate Power\n2. Calculate Resistance\n3. Calculate Energy\n";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter Voltage and Current: ";
            cin >> V >> I;
            P = V * I;
            cout << "Power = " << P << " W";
            break;

        case 2:
            cout << "Enter Voltage and Current: ";
            cin >> V >> I;
            R = V / I;
            cout << "Resistance = " << R << " Ohms";
            break;

        case 3:
            cout << "Enter Power and Time: ";
            cin >> P >> T;
            cout << "Energy = " << P * T << " J";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
