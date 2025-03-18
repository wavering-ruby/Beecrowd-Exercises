#include <iostream>
#include <iomanip>  // Para std::setprecision


int main(){
    double a, b, c;
    
    std::cin >> a >> b >> c;
    
    
    
    // setprecision(X) -> Onde X é quantidade de dígitos que quer seja arrendondado
    // fixed serve para manter fixado os 5 dígitos
    std::cout<<"MEDIA = " << std::fixed << std::setprecision(1) << ((a * 2.0) + (b * 3.0) + (c * 5.0))/10.0 << std::endl;

    return 0;
}