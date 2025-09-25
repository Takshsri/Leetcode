#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int minDeletions(string s) {
        vector<int> hash(26,0);
        for(char ch : s){ hash[ch-'a']++;}
           
        unordered_set<int> visited;
       
        int count=0;
        for(int f : hash){
            while(f>0 && visited.count(f)){
                f--;
                count++;
            }
            if(f>0) visited.insert(f);
        }

            return count;
    }
};

int main(){
    string s = "aaabbcc";
    Solution sol;
    cout<<sol.minDeletions(s);
}