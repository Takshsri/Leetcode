#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;
class Solution{
     public:
     vector<int> RemoveDupli(vector<int>& a){
        unordered_set<int> res(a.begin(),a.end());
        vector<int> arr(res.begin(),res.end());
        return arr;
        

     }

};
int main(){
    vector<int> a = {1,2,2,3,4,4};
    Solution sol ;
    vector<int> res = sol.RemoveDupli(a);
    for(int i : res){
        cout<<i<<"\t";
    }

}