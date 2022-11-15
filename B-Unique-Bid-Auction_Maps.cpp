#include <iostream>
#include <iterator>
#include <map>

using namespace std;



int main (int argc, char* argv[]){
    int n, participants, aux;
    int* arr;
    cin>> n;

    for (int i =0; i<n; i++){
        cin>> participants;
        arr = new int[participants];
        map<int, int> mp;

        for(int i = 0; i<participants; i++){
            cin>>arr[i];
            /*
            Find regresa un iterador, es decir, la posición del par de datos donde se encuentra
            lo que le pedi. Si este regresa el end del mapa, entocnes significa que no esta
            */
            if(mp.find(arr[i]) == mp.end()) 
                mp[arr[i]] = 0;
            
            mp[arr[i]]++;
        }

        bool bandera = false;
        /*En este caso:
            auto = map<int, int> :: iterator
         */
        for(auto itr = mp.begin(); itr != mp.end(); itr++){ 
            if((*itr).second == 1){
                aux = (*itr).first;
                bandera = true;
                break;
            }
        }

        if(!bandera)
            cout<< -1<<endl;
        else{
            for(int i = 0; i<participants; i++){
                if(aux == arr[i]){
                    cout<< i + 1 <<endl;
                    break;
                }
            }

        }        
    }
    return 0;
}
