#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long xorAll = 0;
        for(int i : nums) xorAll^=i;

        long diff = xorAll & (-xorAll);
        int a =0,b=0;
        for(int i : nums){
            if(i & diff) a^=i;
            else b^=i;

        }
        return {a,b};
    }
};

int main(){
    vector<int> a = {1,2,1,3,2,5};
    Solution sol;
    vector<int> res = sol.singleNumber(a);
    for(int i : res){
        cout<<i<<" "; 
    }
}