#include <iostream>
#include <map>
#include <iterator>

using namespace std;


int main(int argc, char* argv[]){
    int t, n, c, orbit;

    cin>>t;
    for(int i = 0; i<t; i++){
        map<int, int> planets;
        int cost = 0;
        cin>> n >> c;

        for(int i = 0; i<n; i++){
            cin>> orbit;
            if(planets.find(orbit) == planets.end()){
                planets[orbit] = 0;
            }
            planets[orbit]++;
        }

        for(auto itr = planets.begin(); itr!= planets.end(); itr++){
            if((*itr).second > c)
                cost += c;
             else
                cost += (*itr).second;
        }

        cout<<cost<<endl;
    }

    return 0;
}