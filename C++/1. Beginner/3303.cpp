#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int a;
    
    while(cin >> word) {
        a = word.length();
        
        if(a >= 10){
            cout << "palavrao" << endl;
        } else {
            cout << "palavrinha" << endl;
        }
    }

    return 0;
}