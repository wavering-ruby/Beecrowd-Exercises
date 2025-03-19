#include <iostream>

int main(){
    float timer;
    std::cin >> timer;
    
    if (timer <= 25 && timer >= 0) {
        std::cout << "Intervalo [0,25]" << std::endl;
    } else if (timer <= 50 && timer > 25) {
        std::cout << "Intervalo (25,50]" << std::endl;
    } else if (timer <= 75 && timer > 50) {
        std::cout << "Intervalo (50,75]" << std::endl;  
    } else if (timer <= 100 && timer > 75) {
        std::cout << "Intervalo (75,100]" << std::endl;
    } else {
        std::cout << "Fora de intervalo" << std::endl;
    }
    return 0;
}
