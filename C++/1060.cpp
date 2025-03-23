#include <iostream>

int main(){
    float num;
    int val = 0, cont;
    
    for(cont = 1; cont <= 6; cont++){
        std::cin >> num;
        
        if(num >= 0){   
            val++;
        }
    }
    
    std::cout << val << " valores positivos" << std::endl;

    return 0;
}