/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int h0, m0, h1, m1;
    int temp;
    int minutes, hours;
    
    scanf("%d %d %d %d", &h0, &m0, &h1, &m1);
    
    if(h0 == h1 && m0 == m1){
        hours = 24;
        minutes = 0;
    } else {
        int start = (60 * h0) + m0;
        int end = (60 * h1) + m1;
        int d;
        
        if(end > start){
            d = end - start;
        } else { // 1440 = 24h in minutes
            d = (1440 - start) + end;
        }
        
        hours = d / 60;
        minutes = d % 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);
}