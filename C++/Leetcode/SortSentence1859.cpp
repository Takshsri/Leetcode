#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;


class Solution {
public:
    string sortSentence(string s) {
        string res="";
        map<int,string> str;
        string token;
        char delimiter = ' ';
        istringstream iss(s);
        while(getline(iss,token,delimiter)){
            int len = token.length();
            int pos = token[len-1] - '0';
            token.pop_back();
            str[pos] = token; 
        }
        for(auto pair : str){
            res += pair.second +" ";
        }
        if(!res.empty()){
            res.pop_back();
        }
        return res;

    }
};

int main(){
    string str = "is2 a3 This1 sentence4";
    Solution sol;
    string res = sol.sortSentence(str);
    cout<<res;
}