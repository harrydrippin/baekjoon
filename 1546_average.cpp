#include <cstdio>

using namespace std;

int main() {
    int n;
    float sum = 0.0f, m = -1.0f;
    scanf("%d", &n);

    int *score = new int[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
        if (m < score[i]) m = score[i];
    }

    for (int i = 0; i < n; i++) {
        sum += (score[i] / m) * 100;
    }

    printf("%0.2f", sum / n);

    return 0;
}
