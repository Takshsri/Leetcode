#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int PairPartition(vector<int> &a){
    sort(a.begin(),a.end());
    int n = a.size()/2;
    int sum=0;
    for(int i=0;i<a.size();i+=2){
        sum+=a[i];
    }
    return sum;
}
int main(){

    vector<int> arr ={6, 2, 6, 5, 1, 2};
    cout<<PairPartition(arr);
}