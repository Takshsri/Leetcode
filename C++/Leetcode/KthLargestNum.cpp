//Kth Largest Num using Quick Sort because its time complexity is very less compared
// to less and it can be solve without sorting
//

#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(vector<int> &a,int l,int u){
    int pivot = a[u];
    int i=l;
    for(int j=l;j<u;j++){
        if(a[j]>pivot){
            swap(&a[i],&a[j]);
            i++;
        }
    }
    swap(&a[i],&a[u]);
    return i;
}
int quickselect(vector<int> &a ,int k,int l,int u){
    if(l<=u){
        int pi = partition(a,l,u);
        if(pi == k-1){
            return a[pi];
        }
        else if(pi >k-1){
            return quickselect(a,k,l,pi-1);
        }
        else{
            return quickselect(a,k,pi+1,u);
        }
    }
    return -1;
}
int main(){
    vector<int> a ={3,2,1,5,6,4};
    for(int i: a){
        cout<<i<<"\t";
    }
    cout<<endl;
   cout<< quickselect(a,3,0,a.size()-1);
}