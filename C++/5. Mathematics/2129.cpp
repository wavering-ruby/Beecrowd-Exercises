#include <iostream>
using namespace std;

typedef unsigned long long ull;

/*
    A ideia deste código, é criar uma maneira de mostrar o último dígito do fatorial,
    de modo que retorne o último valor (não zero) do fatorial. Uma maneira de resolver
    isso sem precisar armazenar valores é fazendo uma maneira de dividir o valor em dois dígitos
    de maneira que ficasse fácil para pegar esses valores.
*/

// Last Digit Non Zero
ull ldnz(ull n) {
    if (n <= 1){
        return 1;
    } else if(n == 2){
        return 2;
    }

    // Fórmula 2*a * a! * b!
    ull a = n / 5;
    ull b = n % 5;

    // Potência de 2 elevada a 'a' módulo 4
    ull potA = a % 4;
    
    switch (potA) {
        case 0: 
            potA = 1; 
        break;
        
        case 1: 
            potA = 2; 
        break;
        
        case 2:
            potA = 4;
        break;
        
        case 3: 
            potA = 8;
        break;
    }

    // Último dígito não zero do fatorial de y (até 4 é direto)
    ull lastB;
    
    switch(b){
        default: 
            lastB = 0;
        break;
        
        case 0:
            lastB = 1;
        break;
        
        case 1:
            lastB = 1;
        break;
        
        case 2: 
            lastB = 2;
        break;
        
        case 3: 
            lastB = 6; 
        break;
        
        case 4: 
            lastB = 4; 
        break;
    }

    // Chamada recursiva e cálculo final
    return (ldnz(a) * potA * lastB) % 10;
}

int main() {
    unsigned int n;
    int i = 1;

    while(cin >> n) {
        cout << "Instancia " << i << endl;
        
        ull r = ldnz(n);
        cout << r << endl;
        cout << endl;
        
        i++;
    }

    return 0;
}

// int main(){ // Essa maneira estava dando 'timeout', então tive que vr maneiras diferente
//     /*
//         A ideia deste código, é criar uma maneira de mostrar o último dígito do fatorial,
//         de modo que retorne o último valor (não zero) do fatorial. Uma maneira de resolver
//         isso sem precisar armazenar valores é fazendo uma maneira de dividir o valor em dois dígitos
//         de maneira que ficasse fácil para pegar esses valores.
//     */
    
//     int n;
//     int i = 0;
    
//     while(cin >> n){
//         i++;
//         int d = 1;
//         cout << "Instancia " << i << endl;
        
//         // Cálculo do fatorial padrão
//         for(int j = 2; j <= n; j++){
//             d *= j;
            
//             while (d % 10 == 0){
//                 d /= 10;
//             }
            
//             // Alterando aqui para melhorar os digítos
//             d = d % 100000;
            
//         }
        
//         cout << d % 10 << endl;
//     }

//     return 0;
// }