#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
bool IsValid(vector<int> &a,int n,int m,int Array){
    int st =1;
    int ans =0;
    for(int i=0;i<n;i++){
        if(a[i]>Array){
            return false;
        }
        if(ans + a[i]<=Array){
            
            ans += a[i];
        }
        else{
            st++;
            ans = a[i];
        }
    }
    return (st<=m);
}
int Allocation(vector<int> &a,int n,int m){
    if(m>n){
        return -1;
    }
    int low = *max_element(a.begin(),a.end());
    int high = accumulate(a.begin(),a.end(),0);

    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(IsValid(a,n,m,mid)){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> a = {1,2,3,4,5};
    int n = a.size();
    int m = 2;
    cout<<Allocation(a,n,m);
}