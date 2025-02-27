#include <stdio.h>

#define SIZE 10001

int main() {
    int c = 0;
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        char str[SIZE];
        scanf("%s", str);
        double len = 0.0;
        for (int j = 0; str[j] != '\0'; j++) {
            len += 0.01;
        }
        printf("%.2lf\n", len);
    }

    return 0;
}
