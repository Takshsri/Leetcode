#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

class Solution{
    public:
        int subStr(string str){
            int n = str.size();
            if(n<3) return 0;
            int count =0;
            for(int i=0;i<n-3;i++){
                unordered_set<char> window;
                window.insert(str[i]);
                window.insert(str[i+1]);
                window.insert(str[i+2]);
                if(window.size()==3) count++;

            } 
            return count;
        }

};

int main(){
    string str="xyzzaz";
    Solution sol;
    cout<<sol.subStr(str);
}