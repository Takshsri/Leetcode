#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int Dupli(vector<int>& a){
    for(int i=0;i<a.size();i++){
        int idx =  abs(a[i]);
        if(idx>=a.size()) return -1;
        if(a[idx]<0) return idx;

        a[idx] =  -a[idx];
    }
    return -1; 
}
int main(){
    vector<int> a = { 1,4,3,4,2}; 
    cout<<Dupli(a);
}