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
int main(){
    vector<int> a = {2,4,5,6,7,8,9};
    int k = 4;
    cout<<SubArray(a,k)<<endl;
    cout<<"Average of SubArray:"<<SubArray(a,k)/k;
}