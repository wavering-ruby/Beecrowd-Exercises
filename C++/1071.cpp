#include <iostream>
using namespace std;

int main(){
    int v[2] = {0, 0};
    
    cin >> v[0];
    cin >> v[1];
    
    int s = 0;
    
    if(v[0] > v[1]){
        int temp = v[0];
        v[0] = v[1];
        v[1] = temp;
    }
    
    for(int i = v[0] + 1; i < v[1]; ++i){
        if(i % 2 != 0){
            s = s + i;
        }
    }
    
    cout << s << endl;;
}