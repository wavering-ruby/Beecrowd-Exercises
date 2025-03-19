#include <iostream>
#include <iomanip>

int main(){
    int cod, quant;
    double valor;
    
    std::cin >> cod >> quant;
    
    switch (cod) {
        case 1:
            valor = quant * 4.00;
        break;
        case 2:
            valor = quant * 4.50;
        break;
        case 3:
            valor = quant * 5.00;
        break;
        case 4:
            valor = quant * 2.00;
        break;
        case 5:
            valor = quant * 1.50;
        break;
        default:
            valor = 0.0;
        break;
    }
    
    std::cout << "Total: R$ " << std::fixed << std::setprecision(2) << valor << std::endl;
    
    return 0;
}