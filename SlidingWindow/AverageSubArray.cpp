#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        double Average(vector<int> &a,int k){
            int sum =0,maxSum =0;
            for(int i=0;i<k;i++){
                sum+=a[i];
            }
            maxSum = max(maxSum,sum);
            for(int i=k;i<a.size();i++){
                sum+= a[i]-a[i-k];
                maxSum = max(sum,maxSum);
            }
            return (double) maxSum/k;
        }
};
int main(){

    vector<int> a = {56,7,-1,34,4};
    int k = 2;
    Solution sol;
    cout<<sol.Average(a,k);

}