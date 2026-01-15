//Maximum subarray SUm
//Fixed Sliding Window
/*
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
    */

#include<iostream>
#include<vector>
using namespace std;
int SubArray(vector<int> &a,int k){
    int maxSum = 0;
    int CurrSum = 0;
    vector<int> Arr(4);
    for(int i =0 ;i<k;i++){
        maxSum += a[i];
        Arr.push_back(a[i]);
    }
    CurrSum = maxSum;
    int startIdx = 0;
    for(int i=k;i<a.size();i++){
        maxSum += a[i] - a[i-k];
       if(maxSum > CurrSum){
            CurrSum = maxSum;
            startIdx = i - k + 1;
       }
         

    }
    cout<<"SubArray"<<endl;
    for(int i = startIdx;i<startIdx+k;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return CurrSum;

}
int Sum(vector<int> &a,int target){
    if(a.empty()) return -1;
    int sum =0,mini = INT_MAX,start = 0;
    for(int i=0;i<a.size();i++){
        sum += a[i];
        while(sum>=target){
            mini = min(mini,i-start+1);
            sum-= a[start++];
        }
    }
            return (mini == INT_MAX) ? -1 : mini;

}

int main(){
    vector<int> a = {4,2,5,-1,3,2,2};
    int k = 10;
    cout<<Sum(a,k)<<endl;
    //cout<<"Average of SubArray:"<<SubArray(a,k)/k;
}