#include<iostream>
#include<vector>
using namespace std;
void WaveArr(vector<int> &a){
    if(a.size()==1) return ;
    for(int i=0;i+1<a.size()-1;i+=2){
        
            if(a[i]<a[i+1]){
                swap(a[i],a[i+1]);
            }
        

    }
}
int main(){
    vector<int> arr={1,5,6,7,8};
    cout<<"Before Wave Array:";
    for(int i : arr){
        cout<<i<<"\t";
    }
    cout<<endl;

    WaveArr(arr);
     cout<<"After Wave Array:";
    for(int i : arr){
        cout<<i<<"\t";
    }

}