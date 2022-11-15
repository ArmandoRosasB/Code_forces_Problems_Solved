#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
    int t, size, q, type, num_sum; //num_sum: Idea de Ramona, sin o le entienden preguntenle
    cin>>t;
    for(int i = 0; i<t; i++){
        long long int sum = 0;
        int par = 0, impar = 0;
        cin>>size >> q;
        vector<int> nums (size, 0); 

        for(int i = 0; i<size;i++){
            cin>>nums[i];
            if((nums[i]%2))
                impar++;
            else
                par++;
            sum += nums[i];   
        }

        for(int i = 0; i<q; i++){
            cin>>type >> num_sum;
            if (type){
                sum += impar * num_sum;
                if(num_sum %2 == 1){
                    par += impar;
                    impar = 0;  
                }
            }
            else{
                sum += par * num_sum;
                if(num_sum %2 == 1){
                    impar += par;
                    par = 0;      
                }
            }
            
            cout<<sum<<endl;
        }

}
    return 0;
}

