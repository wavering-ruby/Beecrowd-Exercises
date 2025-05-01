#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    int i = 1;
    int j;
    
    while(i <= n) {
        cin >> j;
        cout << "resposta " << i << ": " << j << endl;
        
        
        i++;
    }

    return 0;
}