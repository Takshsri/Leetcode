#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b){
    int temp =*a ;
    *a= *b;
    *b = temp;
}
void SelectionSort(vector<int> &arr){
   for(int i=0;i<arr.size();i++){
        int min = i;
        for(int j=i+1;j<arr.size();j++){
        if(arr[j]<arr[min]){
            min = j;
        }

    }
       if(min!=i){
            swap(&arr[i],&arr[min]);
        } 
   }
}

int main(){
    vector<int> arr = {23,4,12,56,78};
     cout << "Before Sorting Array is: ";
    for(int i : arr){
        cout << i << "\t";
    }

    SelectionSort(arr);

    cout << "\nAfter Sorting Array is: ";
    for(int i : arr){
        cout << i << "\t";
    }
}