#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int value;
    int v[2] = {-1, -1};
    
    while(i < 100){
        i++;
        cin >> value;
        
        if(value > v[0]){
            v[0] = value;
            v[1] = i;
        }
    }
    
    cout << v[0] << endl;
    cout << v[1] << endl;
    
    return 0;
}