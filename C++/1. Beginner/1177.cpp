#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    
    cin >> n;
    
    unsigned int v[1000];
    
    for(int i = 0; i < 1000; i++){
        v[i] = i % n;
        cout << "N[" << i << "] = " << v[i] << endl;
    }

    return 0;
}