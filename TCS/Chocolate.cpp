#include<iostream>
#include<vector>

using namespace std;

void choco(vector<int>& a){
    if(a.size()<=0) return ;
     int pos =0;
     for(int i=0;i<a.size();i++){
        if(a[i]!=0){
            swap(a[i],a[pos]);
                pos++;
        }
     }
}
int main(){
    vector<int> arr = {1,0,4,3,2};
    for(int i :arr){
        cout<<i<<"\t";
    }
    choco(arr);
    cout<<endl;
    for(int i :arr){
        cout<<i<<"\t";
    }

}