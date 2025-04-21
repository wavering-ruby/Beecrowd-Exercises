#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;

    cin >> n;
    
    for(int i = 1; i <= n; i++){ // Quantidade de linhas
        for(int j = 1; j <= 3; j++){
            if(j != 3){
                cout << pow(i, j) << " ";
            } else {
                cout << pow(i, j) << endl;
            }
        }
    }

    return 0;
}
