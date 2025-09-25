#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Move(vector<int> &a){
    int i=0,j=0;
   while(i<a.size()){
    if(a[i] == 0){
        i++;
    }
    else{
        swap(&a[i],&a[j]);
        j++;
        i++;
    }
   }
}
int main(){
    vector<int> arr = {1,0};

    for(int i : arr){
        cout<<i<<"\t";
    }
    cout<<endl;
    Move(arr);
    for(int i : arr){
        cout<<i<<"\t";
    }

}