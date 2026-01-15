#include<iostream>
#include<vector>
using namespace std;
int Trap(vector<int> &a){
    int l =0;
    int r = a.size()-1;
    int rMax = 0;
    int lMax = 0;
    int ans = 0;
    while(l<r){
        lMax = max(lMax,a[l]);
        rMax = max(rMax,a[r]);
        if(a[l]<a[r]){
            ans += (lMax-a[l]);
            l++;
        }
        else{
            ans += (rMax - a[r]);
            r--;
        }


    }
    return ans;
}

int main(){
    vector<int> a = {4,2,0,3,5};
    cout<<Trap(a);
}