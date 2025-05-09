#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    
    cin >> n;
    
    // Para armazenar os valores das horas para cálcular depois, onde:
    /* 
        [0] = bonecos
        [1] = arquitetos
        [2] = musicos
        [3] = desenhistas
    */
    unsigned int arr_toys[4] = {0, 0, 0, 0};
    unsigned int arr_hours[4] = {8, 4, 6, 12};
    
    string elf_name, elf_function;
    unsigned int hours;
    
    for(int i = 0; i < n; i++){
        cin >> elf_name >> elf_function >> hours;
        
        // Poderia ter um switch case para string. T_T)
        // if (elf_function == "bonecos") {
        //     arr_toys[0] += hours;
        // } else if (elf_function == "arquitetos") {
        //     arr_toys[1] += hours;
        // } else if (elf_function == "musicos") {
        //     arr_toys[2] += hours;
        // } else if (elf_function == "desenhistas") {
        //     arr_toys[3] += hours;
        // }
        
        // Nice! Uma outra maneira de utilizar o if com string (se o charactere inicial for igual)
        switch(elf_function[0]){
            case 'b': arr_toys[0] += hours; break;
            case 'a': arr_toys[1] += hours; break;
            case 'm': arr_toys[2] += hours; break;
            case 'd': arr_toys[3] += hours; break;
        }
    }
    
    unsigned int sum = 0;
    
    for(int j = 0; j < 4; j++){
        sum += arr_toys[j] / arr_hours[j];
    }
    
    cout << sum << endl;

    return 0;
}