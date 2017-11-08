#include <iostream>

using namespace std;

int main() {
    int x, y, sum = 0;
    cin >> x >> y;

    for (int i = 1; i <= x - 1; i++) {
        switch(i) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                sum += 31;
                break;
            case 2:
                sum += 28;
                break;
            default:
                sum += 30;
        }
    }

    sum += y;

    switch (sum % 7) {
        case 0: cout << "SUN"; break;
        case 1: cout << "MON"; break;
        case 2: cout << "TUE"; break;
        case 3: cout << "WED"; break;
        case 4: cout << "THU"; break;
        case 5: cout << "FRI"; break;
        case 6: cout << "SAT"; break;
        
    }

    return 0;
}
