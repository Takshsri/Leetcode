#include<iostream>
#include<string>
using namespace std;

bool Identical(string s1,string s2){
    if(s1.size() != s2.size()) return false;
    if(s1==s2) return false;
    string combined = s1 + s1;
    if(combined.find(s2)!= string :: npos){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s1 = "abcde";
    string s2 = "cdeab";
    cout<<Identical(s1,s2);
}