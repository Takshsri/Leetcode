#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter Numbers:";
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>c) swap(a,c);
    int count =0;
    while(!((a==b) && (b ==c))){
        a++;
        b++;
        c--;
        count++;
        if(c<b){
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<< count<<endl;
}