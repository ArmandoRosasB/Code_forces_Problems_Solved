#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void isPrime(vector<int>&);

int main(int argc, char* argv[]){
    vector<int> primes;
    isPrime(primes);

    int t, n, aux, res;
    bool flag;

    cin>> t;
    while(t--){
        cin>> n;
        flag = false;

        for(int i = 0; i<primes.size(); i++){
            aux = n + primes[i];
            for(int j = i; j<primes.size(); j++){
                if(aux == primes[j]){
                    flag = false;
                    break;
                }
                else{
                    res = aux- n;
                    flag = true;

                }
            }
            if (flag)
                break;
        }

        cout<< res <<endl;
        
    }



    system("pause");
    return 0;
}

void isPrime(vector<int>& primes){ //Ramona dijo primes
    vector<bool> visited(200000, 0);
    for(int i = 2; i<200000; i++){
        if(!visited[i]){
            for(int j = 2; j<=(200000/i); j++){
                visited[i*j] = 1;
            }
            primes.push_back(i);
        }
    }

}