//Iterative Approach
/*
#include<iostream>
using namespace std;

int main(){

    int a=0,b=1,c=1;
    int num;
    cout<<"Enter Number:";
    cin>>num;
    if(num <= 1){
        cout<<"Enter  Valid Number";
    }
    
    cout<<"Tribonacci Series:"<<endl;
    if (num >= 1) cout << a << "\t";
    if (num >= 2) cout << b << "\t";
    if (num >= 3) cout << c << "\t";
    for(int i=4;i<=num;i++){
        int d = a+b+c;
        cout<<d<<"\t";
        a = b;
        b = c;
        c = d;

    }
}
    */

#include<iostream>
using namespace std;
int  Tribonacci(int num){
    if(num == 1) return 0;
    else if(num ==2 || num==3) return 1;
    
    return Tribonacci(num-1)+Tribonacci(num-2)+Tribonacci(num-3);

}
int main(){
    int num;
    cout<<"Enter Number:";
    cin>>num;
    if(num <= 1){
        cout<<"Enter  Valid Number";
    }
    cout<<Tribonacci(num);
}