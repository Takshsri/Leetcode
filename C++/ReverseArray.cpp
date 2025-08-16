#include<iostream>
using namespace std;
void reverse(int a[],int n){
    int st=0,end=n-1;
    while(st<end){
        int temp=a[st];
        a[st]=a[end];
        a[end]=temp;
        st++;
        end--;
    }
}
int main(){
    int a[]={2,3,4,5};

    int n=sizeof(a)/sizeof(a[0]);

    cout<<("\nOringinal Array:\n");
        for(int i=0;i<n;i++){
            cout<<a[i]<<"\t";
        }
        reverse(a,n);

        cout<<("\nAfter Reversing Array:\n");

        for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}