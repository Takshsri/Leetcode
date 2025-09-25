#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
int Count(vector<int>& a ){
    int count = 1;
    int max = a[0];
    for(int i=1;i<a.size();i++){
        if(a[i]> max){
            count++;
            max = a[i];
        }

    }
    return count;
}

int Anagrams(string a,string b){
    if(a.empty() && !b.empty() ) return b.size();
    if(b.empty() && !a.empty()) return a.size(); 
    unordered_map<char,int> hash;
    for(char c : a){
        hash[c]++;
    }
    for(char c : b){
        hash[c]--;
    }
    int count =0;
    for(auto &entry : hash){
        count+= entry.second;
    }
    return count;
}
int main(){
    vector<int> a1 = {3,5,2,3,1};
   // cout<<Count(a);
    string a = "ramya";
    string b = "ram";
    cout<<Anagrams(a,b);
}