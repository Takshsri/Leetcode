#include<iostream>
using namespace std;
void find(int a[],int n){
    int AllXor=0,RemaiinXor=0;
    for(int i=0;i<n;i++){
        AllXor ^=a[i];
    }
    for(int i=1;i<n;i++){
        RemaiinXor^=a[i];
    }
    cout<< (AllXor^RemaiinXor);

    cout<< (AllXor^RemaiinXor)+1;


}
int main(){
    int a[]={1,3,1,4};
    int n=sizeof(a)/sizeof(a[0]);
    find(a,n);
    
}