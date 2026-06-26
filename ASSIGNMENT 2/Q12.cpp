#include <iostream>
using namespace std;

int main() {
    int choice;
    float V, I, P, R, T;

    do {
        cout << "\n1. Power\n2. Resistance\n3. Energy\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Voltage and Current: ";
                cin >> V >> I;
                cout << "Power = " << V * I << " W";
                break;

            case 2:
                cout << "Enter Voltage and Current: ";
                cin >> V >> I;
                cout << "Resistance = " << V / I << " Ohms";
                break;

            case 3:
                cout << "Enter Power and Time: ";
                cin >> P >> T;
                cout << "Energy = " << P * T << " J";
                break;

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 4);

    return 0;
}
