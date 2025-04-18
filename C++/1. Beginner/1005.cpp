#include <iostream>
#include <iomanip>  // Para std::setprecision


int main(){
    float a, b;
    
    std::cin >> a >> b;
    
    // setprecision(X) -> Onde X é quantidade de dígitos que quer seja arrendondado
    // fixed serve para manter fixado os 5 dígitos
    std::cout<<"MEDIA = " << std::fixed << std::setprecision(5) << ((a * 3.5) + (b * 7.5))/11.0 << std::endl;

    return 0;
}