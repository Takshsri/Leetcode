#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
int distint(vector<int> &a,int k){
    if(a.size() <1) return -1;
    unordered_map<int,int> res;
    for(int i : a){
        res[i]++;
        
    }
   
   for(int i : a){
    cout<<i<<endl;
    if(res[i] == 1){
        k--;
    
    if(k==0){
        return i;
    }
   }
}

    return -1;
}
int main(){
    vector<int> arr = {2,3,1,3,4};
    cout<<distint(arr,2);
}