#include <cstdio>

using namespace std;

int main() {
    int tc, n;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++) {
        scanf("%d", &n);
        int *score = new int[n];
        double avg = 0.0, cnt = 0.0;
        for (int j = 0; j < n; j++) {
            scanf("%d", &score[j]);
            avg += score[j];
        }
        avg /= n;

        for (int j = 0; j < n; j++) {
            if (score[j] > avg) cnt++;
        }

        printf("%0.3f%%\n", cnt / n * 100);
    }

    return 0;
}
