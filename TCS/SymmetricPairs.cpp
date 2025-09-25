#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<vector<int>> Pairs(vector<vector<int>>& a){
    int n= a.size();
    vector<vector<int>> res;
    unordered_map<int,int> hash;
    for(int i=0;i<a.size();i++){
        int first = a[i][0];
        int second = a[i][1];
        if(hash.find(second)!= hash.end() && hash[second] == first){
            res.push_back({second,first});
        }
        else{
            hash[first] = second;
        }
    }
    return res;
}

int main(){
    vector<vector<int>> a = {{5,8},{7,9},{8,5},{9,7},{6,10}};
    vector<vector<int>> res = Pairs(a);
    for(auto& pair:res){
        cout<<pair[0]<<"  " <<pair[1]<<"  ";
        cout<<endl;
}
}