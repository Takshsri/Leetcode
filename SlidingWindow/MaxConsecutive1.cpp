#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int MaxOnes(vector<int> &a){
        int count = 0;
        int maxCount =0;
        for(int i : a){
            if(i==0) count++;
            else count =0;

            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
};

int main(){
    vector<int> a = {1,1,0,1,0,0,1};
    Solution sol;
    cout<<sol.MaxOnes(a);
}