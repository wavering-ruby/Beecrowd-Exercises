#include <stdio.h>
#include <string.h>

int main(){
    char word[20];
    int a;
    
    while(scanf("%s", word) != EOF) {
        a = strlen(word);
        
        if(a >= 10) {
            printf("palavrao\n");
        } else {
            printf("palavrinha\n");
        }
    }

    return 0;
}