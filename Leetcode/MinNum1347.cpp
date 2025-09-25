#include<iostream>
#include<string>
#include<vector>
using namespace std;

int maxNum(string s,string t){
    vector<int>freq(26,0);
    for(char ch: s){freq[ch-'a']++;}
    for(char ch : t){freq[ch-'a']--;}
    int count =0;
    for(int i : freq){
        if(i>0) count+=i;
    }
    return count;
}

int main(){
    string s= "ramya";
    string t = "ram";
    cout<<maxNum(s,t);
}