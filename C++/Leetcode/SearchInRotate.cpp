
//For no duplicates 
/*
#include<iostream>
#include<vector>

using namespace std;

bool Search(vector<int> a,int key){
   int left =0;
   int right = a.size() -1;
   while(left <= right){
        int mid = (left + right) /2;

        if(a[mid] == key) return true;

        if(a[left] <= a[mid]){
            if(key >= a[left] && key < a[mid]){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        else{
            if(key > a[mid] && key <= a[right]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
   }
   return a[left] == key ? true : false;
         
}
int main(){
    vector<int> a ={1,0,1,1,1};
    int res = Search(a,0);
    if(res ){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}
    */


//for duplicates and rotated array
#include<iostream>
#include<vector>

using namespace std;

bool Search(vector<int> a,int target){
   int left =0;
   int right = a.size() -1;
   while(left <= right){
        int mid = (left + right) /2;

        if(a[mid] == target) return true;

       if(a[left] == a[mid] && a[mid]== a[right]){
        left++;
        right--;
       }
       else if(a[left]<=a[mid]){
        if(target >= a[left] && target < a[mid]){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
       }
       else{
        if(target >a[mid] && target<=a[right]){
            left =mid+1;
        }
        else{
            right = mid-1;
        }
       }
   }
   return false;
         
}
int main(){
    vector<int> a = {3, 1};
    int res = Search(a,1);
    if(res ){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}
