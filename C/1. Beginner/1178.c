#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);

    double v[100];

    for (int i = 0; i < 100; i++) {
        if (i > 0) {
            v[i] = v[i - 1] / 2.0;
        } else {
            v[i] = n;
        }

        printf("N[%d] = %.4lf\n", i, v[i]);
    }

    return 0;
}
