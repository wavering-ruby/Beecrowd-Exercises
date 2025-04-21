#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;

    cin >> n;
    
    for(int i = 1; i <= n; i++){ // Quantidade de linha
        for(int j = 1; j <= 3; j++){
            int pot = pow(i, j);
            
            if(j != 3){
                cout << pot << " ";
            } else {
                cout << pot << endl;
            }
        }
        
        for(int k = 1; k <= 3; k++){
            
            int pot = pow(i, k);
            
            if(k != 3){
                if(k == 2){
                    cout << pot + 1 << " ";
                } else {
                    cout << pot << " ";
                }
            } else {
                cout << pot + 1 << endl;
            }
        }
    }

    return 0;
}