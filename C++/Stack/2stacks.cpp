#include<iostream>
using namespace std;
int n=10;
int *arr = new int[n];
int top1 = -1;
int top2 = n;
void push1(int n){
    if( top1+1 == top2){
        cout<<("Stack Overflow");
        return;
    }

    arr[++top1] = n;

}

void push2(int n){
    if(top2 -1 == top1){
        cout<<("Stack Overflow");
        return ;
    }
    arr[--top2] = n;

}

int pop1(){
    if(top1==-1){
        cout<<"Stack Underflow";
        return -1;
    }
    return arr[top1--];
}

int pop2(){
    if(top2 == n){
        cout<<"Stack Underflow";
        return -1;
    }

    return arr[top2++];
}

void print1(){
    cout<<"Stack1 Elements :\n";
    for(int i=0;i<=top1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void print2(){
    cout<<"Stack2 Elements:\n";
    for(int i=n-1;i>=top2;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    push1(1);
    push1(2);
    print1();
    cout<<"\nPopped Element is:"<<pop1();
    cout<<endl;
 
    cout<<"\nPopped Element is:"<<pop2();
    cout<<endl;
    push2(10);
    push2(20);
    print2();
    cout<<"\nPopped Element is:"<<pop2();
    cout<<endl;


    
}