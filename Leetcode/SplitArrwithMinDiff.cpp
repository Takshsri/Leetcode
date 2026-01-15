#include<iostream>
#include<vector>
using namespace std;
int minDiff(vector<int>& a){
    int n = a.size();
    if(n<2) return -1;
    vector<bool> inc(n,false);
    inc[0] = true;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1] && inc[i-1]) inc[i] = true;
        else break;
    }

    vector<bool> dec(n,false);
    dec[n-1] = true;
    for(int i=n-2;i>=0;i--){
        if(a[i]>a[i+1] && dec[i+1]) dec[i] = true;
        else break;
    }

    vector<long long> prefixSum(n,0),suffixSum(n,0);
    prefixSum[0] = a[0];
    for(int i=1;i<n;i++){
        prefixSum[i] = prefixSum[i-1] + a[i];
    }
    suffixSum[n-1] = a[n-1];

    for(int i= n-2;i>=0;i--){
        suffixSum[i] = suffixSum[i+1] + a[i];
    }

    long long ans = LLONG_MAX;
    for(int i=0;i<n-1;i++){
        if(inc[i] && dec[i+1]){
            long long left = prefixSum[i] ;
            long long right = suffixSum[i+1];
            ans = min(ans,abs(left-right));
        }
    }

    return (ans == LLONG_MAX)? -1 : (int)ans;


}

int main(){
    vector<int> a = {1,3,2};
    cout<<minDiff(a);
}