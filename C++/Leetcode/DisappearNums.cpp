#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
        vector<int> Disappear(vector<int> &a){
            vector<int> res;
            int i=0;
            while(i<a.size()){
                int currIdx = a[i]-1;
                if(a[i]>0 && a[i]<= a.size() && a[i]!=a[currIdx]){
                    swap(a[i],a[currIdx]);
                }
                else{
                    i++;
                }
            } 
            for(int i=0;i<a.size();i++){
                if(a[i]!=i+1){
                    res.push_back(i+1);
                }
            }
            return res;
        }


};

int main(){

    vector<int> a = {1,1};
    Solution sol;
    vector<int> res = sol.Disappear(a);
    for(int i : res){
        cout<<i<<" ";
    }
}