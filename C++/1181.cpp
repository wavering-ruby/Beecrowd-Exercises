#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double m[12][12];
    
    int line = 0;
    
    cin >> line;
    
    char w;
    
    cin >> w;
    
    // Leitura de matriz
    // Colunas
    for(int i = 0; i < 12; i++){
        // Linhas
        for(int j = 0; j < 12; j++){
            cin >> m[i][j];
        }
    }

    double sum = 0;

    // Cálculo de soma da matriz
    for(int k = 0; k < 12; k++){
        sum += m[line][k];
    }
    
    cout << fixed << setprecision(1);
    
    if(w == 'S'){
        cout << sum << endl;
    } else {
        cout << sum/12 << endl;
    }

    return 0;
}