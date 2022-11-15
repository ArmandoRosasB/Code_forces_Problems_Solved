#include <iostream>
#include <vector>

using namespace std;

void swap(int*&, int, int);
void selectionSort(int*&, int*&, int);
int solve(int*, int*, int);


int main (int argc, char* argv[]){
    int n, participants, aux;
     cin>> n;
     int* values;
     int* position;

    for (int i =0; i<n; i++){
        cin>> participants;

        values = new int[participants];
        position = new int[participants];

        for(int i = 0; i<participants; i++){
            cin>>values[i];
            position[i] = i + 1;
        }
        selectionSort(values, position, participants);
        cout<< solve(values, position, participants) <<endl;      
    }
    return 0;
}

void swap(int*& A, int i, int j) {
	int aux = A[i];
	A[i] = A[j];
	A[j] = aux;
}

void selectionSort(int*& arr, int*& p, int size) {
	int pos;
	for(int i = size - 1; i > 0; i--){
		pos = 0;
		for(int j = 1; j <= i; j++){
			if(arr[j] > arr[pos]){
				pos = j;
			}
		}

		if (pos != i){
			swap(arr, i, pos);
            swap(p, i, pos);
		}
	}
}
    
int solve(int* val, int* p, int size){
        if(val[0] != val[1])
            return p[0];

        for(int i = 1; i<size - 1; i++){
            if(val[i] != val[i-1] && val[i] != val[i+1] && i != size- 1)
                return p[i];
            }   
        if(val[size - 1] != val[size - 2])
            return p[size - 1];
        else
            return -1;
        
}

         