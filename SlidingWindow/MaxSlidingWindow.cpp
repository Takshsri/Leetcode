//leetcode hard sum 239
#include<iostream>
#include<deque>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;
class Solution{
    public:
        vector<int> solve(vector<int> nums,int k){
            
            int size = nums.size();
            deque<int> dq;
            vector<int> result;
            for(int r=0;r<size;r++){
                while(!dq.empty() && nums[dq.back()] < nums[r]){
                        dq.pop_back();
                }
                dq.push_back(r);

                if(dq.front() <= r-k){
                    dq.pop_front();
                }

                if(r>=k-1){
                    result.push_back(nums[dq.front()]);
                }
            }
           
            return result;

        }

};
bool isVowel(char ch){
    return (ch=='a' ||ch=='e'||ch=='i' || ch=='o' || ch =='u');
}
int Vowels(string s,int k){
    int count = 0;
    
    for(int i=0;i<k;i++){
        if(isVowel(s[i])) count++;
    }
    int maxCount = count;
    for(int i=k;i<s.size();i++){
        if(isVowel(s[i-k])) count--;
        if(isVowel(s[i])) count++;
        maxCount = max(maxCount,count);
    }
    return maxCount;

}

int longest(string s){
    int left =0,maxCount =0;
    unordered_set<char>window;
    for(int i=0;i<s.size();i++){
        while(window.find(s[i])!=window.end()){
            window.erase(s[left]);
            left++;
        }
        window.insert(s[i]);
        maxCount = max(maxCount,i-left+1);
    }
    return maxCount;

}
int main(){
    vector<int> nums = {1,-1};
    int k = 1;
    Solution sol;
   // vector<int> res = sol.solve(nums,k);
    
    //for(int i : res){
     //   cout<<i<<"\t";
    //}

    cout<<longest("thisisalongx");


}