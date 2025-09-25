#include<iostream>
#include<vector>
using namespace std;

int Min(vector<int>& a){
    int left = 0;
    int right = a.size()-1;
    while(left<right){
        int mid = left + (right - left)/2;
        if(a[mid]>a[right]) left = mid+1;
        else if(a[mid]<a[right]) right = mid;
        else right --;
    }
    return a[left];
}
int main(){
    vector<int> a = {4,5,6,9,9,10,1,2,2};
    cout<<Min(a);
}