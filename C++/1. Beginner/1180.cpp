#include <iostream>
using namespace std;

int main(){
    int n, low;
    cin >> n;
    
    long x[n];
    
    int index = 0;
    
    for(int k = 0; k < n; k++){
        cin >> x[k];
    }
    
    low = x[0];
    
    for(int i = 0; i < n; i++){
        if(low > x[i]){
            low = x[i];
            index = i;
        }
    }
    
    cout << "Menor valor: " << low << endl;
    cout << "Posicao: " << index << endl;

    return 0;
}