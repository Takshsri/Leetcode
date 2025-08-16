#include<iostream>
using namespace std;
void printArray(int a[],int n){
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}

void Swap(int a[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(a[i],a[i+1]);
        }
    }
}
int main(){
    int a[]={2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Original";
    printArray(a,n);
    Swap(a,n);
    printArray(a,n);
    return 0;
}