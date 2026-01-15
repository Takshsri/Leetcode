#include<iostream>
#include<iomanip>
using namespace std;
void Count(int a[],int n){
    float positive=0,negative=0,zero=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            positive++;
        }
        else if(a[i]==0){
            zero++;
        }
        else if(a[i]<0){
            negative++;
        }
    }
    cout<<fixed<<setprecision(6)<<positive/n<<endl;
    cout<<fixed<<setprecision(6)<<negative/n<<endl;
    cout<<fixed<<setprecision(6)<<zero/n<<endl;


}
int main(){
    int a[]={-4, 3, -9, 0, 4, 1};
    int n=sizeof(a)/sizeof(a[0]);
    Count(a,n);

}