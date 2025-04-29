#include <stdio.h>

int main(){
    float num, media;
    int val, cont;
    
    for(cont = 1; cont <=6; cont++){
    scanf("%f", &num);
        if(num >= 0){   
            val = val + 1;
            media = media + num;
        }
    }
    
    media = media/val;
    printf("%d valores positivos\n", val);
    printf("%.1f\n", media);
    return 0;
}