#include<iostream>
#include<vector>
using namespace std;
int Bottles(int numBottles,int numExchange){
    int total =numBottles;
    while(numBottles >= numExchange){
        int newBottles = numBottles / numExchange;
        int remain = numBottles % numExchange;
        total += newBottles;
        numBottles = newBottles + remain;

    }
    return total;
}
int main(){
    int numBottles ,numExchange;
    cout<<"Enter NumBottles and NumExchange:";
    cin>>numBottles>>numExchange;
    cout<<Bottles(numBottles,numExchange);
}