#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void NextPermutation(vector<int> & a){
    int pivot = -1;
    int n = a.size();
    for(int i= n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        reverse(a.begin(),a.end());
        return;
    }
    for(int i= n-1;i>pivot;i--){
        if(a[i]>a[i+1]){
            swap(a[i],a[pivot]);
            break;
        }
    }
    int i = pivot-1,j=n-1;
    while(i<=j){
        swap(a[i++],a[j--]);
    }
}
int main(){
    vector<int> a = {0,0,1};
    NextPermutation(a);
    for(int i : a){
        cout<<i<<"\t";
    }
}