#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    cin >> n;
    
    unsigned int totalSquares, whiteSquares, blackSquares;
    totalSquares = (n * n);
    
    whiteSquares = blackSquares = (totalSquares / 2);
    
    if(totalSquares % 2 != 0){
        // Porque ele sempre começa pela branco, ou seja, em caso de impar a branca tem mais um 
        whiteSquares++;   
    }
    
    cout << whiteSquares << " casas brancas e " << blackSquares << " casas pretas" << endl;

    return 0;
}