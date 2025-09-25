#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>

using namespace std;

string DIstinct(vector<string> &s,int k){
    if(s.size() < k) return "";
    unordered_map<string,int> res;
    for(string i : s){
        res[i]++;
    }
    for(string i : s){
        if(res[i] == 1){
            k--;
            if(k==0){
                return i;
            }
        }
    }
    return "";


}

int main(){

    vector<string> arr = {"a","b","a"};
    cout<<DIstinct(arr,3);
}