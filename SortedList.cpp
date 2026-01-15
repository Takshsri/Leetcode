#include<iostream>
#include<vector>

using namespace std;

vector<int> Sorted(vector<int>& a){
    int n = a.size();
    int left = 0,right = n-1;
    int idx = n-1;
    vector<int> res(n);
    while(left <= right){
        if(abs(a[left])> abs(a[right])){
            res[idx] = a[left] * a[left];
            left++;
        }
        else{
            res[idx] = a[right] * a[right];
            right --;
        }
        idx --;
    }
    return res;
}
int main(){
    vector<int> a = {-9,-2,0,1,2};
    vector<int> res = Sorted(a);
    for(int i : res){
        cout<<i<<" ";
    }
}