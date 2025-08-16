#include<iostream>
#include<vector>
using namespace std;

int Binary(vector<int>&a,int tar,int st,int ed){
    if(st<=ed){
        int mid = st+(ed-st)/2;
        if(a[mid] == tar) return mid;
        else if(a[mid]<=tar) {
            return Binary(a,tar,mid+1,ed);
        }
        else{
            return Binary(a,tar,st,mid-1);
        }
    }
    return -1;
}

int main(){
    vector<int> a = {1,2,3,4,14};
    cout<<Binary(a,1,0,a.size()-1);
}

//Time Complexity is O(log n)
//Space Complexity is O(log n)