#include <iostream>
using namespace std;

int main(){
    int x, y;
    
    while(true){
        cin >> x;
        
        if(x <= 0){
            break;
        }
        
        for(int i = 1; i <= x; i++){ // Quantidade de linha
            if(i != x){
                cout << i << " ";
            } else {
                cout << i << endl;
            }
        }
    }
    return 0;
}