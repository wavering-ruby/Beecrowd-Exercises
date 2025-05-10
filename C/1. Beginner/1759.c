#include <stdio.h>

int main() {
    unsigned int h;
    scanf("%u", &h);

    if(h > 0){
        for(int i = 0; i < h - 1; i++){
            printf("Ho ");
        }

        printf("Ho!\n");
    }

    return 0;
}