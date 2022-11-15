#include <iostream>
#include <map>
#include <iterator>
#include <vector>

using namespace std;


int main (int argc, char* argv[]){
    int t, n;
    vector<int> nums (50, 0);
    string s;

    cin>>t;

    for(int k = 0; k<t; k++){
        map<int, char> keys; 
        bool flag = true;
        cin>>n;

        for(int j = 0; j<n; j++){
            cin>>nums[j];
        }                                           
        cin>>s;


        for(int i = 0; i<n; i++){
            if(keys.find(nums[i]) == keys.end())
                keys[nums[i]] = s[i];
            else if(keys[nums[i]] != s[i]){
                cout<<"NO" <<endl;
                flag = false;
                break;
                }
            

            }
            if(flag)
                cout<<"YES"<<endl;

    }
        return 0;

    }







