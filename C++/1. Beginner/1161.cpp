#include <iostream>
using namespace std;

// Mantém a lógica recursiva
unsigned long long fat(int s){
    if(s <= 1){
        return 1;
    } else {
        return s * fat(s - 1);
    }
}

int main(){
    int m, n;

    // Lê até EOF com cin
    while(cin >> m >> n){
        unsigned long long sum = fat(m) + fat(n);
        cout << sum << endl;
    }

    return 0;
}
