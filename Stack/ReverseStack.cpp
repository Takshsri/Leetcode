#include<iostream>
#include<string>
#include<stack>
using namespace std;

void reverse(string name){
        stack<char> s;
        for(int i=0;i<name.length();i++){
            s.push(name[i]);

        }

        while(!s.empty()){
            cout<<s.top()<<"\n";
            s.pop();
        }
        
        

}


int main(){
    string name;
    cout<<"Enter Name:";
    cin>>name;
    reverse(name);
}