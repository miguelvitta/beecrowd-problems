#include <stdio.h>

int main() {
    int x, y, sum = 0;
    scanf("%d %d", &x, &y);

    if(y > x) {
        int aux = x;
        x = y;
        y = aux;
    }

    for(int i = y + 1; i < x; i++) {
        if(i % 2 != 0) {
            sum += i;
        }
    }

    printf("%d\n",sum);

    return 0;
}
