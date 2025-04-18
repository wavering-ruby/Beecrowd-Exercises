#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v = {"", "", ""};
    
    cin >> v[0];
    cin >> v[1];
    cin >> v[2];
    
    if(v[0] == "vertebrado"){
        if(v[1] == "ave"){
            if(v[2] == "carnivoro"){
                cout << "aguia" << endl;
            } else {
                cout << "pomba" << endl;
            }
        } else {
            if(v[2] == "onivoro"){
                cout << "homem" << endl;
            } else {
                cout << "vaca" << endl;
            }
        }
    } else {
        if(v[1] == "inseto"){
            if(v[2] == "hematofago"){
                cout << "pulga" << endl;
            } else {
                cout << "lagarta" << endl;
            }
        } else {
            if(v[2] == "hematofago"){
                cout << "sanguessuga" << endl;
            } else {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}