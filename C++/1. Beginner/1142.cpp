#include <iostream>
using namespace std;

int main(){
    int n;
    int cont = 1;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cout << (cont++) << " " << (cont++) << " " << (cont++) << " PUM" << endl;
        cont++;
    }
    
    return 0;
}