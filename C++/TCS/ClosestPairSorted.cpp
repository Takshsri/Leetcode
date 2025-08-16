#include<iostream>
#include<vector>
using namespace std;

vector<int> Closest(vector<int> &a,vector<int>& b,int x){
    vector<int> res;
    int l=0,r=b.size()-1;
    int diff = INT_MAX;
    int left ,right;
    int n= a.size(),m= b.size();
    while(l<n && r>=0){
        if(abs(a[l]+b[r]-x)<diff){
            left = l;
            right = r;
            diff = abs(a[l]+b[r]-x);
        }
        else if(a[l]+b[r]<x){
            l++;
        }
        else{
            r--;
        }

    }
   res.push_back(a[left]);
   res.push_back(b[right]);
   return res;



}
int main(){
    vector<int> a = {1,4,5,7};
    vector<int> b = {10,20,30,40};
    vector<int> res = Closest(a,b,38);
    for(int i :res){
        cout<<i<<" ";
    }
}