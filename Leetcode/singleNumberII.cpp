#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res =0;
        for(int bit = 0;bit<32;bit++){
            int count =0 ;
            for(int i : nums){
                if(i >> bit & 1) count++;
            }

            if(count %3!=0){
                res |=(1<<bit);
            }
        }
        return res;
    }
};

int main(){
    Solution sol;
    vector<int> a= {2,3,2,2};
    cout<<sol.singleNumber(a);
}