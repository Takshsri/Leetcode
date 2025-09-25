#include<iostream>
#include<vector>
using namespace std;
void BubbleSort(vector<int> &a){
    for(int i=0;i<a.size();i++){
        for(int j= i+1;j<a.size();j++){
                if(a[j] < a[i]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
        }
    }
}
int main(){
     vector<int> arr = {3, 1, 34, 67, 89};

    cout << "Before Sorting Array is: ";
    for(int i : arr){
        cout << i << "\t";
    }

    BubbleSort(arr);

    cout << "\nAfter Sorting Array is: ";
    for(int i : arr){
        cout << i << "\t";
    }

}
