//You are given two arrays A and B of the same length n.
// Your task is to rearrange the elements of array B such that the 
//sum of absolute differences between A[i] and B[i] is minimized.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Sum(vector<int> &a,vector<int> &b){
    int n = a.size();
    if(n!= b.size() ){
        cout<<"Array must be of same length"<<endl;
        return -1;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int sum =0;
    for(int i= 0;i<n;i++){
        sum += abs(a[i]-b[i]);
    }
    return sum;


}
int main(){
    vector<int> a = {1,3,5};
    vector<int> b = {2,4,6};
    cout<<Sum(a,b);
}