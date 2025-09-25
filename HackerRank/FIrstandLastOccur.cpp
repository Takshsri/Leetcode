#include<iostream>
#include<vector>
using namespace std;
int FirstOccur(vector<int> a,int k){
    int st=0;
    int end=a.size()-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(a[mid] > k){
            end=mid-1;
        }
        else if(a[mid]==k){
            ans=mid;
            end=mid-1;
            
        }
        else if(a[mid]<k){
            st=mid+1;
        }
    }
    return ans;
}
int LastOccur(vector<int> a,int k){
    int st=0;
    int end=a.size()-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(a[mid]>k){
            end=mid-1;
        }
        else if(a[mid]==k){
            ans=mid;
            st=mid+1;
        }
        else if(a[mid]<k){
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>a={1,2,3,3,4};
    cout<<"First Occurence"<<FirstOccur(a,3)<<endl;
    cout<<"Last Occurence"<<LastOccur(a,3)<<endl;

}