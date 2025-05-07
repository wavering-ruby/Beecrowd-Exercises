#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    
    unsigned long long v[2];
    
    int x;
    
    cin >> x;
    
    for(int j = 0; j < x; j++){
        cin >> n;
        
        v[0] = 0;
        v[1] = 1;
        
        if(n == 0 || n == 1){
            cout << "Fib(" << n << ") = " << v[n] << endl;
        } else {
            for(int i = 1; i < n; i++){
                unsigned long long sum = 0;
                // cout << "v[i]:" << v[i] << endl;
                sum = v[0] + v[1];
                v[0] = v[1];
                v[1] = sum;
                // cout << "i:" << i << "soma:" << sum << endl;
            }
            
            cout <<"Fib(" << n << ") = " << v[1] << endl;
        }
    }

    return 0;
}