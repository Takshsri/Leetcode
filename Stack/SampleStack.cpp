#include<iostream>
#include<stack>
using namespace std;

void  Stack(int a[],int n){
    stack<int> res;
    for(int i=0;i<n;i++){
        res.push(a[i]);
    }

    while(!res.empty()){
        cout<<res.top()<<"\t";
        res.pop();
        
    }

    
}

void Stack1(string a,int n){
    stack<char> name;
    for(char c : a){
        name.push(c);
    }
    string reverse = "";
    while(!name.empty()){
        reverse+=name.top();
        name.pop();
    }
    cout<<reverse;
}
int main(){

    int a[]={2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    string name="ramya Srinivas";
    Stack(a,n);
    Stack1(name,5);
    
}