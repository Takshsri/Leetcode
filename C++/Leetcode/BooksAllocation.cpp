#include<iostream>
#include<vector>

using namespace std;
bool isValid(vector<int> &a,int n,int m ,int maxAllocate){
    int std =1;
    int pages = 0;
    for(int i=0;i<n;i++){
        if(a[i] > maxAllocate){
            return false;
        }
        if(pages+a[i]<=maxAllocate){
            pages += a[i];
        }
        else{
            std++;
            pages = a[i];
        }

    }
    return (std>m ? false : true);
}
int Allocation(vector<int> &a,int n ,int m){
    if(m>n){
        return -1;

    }
    int st =0;
    int end =0;
    int ans = -1;
    for(int i : a){
        end += i;
    }
    while(st<=end){
        int mid = st +(end-st)/2;
        if(isValid(a,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;

}

int main(){

    vector<int> a = {15,17,20};
    int n = a.size();
    int m = 2;
    cout<<Allocation(a,n,m);
}

//Time Complexity = O(log N (Range of 0 - Sum of Array) * n (number of students))