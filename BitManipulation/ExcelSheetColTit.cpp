#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string Excel(int num){
    string col;
    vector<string> arr ={"A","B","C","D","E","F","G"};
    while(num!=0){
        num--;
        int temp = num%26;
        col += ('A' + temp);
        num /= 26;

    }
    reverse(col.begin(),col.end());
    return col;
}
int main(){

    int num;
    cout<<"Enter Num: ";
    cin>>num;
    cout<<Excel(num);
}