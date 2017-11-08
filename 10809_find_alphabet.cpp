#include <iostream>
#include <string>

using namespace std;

int main() {
    int dic[26];
    fill_n(dic, 26, -1);
    string a;
    cin >> a;

    for (int i = 0; i < a.length(); i++) {
        int cur = (a.at(i) - 97);
        if (dic[cur] == -1) dic[cur] = i;
    }

    for (int i = 0; i < 26; i++) {
        cout << dic[i] << " ";
    }
    
    return 0;
}
