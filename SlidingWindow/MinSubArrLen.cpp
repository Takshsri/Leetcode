//Minimum SubArray Length by giving target

#include<iostream>
#include<vector>
using namespace std;

int MinSubArr(vector<int>& a,int target){
    int start =0;
    int sum =0;
    int mini = INT_MAX;
    for(int end=0;end<a.size();end++){
        sum+=a[end];
        while(sum>=target){
            mini = min(mini,end-start+1);
            sum-= a[start++];
        }


    }
    return (mini == INT_MAX) ? 0:mini;
}

int main(){ 
    vector<int> a = {1,2,3,4,5};
    cout<<MinSubArr(a,12);
}