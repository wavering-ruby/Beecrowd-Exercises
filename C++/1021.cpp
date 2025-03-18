#include <iostream>
#include <iomanip>

int main(){
    double n, temp;
    std::cin >> n;
    temp = n;
    
    int ced[6] = {100, 50, 20, 10, 5, 2};
    int coin[6] = {100, 50, 25, 10, 5, 1};
    int qtd[6] = {0};
    int qtdc[6] = {0};
    
    for(int i = 0; i < 6; i++){
        if(n >= ced[i]){
            qtd[i] = n / ced[i];
            n -= qtd[i] * ced[i];
        }
    }
    
    // Trabalhando com valores inteiros...
    // Pois, houve problemas em realizar operações com ponto flutuante no compilador utilizado
    n = n * 100;
    
    for(int i = 0; i < 6; i++){
        if(n >= coin[i]){
            qtdc[i] = n / coin[i];
            n -= qtdc[i] * coin[i];
        }
    }
    
    std::cout << std::fixed << std::setprecision(2);
    
    std::cout << "NOTAS:" << std::endl;
    
    for(int i = 0; i < 6; i++){
        std::cout << qtd[i] << " nota(s) de R$ " << ced[i] << ".00" << std::endl;
    }
    
    std::cout << "MOEDAS:" << std::endl;
    
    for(int i = 0; i < 6; i++){
        std::cout << qtdc[i] << " moeda(s) de R$ " << static_cast<double>(coin[i]) / 100 << std::endl;
    }

    return 0;
}