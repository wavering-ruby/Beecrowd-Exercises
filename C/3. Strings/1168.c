#include <stdio.h>

int main() {
    int v[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int n;
    char s[105];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", s);  // Lê a string direto (sem espaços)
        int sum = 0;

        for (int j = 0; s[j] != '\0'; j++) {
            sum += v[s[j] - '0'];
        }

        printf("%d leds\n", sum);
    }

    return 0;
}