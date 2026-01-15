#include<iostream>
using namespace std;
int Manipulate(int num){

    int count =0;
    while(num!=0){
        int temp = num & 1;
        if(temp == 1){
            count++;
        }
        num = num >> 1;
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter  Number:";
    cin>>num;
    cout<<Manipulate(num);
}