#include <iostream>

int main(){
    int n, temp;
    std::cin >> n;
    temp = n;
    
    int ced[7] = {100, 50, 20, 10, 5, 2, 1};
    int qtd[7] = {0, 0, 0, 0, 0, 0, 0};
    
    for(int i = 0; i < 7; i++){
        if(n >= ced[i]){
            qtd[i] = n / ced[i];
            n = n - (qtd[i] * ced[i]);
        }
    }
    
    std::cout << temp << std::endl;
    for(int i = 0; i < 7; i++){
        std::cout << qtd[i] << " nota(s) de R$ " << ced[i] << ",00" << std::endl;
    }

    return 0;
}