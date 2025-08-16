//given m and n follwed by mxn integers as a matrix,check if each rows has atleast one prime
//if m<=0 or n<=0 print Wrong Input
// if any matrix  element is negative print Wrong Input
// if total elements < mxn print Wrong Input
// If all rows contain at least one prime -> print Valid
// if any row doesnot hoave any prime -> print Not Valid  
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool Isprime(int m){
    if(m<=1) return false;
    if(m==2) return true;
    if(m %2==0) return false;
    for(int i=3;i<=sqrt(m);i++){
        if(m%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int m,n;
    cout<<"Enter Size of the matrix:";
    cin>>m>>n;
    if(m<=0 || n<=0) cout<<"Wrong Input";
    vector<vector<int>> arr(m,vector<int>(n));
    cout<<"Enter Matrix Elements:";
    int count =0;
    for(int i=0;i<m && count<m*n;i++){
        for(int j=0;j<n && count <m*n;j++){
            if(!(cin>>arr[i][j])){
                cout<<"Wrong Input";
                return 0;
            }
            count++;
            if(arr[i][j]<0){
                cout<<"Wrong Input";
                return 0;
            }
    }
}
    if(count<m*n){
        cout<<"Wrong Input";
        return 0;
    }
    for(int i=0;i<m;i++){
        bool prime = false;
        for(int j=0;j<n;j++){
            if(Isprime(arr[i][j])){
                prime = true;
                break;
            }
        }
        if(!prime){
            cout<<"Not Valid";
            return 0;
        }
    }
    cout<<"Valid";
    return 0;

    

}