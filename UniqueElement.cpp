#include<iostream>
using namespace std;
int Unique(int a[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=a[i];
    }
    return ans;
}
int main(){
    int a[]={1,2};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<Unique(a,n);
}