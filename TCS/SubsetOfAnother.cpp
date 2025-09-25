#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool Subset(vector<int>& a ,vector<int>& b){
    unordered_set<int> temp(a.begin(),a.end());
    for(int i : b){
        if(temp.find(i) == temp.end()){return false;}
    }
    return true;
}

int main(){
    vector<int> a = {1,23,4,6,78,9};
    vector<int> b = {23,4,6};
    cout<<Subset(a,b);
}