//Unique Number of Ocuurences
#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){
    int a[]={1,2};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    vector<int>res;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    int count=1;
    cout<<"\n";
    for(int i=1;i<n;i++){
        
        if(a[i-1]==a[i]){
            count++;
        }
        else{
            res.push_back(count);
            count=1;
        }
    }
    res.push_back(count);

    for(int i:res){
        cout<<i<<"\t";
    }
    unordered_set<int>unique(res.begin(),res.end());
    bool isUnique=(unique.size()==res.size());
    cout<<"\n"<<isUnique;
}