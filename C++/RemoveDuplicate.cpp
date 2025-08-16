#include<iostream>
#include<vector>

using namespace std;
class Solution{
    public:
        vector<int> ConsDupli(vector<int> &a){
           vector<int> res;
           if(a.empty()) return res;
           for(int i=0;i<a.size()-1;i++){
                if(a[i]!=a[i+1]){
                    res.push_back(a[i]);
                }
                
           }
           res.push_back(a[a.size()-1]);
            return res;


        }

};
int main(){

    vector<int> arr = {1,2,3,4,5,5,7};
    Solution sol;
    vector<int> res =sol.ConsDupli(arr);
    for(int i : res){
        cout<<i<<" ";
    }
}