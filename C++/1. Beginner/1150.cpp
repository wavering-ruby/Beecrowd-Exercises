#include <iostream>
using namespace std;

int main(){
    /* Fiquei um pouco confuso no começo, mas entendi do que se tratava:
    
        A ideia é você saber a quantidade de n° inteiros que ultrapassem o valor
        de Z, partindo de X, no caso, se o usuário inserir:
        
        x = 1;
        z = 3; 
        
        Ele vai pegar que x é o ponto de partida, então ele no mínimo já conta como
        um dos inteiros! Depois disso, você tem que descobrir o segundo, sabendo
        que deve passar o valor minimamente considerando x, ou seja, somando x com
        x + 1, totalizando +1 inteiro, depois somando x + 2, totalizando mais um inteiro.
        No exemplo acima, seria dois, o equivalente a:
        
        x [cont + 1] + (x + 1) [cont + 1]
        Como x = 1
        1 + (1 + 1) = 3 => Apenas dois inteiros, 1 e 2.
    */
    int x, z = -1;
    int count = 1;
    
    cin >> x;
    
    while(z <= x){
        cin >> z;
    }
    
    int sum = x;
    int i = 0;
    
    while(sum < z){
        sum = sum + x;
        x++;
        count++;
    }
    
    cout << count << endl;
    
    return 0;
}