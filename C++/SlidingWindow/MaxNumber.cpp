#include<iostream>
using namespace std;

int Window(int a[],int n,int w){

    int current = 0;
    for(int i=0;i<w;i++){
        current+=a[i];
    }

    int maxx = current;
    for(int i=1;i<=n-w;i++){
        current = current - a[i-1] + a[i+w-1];

        if(current > maxx){
            maxx = current;
        }

    }
    return maxx;
}
int main(){

    int a[] = {2,4,5,6,7,8,9};
    int n = 7;
    cout<<"The max Window Sum is :"<<Window(a,n,4);
}