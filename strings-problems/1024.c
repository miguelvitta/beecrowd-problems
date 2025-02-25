#include <stdio.h>
#include <string.h>

#define SIZE 1001

void getString(char *str);
void encription(char *str);
void firstPass(char *str, int len);
void secondPass(char *str, int len);
void thirdPass(char *str, int len);

int main() {
    int n = 0;

    scanf("%d", &n);
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    for (int i = 0; i < n; i++) {
        char string[1001] = {0};
        getString(string);
        encription(string);
        printf("%s\n", string);
    }

    return 0;
}

void getString(char *str) {
    if (fgets(str, SIZE - 1, stdin) != NULL) {
        str[strcspn(str, "\n")] = '\0';
    }
}

void encription(char *str) {
    int len = 0;
    for (; str[len] != '\0'; len++)
        ;
    firstPass(str, len);
    secondPass(str, len);
    thirdPass(str, len);
}

void firstPass(char *str, int len) {
    for (int i = 0; i < len; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] += 3;
        }
    }
}

void secondPass(char *str, int len) {
    int half = len / 2;
    for (int i = 0; i < half; i++) {
        char aux = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = aux;
    }
}

void thirdPass(char *str, int len) {
    int half = len / 2;
    for (int i = half; i < len; i++) {
        str[i]--;
    }
}

