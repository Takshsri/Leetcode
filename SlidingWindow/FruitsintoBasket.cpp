#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution{
    public:
        int Fruits(vector<int> &a){
            int left = 0,maxLen=0;
            unordered_map<int,int> freq;
            for(int right=0;right<a.size();right++){
                freq[a[right]]++;
                while(freq.size()>2){
                    freq[a[left]]--;
                    if(freq[a[left]]==0){
                        freq.erase(a[left]);
                        
                    }left++;
                }
                maxLen = max(maxLen,right-left+1);
            }
            return maxLen;
        }

};
int main(){

    vector<int> a={1,2,1,3,3,4};
    Solution sol;
    cout<<sol.Fruits(a);

}