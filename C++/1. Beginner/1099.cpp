#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int v[2];
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        cin >> v[0] >> v[1];
        
        if(v[0] > v[1]){
            int temp = v[0];
            v[0] = v[1];
            v[1] = temp;
        }
        
        for(int j = v[0]; j < v[1]; j++){
            if(j % 2 != 0 && j != v[0]){
                sum = sum + j;
            }
        }
        
         cout << sum << endl;
         // Resetando o valor de sum para o próximo indice
         sum = 0;
    }
    
    return 0;
}