#include <iostream>
using namespace std;

int main() {
    float R, total = 0;

    for(int i = 1; i <= 5; i++) {
        cout << "Enter resistor " << i << ": ";
        cin >> R;
        total += R;
    }

    cout << "Total Resistance = " << total << " Ohms";
    return 0;
}
