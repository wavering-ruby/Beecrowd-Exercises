#include <iostream>
using namespace std;

int main(){
    int N[20];
    int n = 20;
    
    for(int i = 0; i < n; i++){
        cin >> N[i];
    }
    
    // Every time I wake up...
    // I'm starting to break up... 
    
    for(int j = 0; j < n / 2; j++){
        int temp = N[j];
        N[j] = N[n - 1 - j];
        N[n - 1 - j] = temp;
    }
    
    for(int k = 0; k < n; k++){
        cout << "N[" << k << "] = " << N[k] << endl;
    }
    
    
    return 0;
}