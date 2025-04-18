#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    stack<char> stack2;
    int flag = 0;
    string text;
    
    int i = 0;
    
    while(cin >> text){
        for(int i = 0; i < text.size(); i++){
            //cout << text[i] << " -_- ";
            
            if(text[i] == ')' && stack2.empty()){
                cout << "incorrect" << endl;
                flag = 1;
                break;
            } else if(text[i] == ')' && stack2.top() == '('){
                // cout << "Pop: " << stack2.top() << endl;
                stack2.pop();
            }
            
            if(text[i] == '('){
                stack2.push(text[i]);
                // cout << "Push: " << stack2.top() << endl;
            }
            
            // cout << "Fim do looping" << endl;
        }
        
        if(!stack2.empty() || flag == 1){
            if(flag == 0){
                cout << "incorrect" << endl;
            }
        } else {
            cout << "correct" << endl;
        }
        
        stack2 = stack<char>();
        flag = 0;
    }
    
    return 0;
}