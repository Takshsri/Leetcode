#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

class Solution{
public:
    vector<vector<int>> Elements(vector<int>&a){
        vector<vector<int>> res;
        if(a.empty()) return res;

        // Remove duplicates and sort
        unordered_set<int> track(a.begin(), a.end());
        vector<int> ans(track.begin(), track.end());
        sort(ans.begin(), ans.end());

        // Build ranges
        for(int i = 0; i < ans.size()-1; i++){
            if(i == 0) 
                res.push_back({ans[i], ans[i+1]-1});
            else    
                res.push_back({ans[i]+1, ans[i+1]-1});
        }

        return res;
    }
};

int main(){
    vector<int> a={3,90,5,7,22,50,66,78};
    Solution sol;
    vector<vector<int>> res = sol.Elements(a);

    for(auto &range : res){
        cout<<"[";
        for(int num : range){
            cout<<num<<" ";
        }
        cout<<"]\n";
    }
}
