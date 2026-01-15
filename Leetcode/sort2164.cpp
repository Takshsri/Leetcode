#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*You are given a 0-indexed integer array nums. Rearrange the values of nums according to the following rules:

Sort the values at odd indices of nums in non-increasing order.
For example, if nums = [4,1,2,3] before this step, it becomes [4,3,2,1] after. The values at odd indices 1 and 3 are sorted in non-increasing order.
Sort the values at even indices of nums in non-decreasing order.
For example, if nums = [4,1,2,3] before this step, it becomes [2,1,4,3] after. The values at even indices 0 and 2 are sorted in non-decreasing order.
Return the array formed after rearranging the values of nums.

*/
void sortId(vector<int>& a){
    int n = a.size();
    vector<int> even,odd;
    for(int i=0;i<n;i++){
        if(i%2==0) even.push_back(a[i]);
        else odd.push_back(a[i]);
    }

    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end(),greater<int>());
    for(int i=0;i<n;i++){
        if(i%2==0) a[i] = even[i/2];
        else a[i]= odd[i/2];
    }

}

int main(){
    vector<int> a = {4,1,2,7};
    sortId(a);
    for(int i : a){
        cout<<i<<" ";
    }
} 