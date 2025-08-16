#include<iostream>
using namespace std;
int bs(int a[],int st,int end,int target){
    while(st<=end){
        int mid=st+(end-st)/2;

        if(target==a[mid]){
            return mid;
        }
        if(target > a[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int find(int a[],int n,int target){
    int st=0;
    int end=1;
    while(target>a[end]){
        int temp=end+1;
        end=end+(end-st+1) * 2;
        st=temp;
    }
    return bs(a,st,end,target);
}


int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int n=sizeof(a)/sizeof(a[0]);
    int x=1;
    cout<<find(a,n,x);
}