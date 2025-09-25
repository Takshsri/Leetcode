#include<iostream>
#include<vector>
using namespace std;

int Idx(vector<int>& a){

    int total =0,prefSum=0;
    for(int i : a) total += i;
    for(int i=0;i<a.size();i++){
        int sufSum = total - prefSum - a[i];

        if(prefSum == sufSum) return i;

        prefSum+=a[i];
    }
    return -1;
}

int main(){
    vector<int> a = {1,7,3,6,5,6};
    cout<<Idx(a);
}