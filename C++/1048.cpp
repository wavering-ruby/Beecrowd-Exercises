#include <iostream>
#include <iomanip>

int main(){
    float sal;
    float reajust;
    std::cin >> sal;
    
    if(sal >= 0 && sal <= 400.00){
        reajust = 0.15;
    } 
    
    if(sal >= 400.01 && sal <= 800.00){
        reajust = 0.12;
    }
    
    if(sal >= 800.01 && sal <= 1200.00){
        reajust = 0.10;
    }
    
    if(sal >= 1200.01 && sal <= 2000.0){
        reajust = 0.07;
    }
    
    if(sal > 2000.00){
        reajust = 0.04;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Novo salario: " << sal + (sal * reajust) << std::endl;
    std::cout << "Reajuste ganho: " << reajust * sal << std::endl;
    
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Em percentual: " << reajust * 100 << " %" << std::endl;    

    return 0;
}