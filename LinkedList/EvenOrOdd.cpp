/*
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number:";
    cin>>num;
    int Number=num&1;
    if(Number == 0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}

*/

#include<iostream>
#include<vector>
using namespace std;
bool palin(vector<int> a){
    int left=0;
    int right=a.size()-1;
    while(left<=right){
        if(a[left]==a[right]){
        left++;
        right--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> a={1,2,3,2,1};
   
    cout<<palin(a);
    for(int i: a){
        //cout<<i<<"\t";
    }
}