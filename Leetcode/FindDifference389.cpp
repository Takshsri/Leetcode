#include<iostream>
#include<string>
using namespace std;

char findDfiff(string s,string t){
    char res = 0;
    for(char ch : s){
        res ^= ch;
    }
    for(char ch : t){
        res ^= ch;
    }
    return res;
}

int main(){
    string s = "abcd";
    string r = "abcde";
    cout<<findDfiff(s,r);
}