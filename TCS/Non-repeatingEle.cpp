//Task is to find the first non repeating element

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> Rotate(vector<int>& a,int k){
    if(a.size()== 1 || a.size() ==0) return a;
    int n = a.size();
    k = k%n;
    int i=0,j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++,j--;
    }
     i=0,j=k-1;
    while(i<j){
        swap(a[i],a[j]);
        i++,j--;
    }
    i=k,j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++,j--;
    }
     
     return a;
}
int NonRepeat(vector<int>& a){
    if(a.size()==0) return -1;
    unordered_map<int,int> map;
    for(int i=0;i<a.size();i++){
        map[a[i]]++;
    }
    for(int i=0;i<a.size();i++){
        if(map[a[i]]==1) return a[i];
    }
    return -1;
}

int main(){
    vector<int> a = {23,4,5,23,5,4};
   // cout<<NonRepeat(a);
    vector<int> b = {1,2,3,4,5,6};
    vector<int> res = Rotate(b,3);
    for(int i : res){
        cout<<i<<" ";
    }
}