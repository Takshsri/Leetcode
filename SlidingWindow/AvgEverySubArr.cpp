/*
arr = [1, 12, -5, -6, 50, 3] and k = 4
Window 1 (Indices 0-3): 1 + 12 - 5 - 6 = 2. Average = 2 / 4 = 0.5.
Window 2 (Indices 1-4): currentSum = 2 + 50 - 1 = 51. Average = 51 / 4 = 12.75.
Window 3 (Indices 2-5): currentSum = 51 + 3 - 12 = 42. Average = 42 / 4 = 10.5



*/

#include<iostream>
#include<vector>
using namespace std;
vector<float> Avg(vector<int>& a,int k){
    int n = a.size();
    if(n<=0 || k<=0 || k>n) return {};
    vector<float> res;
    res.reserve(n-k+1);
    int currSum =0;
    for(int i=0;i<k;i++){
        currSum += a[i];
    }
    res.push_back((float)currSum/k);
    for(int i=k;i<n;i++){
        currSum += a[i]-a[i-k];
        res.push_back((float)currSum/k);

    }
    return res;

}
int main(){
    vector<int> a = {1,12,-5,-6,50,3};
    int k = 4;
    vector<float> res = Avg(a,k);
    for(float i : res){
        cout<<i<<" ";
    }
}