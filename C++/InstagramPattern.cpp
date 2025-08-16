#include<iostream>
using namespace std;
void Pattern(int n){
    int odd=1,even=2;
    for(int i=0;i<n;i++){
        
       for(int j=0;j<=i;j++){
            if((i)%2==0){
                cout<<odd<<"\t";
                odd+=2;
            }
            else{
                cout<<even<<"\t";
                even+=2;
            }
       }
        cout<<endl;
    }
}
int main(){
    Pattern(6);
}