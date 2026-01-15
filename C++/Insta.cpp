#include<iostream>
using namespace std;

void Insta(){
    int rows = 6;
    int num = 1;
    for (int i = 1; i <= rows; i++) {
        int val = num;

        for (int j = 1; j <= i; j++) {
            cout<<val<<"\t";
            val -=  (rows-j);
           
        }
         num = num +  (rows - i);

        cout<<endl;
    }
}

void Insta1(){
    int num =1;
    int rows =6;
    for(int i=1;i<=rows;i++){
        int val = num;
        for(int j=1;j<=i;j++){
            cout<<val<<"\t";
            val = val - (rows-j); 
        }
        num = num + (rows - i);
        cout<<endl;
    }
}

int main(){
    
   
    cout<<endl;
    Insta1();
    
}