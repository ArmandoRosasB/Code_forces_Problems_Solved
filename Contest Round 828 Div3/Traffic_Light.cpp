#include <iostream>
#include <stdlib.h>


using namespace std;


int main (int argc, char* arv[]){
    int t, n;
    string traffic_light;
    char color;
    cin>> t;

    for(int i = 0; i<t; i++){
        cin>> n >> color >> traffic_light;
        int time = 0, steps = 0;

        if (color == 'g'){
            cout<< time<<endl;
            continue;
        }

        int pos = -1;
        int fisrt_green = -1;

        for(int i = 0; i<n; i++){
            if (traffic_light[i] == color && pos == -1)
                pos = i;
            if (traffic_light[i] == 'g' && fisrt_green == -1)
                fisrt_green = i;
            if(traffic_light[i] =='g' && pos != -1){
                steps = i - pos;
                if(steps > time){
                    time = steps;
                }
                pos = -1;
            }
        }
            
        
        if(pos != -1)
            steps = n - pos + fisrt_green;
            if(steps > time)
                time = steps;
        cout<< time<<endl;

    }


    system("pause");
    return 0;
}