#include <iostream>
#include <vector>
using namespace std;

// int bubbleSort(vector<unsigned int>& x){
//     int n = x.size();
//     int cont = 0;
//     bool flag = false;
    
    
//     for (int i = 0; i < n - 1; i++){
//         flag = false;
        
//         for (int j = 0; j < n - i - 1; j++){
//             if (x[j] > x[j + 1]){
//                 int temp = x[j + 1]; // Meio que não muda nada do swap
//                 x[j + 1] = x[j];
//                 x[j] = temp;
//                 cont++;
//                 flag = true;
//             }
//         }
        
//         if(!flag){
//             break; 
//         }
//     }
    
//     return cont;
// }

// Utilizando o merge, pois sua complexidade é menor que o Bubble (O(2)), fazendo-o mais rápido.
int merge(vector<unsigned int>& x, int left, int mid, int right) {
    int count = 0;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<unsigned int> L(n1);
    vector<unsigned int> R(n2);

    for (int i = 0; i < n1; i++){
        L[i] = x[left + i];
    }
    for (int j = 0; j < n2; j++){
        R[j] = x[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2){
        if (L[i] <= R[j]) {
            x[k++] = L[i++];
        } else {
            x[k++] = R[j++];
            count += (n1 - i);
        }
    }
    
    while (i < n1){
        x[k++] = L[i++];
    }

    while (j < n2){
        x[k++] = R[j++];
    }

    return count;
}

int mergeSort(vector<unsigned int>& x, int left, int right){
    int count = 0;
    
    if (left < right){
        int mid = left + (right - left) / 2;

        count += mergeSort(x, left, mid);
        count += mergeSort(x, mid + 1, right);
        count += merge(x, left, mid, right);
    }
    return count;
}

int main(){
    int n;

    while(true){
        cin >> n;
        
        if(n == 0){
            break;
        }

        vector<unsigned int> x(n);
        
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        
        int cont = mergeSort(x, 0, n - 1);
        
        // int cont = bubbleSort(x);

        if(cont % 2 == 0){
            cout << "Carlos" << endl;
        } else {
            cout << "Marcelo" << endl;
        }
    }

    return 0;
}