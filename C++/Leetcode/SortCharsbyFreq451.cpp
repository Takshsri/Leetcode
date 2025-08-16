#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

string Freq(string s){
    if(s.empty() || s.size() == 1) return s;

    unordered_map<char,int> result;
    for(char ch : s){
        result[ch]++;
    }
    priority_queue<pair<int,char>> maxHeap;
    for(auto &pair : result){
        maxHeap.push({pair.second,pair.first});

    }
    string str;
    while(!maxHeap.empty()){
        auto[count,ch] =  maxHeap.top();
        maxHeap.pop();
        str.append(count,ch);
    }

    return str;

  

}

int main(){
    string s ="tree";
    cout<<Freq(s);
}