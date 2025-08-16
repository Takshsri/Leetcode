#include<iostream>
#include<vector>
using namespace std;
int divisiblePairs(vector<int>& a,int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])%k==0){
                cout<<a[i]<<"\t"<<a[j]<<endl;
                count++;
            
        }}
    }
    return count;
}
int main(){
    vector<int> a={1, 3, 2, 6, 1, 2};
    int n=a.size();
    int k=3;
    cout<<divisiblePairs(a,n,k);
}