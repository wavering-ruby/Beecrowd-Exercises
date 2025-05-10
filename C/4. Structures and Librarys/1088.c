#include <stdio.h>
#include <stdlib.h>

int merge(unsigned int* x, int left, int mid, int right) {
    int count = 0;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    unsigned int* L = malloc(n1 * sizeof(unsigned int));
    unsigned int* R = malloc(n2 * sizeof(unsigned int));

    for (int i = 0; i < n1; i++) {
        L[i] = x[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = x[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            x[k++] = L[i++];
        } else {
            x[k++] = R[j++];
            count += (n1 - i);
        }
    }

    while (i < n1) {
        x[k++] = L[i++];
    }

    while (j < n2) {
        x[k++] = R[j++];
    }

    free(L);
    free(R);

    return count;
}

int mergeSort(unsigned int* x, int left, int right) {
    int count = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;

        count += mergeSort(x, left, mid);
        count += mergeSort(x, mid + 1, right);
        count += merge(x, left, mid, right);
    }

    return count;
}

int main() {
    int n;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        unsigned int x[n];

        for (int i = 0; i < n; i++) {
            scanf("%u", &x[i]);
        }

        int cont = mergeSort(x, 0, n - 1);

        if (cont % 2 == 0) {
            printf("Carlos\n");
        } else {
            printf("Marcelo\n");
        }
    }

    return 0;
}