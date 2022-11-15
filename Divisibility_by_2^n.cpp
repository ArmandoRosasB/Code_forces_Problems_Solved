#include <iostream>
#include <stdlib.h>

using namespace std;


int mcm(int, int);
void primos(int);

int* primos;
int main (int argc, char* argv[]){
    int t, n, multi = 1;
    int* arr;
    
    cin>> t;

    for(int i = 0; i<t; i++){
        cin>>n;
        arr = new int[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            arr[i] = arr[i] % pow(2, n);
            multi *= arr[i];
        }

        if(multi % (pow(2, n)) == 0){
            cout<< 0 << endl;
            continue;
        }

        
    }



    system("pause");
    return 0;
}

int mcm(int n1, int n2){
    for (int i = 1; i<(n1 * n2); i++){
        if (n1 == n2){
            return n1;

        }
    }
}

void primos(int n){
    int aux[n];
    for(int i = 0; i<n; i++){
        aux[i] = i+1;
    }

    for(int i = 1; i<n; i++){
        
    }
    
}