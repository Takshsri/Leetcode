#include<iostream>

using namespace std;
long Factorial(long a,long b){
    long  fact =0;
    while(b!=0){
        fact +=a;
        b--;
    }
    return fact;
}
long long factorial(long long a,long long b){
    long long res =0;
    while(b>0){
        if(b&1){
            res+=a;
        }
        a <<= 1;
        b >>= 1;
    }
    return res;

}
int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    long long  fact = 1;
    for(int i=1;i<=n;i++){
        fact = factorial(i,fact);
    }
    cout<<fact;
}