#include <stdio.h>
 
int main() {
 
    int x[5], even = 0;
    for(int i = 0; i < 5; i++) {
        scanf("%d", &x[i]);
        if(x[i] % 2 == 0) {
            even++;
        }
    }
    printf("%d valores pares\n", even);
 
    return 0;
}
