#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int total = 0;
    int totalCoelhos = 0;
    int totalRatos = 0;
    int totalSapos = 0;

    int number = 0;
    char type = '\0';

    for (int i = 0; i < n; i++) {
        scanf("%d %c", &number, &type);
        total += number;
        if (type == 'C') {
            totalCoelhos += number;
        } else {
            if (type == 'R') {
                totalRatos += number;
            } else {
                totalSapos += number;
            }
        }
    }

    float percentCoelhos = (float)totalCoelhos / total * 100;
    float percentRatos = (float)totalRatos / total * 100;
    float percentSapos = (float)totalSapos / total * 100;

    printf(
        "Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de "
        "sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: "
        "%.2f %%\nPercentual de sapos: %.2f %%\n",
        total, totalCoelhos, totalRatos, totalSapos, percentCoelhos,
        percentRatos, percentSapos);
    return 0;
}

