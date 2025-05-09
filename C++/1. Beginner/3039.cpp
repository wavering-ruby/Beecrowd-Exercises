#include <iostream>
using namespace std;

int main(){
    unsigned int n;
    
    cin >> n;
    
    unsigned int arr_toys[2] = {0, 0};
    
    string kid_name;
    char genre;
    
    for(int i = 0; i < n; i++){
        cin >> kid_name >> genre;
        
        switch(genre){
            case 'M': arr_toys[0]++; break;
            case 'F': arr_toys[1]++; break;
        }
    }
    
    cout << arr_toys[0] << " carrinhos" << endl;
    cout << arr_toys[1] << " bonecas" << endl;

    return 0;
}