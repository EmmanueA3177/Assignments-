#include <iostream>
using namespace std;

int main() {
    float power, total = 0;

    while(total <= 3000) {
        cout << "Enter appliance power: ";
        cin >> power;
        total += power;
    }

    cout << "Load limit exceeded. Total load = " << total << " W";

    return 0;
}
