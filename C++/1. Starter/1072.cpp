#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int in = 0;
    int out = 0;
    int x;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        
        if(x >= 10 && x <= 20){
            in++;
        } else {
            out++;
        }
    }
    
    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}