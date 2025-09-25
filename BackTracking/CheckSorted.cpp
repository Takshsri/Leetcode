#include<iostream>
#include<vector>
//Time Complexity is O(n);
using namespace std;
bool Sorted(vector<int>& a,int n){
    
    if(n ==0 || n==1) return true;
    return a[n-1]>= a[n-2] && Sorted(a,n-1);


}

int main(){
    vector<int> a = {2,3,14,5};
    cout<<Sorted(a,a.size());
}