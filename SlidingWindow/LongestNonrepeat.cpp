#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;
class Solution{
    public:
        int Longest(string s){
            int left =0,maxCount =0;
            unordered_set<char> window;
            for(int right =0;right<s.size();right++){
                while(window.find(s[right])!=window.end()){
                    window.erase(s[left]);
                    left++;
                }
                window.insert(s[right]);
                maxCount = max(maxCount,right-left+1);

            }
            return maxCount;
        }
};

int main(){
    string s = "abcabcbb";
    Solution sol;
    cout<<sol.Longest(s);
} 