#include<iostream>
#include<vector>

using namespace std;

void Dupli(vector<int> &a){
    int i =0;
    int correctInd = a[i] -1;
    while(i<a.size()){
        if(a[i]!=a[correctInd] && a[i]<a.size()){
            swap(a[i],a[correctInd]);
        }
        else{
            i++;
        }
    }

    for(int i=0;i<a.size();i++){
        if(i+1 != a[i]){
            cout<<"Duplicate Found"<<a[i]<<endl;
        }
    }
}
int main(){

    vector<int> arr = {1,3,2,2,1};
    Dupli(arr);
    for(int i : arr){
        cout<<i<<" ";
    }
}