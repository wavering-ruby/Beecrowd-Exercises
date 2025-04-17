#include <iostream>
using namespace std;

int main(){
    int n;
    int a, b;
    
    cin >> n;
    
    a = 0;
    b = 1;
    
    int j = 0;
    for(int i = 0; i < n; i++){
        if(i == 0){
            cout << a;
        
        } else if(i == 1) {
            cout << " " << b;
        } else {
            int atual = a + b;
            cout << " " << atual;
            a = b;
            b = atual;  
        }
    }
    
    cout << endl; // Somente tem para evitar presatation error
    
    return 0;
}