#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a = {1,2,3,4};
    vector<int> prefix(a.size());
    prefix[0] = a[0];
    for(int i=1;i<a.size();i++){
        prefix[i] = prefix[i-1]+a[i];
    }
    for(int i : prefix){
        cout<<i<<" ";
    }

}
