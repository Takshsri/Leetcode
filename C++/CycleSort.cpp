#include<iostream>
#include<vector>

using namespace std;

void CycleSort(vector<int> &a){
    int i=0;
    while(i<a.size()){
        if(a[i] != a[a[i]]){
            swap(a[i],a[a[i]]);
        }
        else{
            i++;
        }
    }

}

int main(){

    vector<int> a  {1,5,6,2,3,4,0};
    cout<<"Before Swapping :"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    CycleSort(a);
    cout<<"After Swapping :"<<endl;
     for(int i:a){
        cout<<i<<" ";
    }

}