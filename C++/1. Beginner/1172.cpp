#include <iostream>
using namespace std;

int main(){
    int v[10];
    
    for(int i = 0; i < 10; i++){
        cin >> v[i];
        
        if(v[i] <= 0){
            v[i] = 1;
        }
    }
    
    for(int j = 0; j < 10; j++){
        cout << "X[" << j << "] = " << v[j] << endl;
    }

    return 0;
}