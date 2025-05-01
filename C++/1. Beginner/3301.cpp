#include <iostream>
using namespace std;

int main() {
    int h, z, l;
    
    cin >> h >> z >> l;
    
    int v[3] = {h, z, l};
    
    // Ordena primeira as idades
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2 - i; j++){
            if(v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    
    if(v[1] == h){
        cout << "huguinho" << endl;
    } else if(v[1] == z){
        cout << "zezinho" << endl;
    } else if(v[1] == l){
        cout << "luisinho" << endl;
    }

    return 0;
}