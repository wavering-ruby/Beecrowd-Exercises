#include <stdio.h>

unsigned long long int fibonacci(int x){
    unsigned long long int v[2] = {0, 1};
    
    if(x == 0 || x == 1){
        return v[x];
    }
    
    for(int j = 1; j < x; j++){
        unsigned long long int sum;
        sum = v[0] + v[1];
        v[0] = v[1];
        v[1] = sum;
    }
    
    return v[1];
}


int main(){
    int n;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int x;
        
        scanf("%d", &x);
        
        printf("Fib(%d) = %llu\n", x, fibonacci(x));
    }

    return 0;
}