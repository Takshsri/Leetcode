#include<iostream>
#include<vector>
using namespace std;
void ReverseArray(vector<int> &a,int k){
    int n= a.size();
    k= k%n;
    int i=0,j= n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++,j--;
    }
    i=0,j=k-1;
    while(i<j){
        swap(a[i],a[j]);
        i++,j--;
    }

    i=k,j=a.size()-1;
    while(i<j){
        swap(a[i],a[j]);
        i++,j--;
    }

}
int main(){
    vector<int> a = {1,2,3,4,5,6};
    ReverseArray(a,4);
    for(int i : a){
        cout<<i<<" ";
    }
}