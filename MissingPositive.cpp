#include<iostream>
#include<vector>
using namespace std;

int positive(vector<int>& a){
    for(int i=0;i<a.size();i++){
        while(a[i]> 0 && a[i]<=a.size() && a[a[i]-1]!=a[i]){
            swap(a[i],a[a[i]-1]);
        }
    }

    for(int i =0;i<a.size();i++){
        if(a[i]!=i+1){
            return i+1;
        }
    }
    return a.size()+1;
}


int main(){
    vector<int> a = {3,4,1,-1};
    cout<<positive(a);
}