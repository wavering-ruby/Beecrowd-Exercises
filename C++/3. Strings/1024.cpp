#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string word;
    int n;
    
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        getline(cin, word);
        
        for(int j = 0; j < word.size(); j++){
            char l = word[j]; // Apenas para resumir o código
            if((l >= 65 && l <= 90) || (l >= 97 && l <= 122)){
                word[j] = l + 3;
            }
            // cout << "l: " << l << " " << "s: " << word[i] << endl;
           
        }
        
        // Utilizando o algortimo de reverter        
        reverse(word.begin(), word.end());
        
        for(int k = word.size() / 2; k < word.size(); k++){
            char l = word[k];
            
            word[k] = l - 1;
        }
        
        cout << word << endl;
    }

    return 0;
}