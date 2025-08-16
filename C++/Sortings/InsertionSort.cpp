#include<iostream>
#include<vector>

using namespace std;

void InsertionSort(vector<int> &arr){
    for(int i=1;i<arr.size();i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;

    }
}
int main(){
    vector<int> arr = {33,56,7,12,3};
     cout << "Before Sorting Array is: ";
    for(int i : arr){
        cout << i << "\t";
    }

    InsertionSort(arr);

    cout << "\nAfter Sorting Array is: ";
    for(int i : arr){
        cout << i << "\t";
    }
}