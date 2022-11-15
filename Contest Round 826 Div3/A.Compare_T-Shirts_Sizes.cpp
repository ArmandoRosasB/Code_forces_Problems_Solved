#include <iostream>
#include <stdlib.h>


using namespace std;

int cases(string, string);


int main(int argc, char* argv[]){
    int t, n; 
    string Tshirt_one, Tshirt_two;


    cin>> t;

    for(int i = 0; i<t; i++){
        cin>> Tshirt_one >> Tshirt_two;
        n = cases(Tshirt_one, Tshirt_two);
        switch(n){
            case 0:
                cout<< "=\n";
                break;
            case 1:
                cout<< "<\n";
                break;
            case 2:
                cout<< ">\n";
                break;

        }


    }



    system("pause");
    return 0;
}

int cases(string s1, string s2){
    char endOne, endTwo;
    endOne = s1[s1.size() - 1];
    endTwo = s2[s2.size() - 1];

    if(endOne == endTwo){
        if(s1.size() == s2.size())
            return 0;

        if(s1.size() < s2.size()){
            if(endOne == 'S')
                return 2;

            if(endOne == 'L')
                return 1;   
        }

        else{
            if(endOne == 'S')
                return 1;

            if(endOne == 'L')
                return 2; 
        }

    }

    if (endOne == 'S')
        return 1;
    
    if (endTwo == 'S')
        return 2;

    if (endOne == 'M')
        return 1;

    if (endTwo == 'M')
        return 2;
    
    return -1;
}