#include<iostream>
#include<vector>
using namespace std;
void DutchFlag(vector<int>& a){
    int low=0,mid=0;
    int high = a.size()-1;
    while(mid<=high){
        if(a[mid]==0){
            swap(a[mid],a[low]);
            mid++;
            low++;
        }
        else if(a[mid]==1) mid++;
        else if (a[mid]==2){
            swap(a[mid],a[high]); 
            high--;
        }
        

    }
}
int main(){
    vector<int> arr = {2,0,1,1,2,0};
    cout<<"Before SOrting Elements are:"<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }
    DutchFlag(arr);
    cout<<endl<<"After SOrting Elements are:"<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }
    
}