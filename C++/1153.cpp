#include <iostream>

int fatorial(int n){
    if(n == 1){
        return n;
    } else {
        return n * fatorial(n - 1);
    }
}

int main()
{
    int fat;
    std::cin >> fat;
    
    fat = fatorial(fat);
    
    std::cout << fat << std::endl;

    return 0;
}