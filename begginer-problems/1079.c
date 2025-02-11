#include <stdio.h>

int main() {
    int n;
    scanf(" %d", &n);

    for (int i = 0; i < n; i++) {
        float x[3] = {0.0, 0.0, 0.0}, average = 0.0;
        for (int j = 0; j < 3; j++) {
            scanf(" %f", &x[j]);
        }
        average = x[0] * 0.2 + x[1] * 0.3 + x[2] * 0.5;
        printf("%.1f\n", average);
    }

    return 0;
}
