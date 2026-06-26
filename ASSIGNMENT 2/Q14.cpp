#include <iostream>
using namespace std;

int main() {
    float temp, total = 0;
    int count = 0;

    for(int i = 1; i <= 10; i++) {
        cout << "Enter temperature: ";
        cin >> temp;

        if(temp < 0)
            continue;

        total += temp;
        count++;
    }

    if(count > 0)
        cout << "Average temperature = " << total / count << " C";
    else
        cout << "No valid readings";

    return 0;
}
