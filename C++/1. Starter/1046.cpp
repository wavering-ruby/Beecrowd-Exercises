#include <iostream>

int main(){
    int hi, hf;
    int h;
    
    std::cin >> hi >> hf;
    
    if(hi == hf){
        h = 24;
    } else {
        if(hi < hf){
            h = hf - hi;
        } else {
            h = (24 - hi) + hf;
        }
    }

    std::cout << "O JOGO DUROU " << h << " HORA(S)" << std::endl;

    return 0;
}