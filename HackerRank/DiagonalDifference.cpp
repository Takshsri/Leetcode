/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a[3][3]={
        {11,2,4},{4,5,6},{10,8,-12}
    };
    int sum=0,count=0;
    int j=3;
    for(int i=0;i<3;i++){
        
        j-=1;
       
       sum+=a[i][i];
       count+=a[i][j];
    }
   
    cout<<abs(sum-count)<<endl;
  
    
}
*/

#include<iostream>
#include <vector>
#include<cmath>
#include<iomanip>
using namespace std;
int Sum(vector<vector<int>> & a){
    int r=a.size();
    int c=a[0].size();
    int pSum=0,sSum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                pSum+=a[i][j];
            }
            if((i+j)==r-1){
                sSum+=a[i][j];

            }
        }
        
    }
    return abs(pSum-sSum);
}
int main(){
    vector<vector<int>> a={{11,2,4},{4,5,6},{10,8,-12}};
    ///cout<<Sum(a);
    float num=3.4567817654;
    cout<<fixed<<setprecision(6)<<num;
}