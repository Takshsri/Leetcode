#include<iostream>
#include<string>
#include<vector>
using namespace std;

string LongestPrefix(vector<string> &a){
   if(a.empty()) return "";
   string prefix = a[0];
   for(int i=0;i<a.size();i++){
    while(a[i].find(prefix)!=0){
        prefix = prefix.substr(0,prefix.length()-1);
        if(prefix.empty())return "";
        
    }
   }
   return prefix;
}
int main(){
    vector<string> a = {"flower","flow","flight"};
    cout<<LongestPrefix(a);
}