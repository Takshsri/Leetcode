#include<iostream>
#include<vector>

using namespace std;
class Solution{
    public:
    void getPerms(vector<int> &a,int idx,vector<vector<int>> &ans){
        if(idx == a.size()){
            ans.push_back({a});
            return;
        }
        for(int i=idx;i<a.size();i++){
            swap(a[idx],a[i]);
            getPerms(a,idx+1,ans);
            swap(a[idx],a[i]);
        }
    }
    vector<vector<int>> Permu(vector<int> &a){
        vector<vector<int>> ans ;
        getPerms(a,0,ans);


        return ans;
    }



};
int main(){

    vector<int> a = {1,1,3};
    Solution sol;
    vector<vector<int>> res = sol.Permu(a);
    for(auto &row : res){
        for(auto &col : row){
            cout<<col <<" ";
        }
        cout<<endl;
    }
}