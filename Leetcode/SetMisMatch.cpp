#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:

        vector<int>MisMatch(vector<int> &a){
            vector<int> res;
            int i=0;
            int n = a.size();
            while(i<n){
                int currIdx = a[i]-1;
                if(a[i]>0 && a[i]<=n && a[i]!= a[currIdx]){
                    swap(a[i],a[currIdx]);
                }
                else{
                    i++;
                }
            }
            for(int i=0;i<n;i++){
                if(i+1 != a[i]){
                    res.push_back(a[i]);
                    res.push_back(i+1);
                    break;
                }
            }
            return res;
        }


};

int main(){
    vector<int> a ={2,1};
    Solution sol;
    vector<int> res = sol.MisMatch(a);
    for(int i : res){
        cout<<i<<" ";
    }
}