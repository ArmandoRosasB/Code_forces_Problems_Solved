#include <iostream>
#include <stdlib.h>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;


int main(int argc, char* argv[]){
    int t;
    string s;
    cin>>t;

    while(t--){
        vector<char> frecuencia;
        bool bandera = true;
        cin>> s;

        int i = 0;
        vector<char> ::iterator itr;

        for(int j = i; j<s.size(); j++){
            itr = find(frecuencia.begin(), frecuencia.end(), s[j]);
            if(itr == frecuencia.end()){
                frecuencia.push_back(s[j]);
            } else{
                i = j;
                break;
            }
        }

        for(int j = i; j<s.size(); j++){
            if(s[j] != s[j-i]){
                bandera = false;
                break;
            }
        }

        if (bandera)
            cout<< "YES"<<endl;
        else
            cout<<"NO"<<endl;



    }





    system("pause");
    return 0;
}