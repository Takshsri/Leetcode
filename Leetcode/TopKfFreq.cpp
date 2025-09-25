#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution{
    public:
        vector<int> topK(vector<int> &a,int k){
            unordered_map<int,int> freq;
            for(int i:a){
                freq[i]++;
            }
            vector<vector<int>> bucket(a.size()+1);
            for(auto &[num,count]:freq){
                bucket[count].push_back(num);
            }

            vector<int> res;
            for(int i=bucket.size()-1;i>=0 && res.size()<k;i--){
                for(int num:bucket[i]){
                    res.push_back(num);
                    if(res.size()==k){
                        break;
                    }

                }
            }
            return res;

        }

};
int main(){
    vector<int> nums = {1,1,1,2,2,3};
    Solution sol;
    vector<int> res = sol.topK(nums,1);
    for(int i:res){
        cout<<i<<"\t";
    }

}