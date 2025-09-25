#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int Sum(vector<int> &arr){
    int sum=0;
    for(int i=1;i<arr.size();i++){
        int res = arr[i] ^ arr[i-1];
        sum = max(sum,res);
    }
    return sum;
}
int main(){
    vector<int> a = {14,70,53,83,49,91,36,80,92,51,66,70};
    cout<<Sum(a);
}