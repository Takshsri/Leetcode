


#include<iostream>
#include<vector>

using namespace std;
void merge(vector<int> &a,int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    vector<int> b(a.size());

    while(i<=mid && j<=h){
        if(a[i]<=a[j]){
            b[k++] = a[i++];
        }
        else{
            b[k++] = a[j++];
        }
    }
    while(i<=mid){
        b[k++] = a[i++];
    }
    while(j<=h){
        b[k++] = a[j++];
    }

    for(int i=l;i<=h;i++){
        a[i] = b[i];
    }
}
void MergeSort(vector<int> &a,int l,int h){

    if(l<h){
        int mid = (l+h)/2;
        MergeSort(a,l,mid);
        MergeSort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}
int main(){
    vector<int> arr = {23,67,8,1,345};
    
     cout << "Before Sorting Array is: ";
    for(int i : arr){
        cout << i << "\t";
    }

    MergeSort(arr,0,arr.size()-1);

    cout << "\nAfter Sorting Array is: ";
    for(int i : arr){
        cout << i << "\t";
    }

}