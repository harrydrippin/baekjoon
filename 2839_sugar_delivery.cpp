#include <iostream>

using namespace std;

int main() {
    int kg, bag = 0;
    cin >> kg;

    while (kg % 5 != 0) {
        if (kg < 3) {
            cout << -1;
            return 0;
        }
         
        kg -= 3;
        bag++;        
    }

    cout << bag + (kg / 5);

    return 0;
}
