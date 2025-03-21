// Primeira versão
// #include <iostream>
// #include <math.h>

// int main(){
//     double a, b, c;
    
//     std::cin >> a >> b >> c;
    
//     double arr[3] = {a, b, c};
    
//     for(int i = 0; i < 2; i++){ //2 significa que é até o tamanho do vetor -1
//         for(int j = i + 1; j < 3; j++){
//             if(arr[i] < arr[j]){
//                 double temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
    
//     if(arr[0] >= arr[1] + arr[2]){
//         std::cout << "NAO FORMA TRIANGULO" << std::endl;
//         return 0;
//     }
    
//     if(pow(arr[0], 2) == pow(arr[1], 2) + pow(arr[2], 2)){
//         std::cout << "TRIANGULO RETANGULO" << std::endl;
//     }
    
//     if(pow(arr[0], 2) > pow(arr[1], 2) + pow(arr[2], 2)){
//         std::cout << "TRIANGULO OBTUSANGULO" << std::endl;
//     }
    
//     if(pow(arr[0], 2) < pow(arr[1], 2) + pow(arr[2], 2)){
//         std::cout << "TRIANGULO ACUTANGULO" << std::endl;
//     }
    
//     if (arr[0] == arr[1] && arr[1] == arr[2]){
//         std::cout << "TRIANGULO EQUILATERO" << std::endl;
//         return 0;
//     }
    
//     if(arr[0] == arr[1] || arr[2] == arr[1] || arr[2] == arr[0]){ // Essa condição
//         std::cout << "TRIANGULO ISOSCELES" << std::endl;
//     }
    
//     return 0;
// }

// Versão simplificada
#include <iostream>
#include <cmath>

void sort(double arr[]) {
    for (int i = 0; i < 2; i++) { //2 significa que é até o tamanho do vetor - 1
        for (int j = i + 1; j < 3; j++) {
            if (arr[i] < arr[j]) {
                double temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main() {
    double arr[3] = {0};
    
    std::cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr);
    
    // Atribuindo os valores do vetor para as variáveis a, b e c
    double a = arr[0], b = arr[1], c = arr[2];

    if (a >= b + c) {
        std::cout << "NAO FORMA TRIANGULO" << std::endl;
        return 0;
    }

    if (pow(a, 2) == pow(b, 2) + pow(c, 2)) {
        std::cout << "TRIANGULO RETANGULO" << std::endl;
    }

    if (pow(a, 2) > pow(b, 2) + pow(c, 2)) {
        std::cout << "TRIANGULO OBTUSANGULO" << std::endl;
    }

    if (pow(a, 2) < pow(b, 2) + pow(c, 2)) {
        std::cout << "TRIANGULO ACUTANGULO" << std::endl;
    }

    if (a == b && b == c) {
        std::cout << "TRIANGULO EQUILATERO" << std::endl;
        return 0;
    }

    if (a == b || b == c || a == c) {
        std::cout << "TRIANGULO ISOSCELES" << std::endl;
    }

    return 0;
}
