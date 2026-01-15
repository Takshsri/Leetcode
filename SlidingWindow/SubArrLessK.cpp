/*
 nums = [10,5,2,6], k = 100
Output: 8
Explanation: The 8 subarrays that have product less than 100 are:
[10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6]
Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k.
*/

#include<iostream>
#include<vector>
using namespace std;
int SubArray(vector<int>&a ,int k){
    int n = a.size();
    if(k <=1 ) return 0;
    long long  prod = 1;
    int count = 0;
    int left = 0;

    for(int right =0;right<n;right++){
        prod *= a[right];
        while(prod >= k){
            prod /= a[left];
            left++;
        }
        count +=(right-left+1);
    }
    return count;

}
int main(){

    vector<int> a = {10,5,2,6};
    int k = 100;
    cout<<SubArray(a,k);
}