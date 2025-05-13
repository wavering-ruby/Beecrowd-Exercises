#include <iostream>
using namespace std;

int bubbleSort(int v[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(v[j] < v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    
    return v[0];
}

int main(){
    int l;
    while(cin >> l){
    
        int v[l] = {0};
        
        for(int h = 0; h < l; h++){
            cin >> v[h];
        }
        
        int slug_spd = bubbleSort(v, l);
        int level;
        
        if(slug_spd < 10){
            cout << "1" << endl;
        } else if(slug_spd >= 10 && slug_spd < 20){
            cout << "2" << endl;
        } else {
            cout << "3" << endl;
        }
    }
    
    return 0;
}