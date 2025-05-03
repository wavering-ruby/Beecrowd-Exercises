#include <iostream>
using namespace std;

int main() {
    // Começando diferente, do 0 até o 9
              // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    int v[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int n;
    
    cin >> n;
    
    // Para limpar o buffer do getline
    cin.ignore();
    
    for(int i = 0; i < n; i++){
        string s;
        
        getline(cin, s);
        int sum = 0;
        
        for(int j = 0; j < s.size(); j++){
            // cout << "char:" << s[j] - '0' << endl;
            // cout << "qtd_leds" << v[s[j] - '0'] << endl;
            sum += v[s[j] - '0'];
        }
        
        cout << sum << " leds" << endl;
    }
    
    return 0;
}