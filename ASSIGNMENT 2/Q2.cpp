#include <iostream>
using namespace std;

int main() {
    float rated, measured;

    cout << "Enter rated current: ";
    cin >> rated;
    cout << "Enter measured current: ";
    cin >> measured;

    if (measured > rated)
        cout << "Overload detected. Circuit breaker should trip.";
    else
        cout << "Current is within safe limit.";

    return 0;
}
