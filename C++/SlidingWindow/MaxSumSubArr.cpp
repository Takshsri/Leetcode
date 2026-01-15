//Maximum subarray SUm
//Fixed Sliding Window
#include<iostream>
#include<vector>
using namespace std;

int SubArray(vector<int>& a,int k){
    int maxSum = 0;
    int CurrentSum =0;
    for(int i=0;i<k;i++){
        maxSum+= a[i];
    }
     CurrentSum = maxSum;

    for(int i=k;i<a.size();i++){
        maxSum += a[i]-a[i-k];
        CurrentSum = max(CurrentSum,maxSum);
    }
    return CurrentSum;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    cout<<SubArray(arr,3);
}