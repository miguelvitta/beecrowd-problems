#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);
    if(x % 2 == 0) {
        x++;
    }
    int y = x + 11;

    for(int i = x; i < y; i+=2) {
        printf("%d\n", i);
    }

    return 0;
}

