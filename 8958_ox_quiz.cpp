#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++) {
        cin >> a;
        int streak = 0, score = 0;
        for (int j = 0; j < a.length(); j++) {
            bool answer = (a.at(j) == 'O');
            if (answer) score += ++streak;
            else streak = 0;
        }
        cout << score << "\n";
    }

    return 0;
}
