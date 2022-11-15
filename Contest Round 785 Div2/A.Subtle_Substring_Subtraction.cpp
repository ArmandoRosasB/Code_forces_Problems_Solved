#include <iostream>
#include <stdlib.h>

using namespace std;

template<class T>
int suma(T*, int, int);

int main(int argc, char* argv[]){
    int t;
    string palabra;
    int* ASCII_nums;

    cin>>t;
    for(int i = 0; i<t; i++){
        cin>> palabra;
        ASCII_nums = new int[palabra.size()];

        for(int i = 0; i< palabra.size(); i++){
            ASCII_nums[i] = palabra[i] - 96;

        }

        if(palabra.size() == 1)
            cout<< "Bob " << ASCII_nums[0]<<endl;
        

        else if (palabra.size() % 2 == 0)
            cout<< "Alice " << suma(ASCII_nums,0, palabra.size()-1)<<endl;
        

        else{
            if (ASCII_nums[0] > ASCII_nums[palabra.size() - 1])
                cout<< "Alice " << suma(ASCII_nums, 0, palabra.size() - 2) - ASCII_nums[palabra.size() - 1]<<endl;
            else
               cout<< "Alice " << suma(ASCII_nums, 1, palabra.size() - 1) - ASCII_nums[0]<<endl;
        }

    }


  
    system("pause");
    return 0;
}

template<class T>
int suma(T* arr, int ini, int end){
    int sum = 0;
    for(int i = ini; i<end + 1; i++){
        sum += arr[i];
    }
    
    return sum;
}