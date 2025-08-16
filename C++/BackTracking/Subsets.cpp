#include<iostream>
#include<vector>

using namespace std;
//Time Complexity is O(2^n * n)

void subsets(vector<int>& a,vector<int>&res,int i){
    if(i == a.size()){
        for(int i : res){
            cout<<i<<" ";
        }
        cout<<endl;
        return ;
    }
    res.push_back(a[i]);
    subsets(a,res,i+1);
    res.pop_back();
    subsets(a,res,i+1);
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> res;
    subsets(arr,res,0);
}