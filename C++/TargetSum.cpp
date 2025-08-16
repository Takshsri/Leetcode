//using 2 pointer Technique we can get the target Sum
//Here we are keeping 2 pointers one on first and other on last of the array and keep traversing for target SUm  
/*
#include<iostream>
#include<vector>
using namespace std;


vector<int> PairSum(vector<int> arr, int target){
    int left = 0;
    int right = arr.size() - 1;
    vector<int> res ;
    while (left <= right){
        int sum = arr[left] + arr[right];
        if ( sum == target ){
            res.push_back (left);
            res.push_back (right);
            break;

        }
        else if (sum > target ){
            right--;
        }
        else {
            left++;
        }
    }
    return res;
}

int main(){
    vector<int> arr= {2,3,4,5};
    int target= 5;
    vector<int> res= PairSum(arr, target);
    for(int i: res){
        cout<< i <<"\t";
    }
}

*/



//we can even combine 2 sorted into the Single Array using 2 pointer technique but here
//placing 2 pointers as one place

#include<iostream>
#include<vector>
using namespace std;

vector<int> Combine(vector<int> a ,vector<int> b){
    vector<int> res;
    int i=0,j=0;
    while( i < a.size() && j < b.size() ){
        if( a[i] <= b[j] ){
            res.push_back(a[i]);
            i++;
        }
        else{
            res.push_back(b[j]);
            j++;
        }
    }
    while(i<a.size()){
        res.push_back(a[i]);
        i++;
    }

    while(j < a.size()){
        res.push_back(b[j]);
        j++;
    }
     return res;

}

int main(){
    vector<int> arr1 = {2,3,4,5};
    vector<int> arr2 =  {1,7,8,9};
    vector<int> res= Combine(arr1, arr2);
    for(int i: res){
        cout<< i <<"\t";
    }
}
