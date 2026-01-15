#include<iostream>
using namespace std;

int main(){
    int v,w;
    cout<<"Enter values of vehicles,wheels:";
    cin>>v>>w;
    float cars = (w-2*v)/2;
    if(w>=2 && w%2==0 && v<w){
    cout<<"Cars="<<cars<<endl;
    cout<<"Bikes="<<v-cars;
    }
}