//Brute Force Approach
/*
#include<iostream>
#include<vector>

using namespace std;
class Solution{
    public:
        int Manip(int num){
            int count =0;
            while(num!=0){
                int temp = num & 1;
                if(temp == 1){
                    count++;
                }
                num = num >> 1;
            }
            return count;
        }
        vector<int> Bit(int num){
            vector<int> res(num+1);
           
                for(int i=0;i<=num;i++){
                    res[i] = Manip(i);
                }
                return res;

        }
};
int main(){

    int num;
    cout<<"Enter Number:";
    cin>>num;
    Solution sol;
    vector<int> res = sol.Bit(num);
    for(int i: res){
        cout<<i<<"\t"; 
    }
}

*/


//Using Dynamoc programming and Bit Shift

#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> Bit(int n){
            vector<int> res(n+1);
            for(int i=1;i<=n;i++){
                res[i] = res[i >> 1] + (i & 1);

            }
            return res;
        }
};

int main(){
     int num;
        cout<<"Enter Number:";
        cin>>num;
        Solution sol;
        vector<int> res = sol.Bit(num);
        for(int i: res){
            cout<<i<<"\t"; 
        }  
}