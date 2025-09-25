#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution{
    public:
    void getParams(vector<int> &a,int idx,vector<vector<int>> &ans){

        if(idx == a.size()){
            ans.push_back({a});
            return;
        }

        unordered_set<int> seen;

        for(int i=idx;i<a.size();i++){
            if(seen.count(a[i])) continue;
            seen.insert(a[i]);
            swap(a[i],a[idx]);
            getParams(a,idx+1,ans);
            swap(a[i],a[idx]);
        }

    }
    vector<vector<int>> Params(vector<int> &a){
        vector<vector<int>> ans;
        getParams(a,0,ans);
        return ans;
    }


};
int main(){

    vector<int> a = {1,1,3};
    Solution sol;
    vector<vector<int>> res = sol.Params(a);
    for(auto &rows :res){
        for(auto &cols : rows){
            cout<<cols<<" ";
        }
        cout<<endl;

    }
}