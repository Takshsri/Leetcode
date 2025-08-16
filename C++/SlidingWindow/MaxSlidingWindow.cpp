//leetcode hard sum 239
#include<iostream>
#include<deque>
#include<vector>

using namespace std;
class Solution{
    public:
        vector<int> solve(vector<int> nums,int k){
            
            int size = nums.size();
            deque<int> arr;
            vector<int> result;
            for(int r=0;r<size;r++){
                while(!arr.empty() && nums[arr.back()] < nums[r]){
                        arr.pop_back();
                }
                arr.push_back(r);

                if(arr.front() <= r-k){
                    arr.pop_front();
                }

                if(r>=k-1){
                    result.push_back(nums[arr.front()]);
                }
            }
           
            return result;

        }

};
int main(){
    vector<int> nums = {1,2,3,4,5};
    int k = 3;
    Solution sol;
    vector<int> res = sol.solve(nums,k);
    for(int i : res){
        cout<<i<<"\t";
    }

}