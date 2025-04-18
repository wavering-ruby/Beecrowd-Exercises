#include <iostream>

int main(){
    int num;
    int val = 0, cont;
    
    for(cont = 1; cont <= 5; cont++){
        std::cin >> num;
        
        if(num % 2 == 0){   
            val++;
        }
    }
    
    std::cout << val << " valores pares" << std::endl;

    return 0;
}