#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> MaxNum(vector<int>& a, int k){
    deque<int> dq;
    vector<int> res;
    for(int i=0;i<a.size();i++){
        // Remove elements out of this window

        if(!dq.empty() && dq.front()<=i-k)
            dq.pop_front();
        // Remove all elements smaller than current element (a[i])

        while(!dq.empty() && a[dq.back()]<=a[i])
            dq.pop_back();
        dq.push_back(i);
        // The front of deque is the max element for the current window

        if(i>=k-1)
            res.push_back(a[dq.front()]);


    }
    return res;
}

int main(){
    vector<int> a = {23,7,-1,3,4,-7};
    int k= 3;
    vector<int> res = MaxNum(a,k);
    for(int i : res){
        cout<<i<<" ";
    }
}