#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int>&, int, int);
void selectionSort(vector<int>&, vector<int>&);
int solve(vector<int>&, vector<int>&);


int main (int argc, char* argv[]){
    int n, participants, aux;
     cin>> n;

    for (int i =0; i<n; i++){
        vector<int> values;
        vector<int> position;
        cin>> participants;

        for(int i = 0; i<participants; i++){
            cin>> aux;
            values.push_back(aux);
            position.push_back(i+1);
        }

        selectionSort(values, position);
        cout<< solve(values, position)<<endl;      
    }
    return 0;
}

void swap(vector<int> &v, int i, int j) {
	int aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

void selectionSort(vector<int>& val, vector<int>& p){
	int pos;
	for(int i = val.size() - 1; i > 0; i--){
		pos = 0;
		for(int j = 1; j <= i; j++){
			if(val[j] > val[pos]){
				pos = j;
			}
		}

		if (pos != i){
			swap(val, i, pos);
            swap(p, i, pos);
		}
        
    }
}
    
int solve(vector<int>& val, vector<int>& p){
        if(val[0] != val[1])
            return p[0];

        for(int i = 1; i<val.size() - 1; i++){
            if(val[i] != val[i-1] && val[i] != val[i+1] && i != val.size() - 1)
                return p[i];
            }   
        if(val[val.size() - 1] != val[val.size() - 2])
            return p[p.size() - 1];
        else
            return -1;
        
}

         