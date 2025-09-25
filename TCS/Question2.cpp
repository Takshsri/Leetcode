//Given two temperatures, classify each based on the following 
// <10 -> It is very cool
// 10 to 20 -> it cool
// >20 -> It is Warm
// Then :print the Category of each tepeature
// print their average value
// print both the temperatures in reverse order

//input 5  25
//o/p: its very cool,its warm, 15.0,25,5

#include<iostream>
using namespace std;
void Temperature(int m){
    if(m <10){
        cout<<"Its very Cool"<<endl;
        
    }
    else if(m < 20 && m >10){
        cout<<"Its Very Cold"<<endl;
    }
    else{
        cout<<"Its Warm"<<endl;
    }
}
void swap(int *m,int *n){
    int *temp = m;
    m = n;
    n = temp;
}
int main(){
    int m,n;
    cout<<"Temperatures:";
    cin>>m>>n;
    Temperature(m);
    Temperature(n);

    cout<<(m+n)/2.0<<endl;
    swap(&m,&n);
    cout<<m<<"\t"<<n;
}