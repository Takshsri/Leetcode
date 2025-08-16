/*
#include<iostream>
#include<unordered_map>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr={1,1,2,2,3};
    unordered_map<int,int> a;
    for(int num:arr){
        a[num]++;
    }
   
    int key=-1;
    int value=INT_MIN;

    for(const auto &pair:a){
        if(pair.second>value ||(pair.second ==value && pair.first < key)){
            key=pair.first;
            value=pair.second;
        }
    }
    cout<<key<<"\t"<<value;

}
*/

#include<iostream>
#include<unordered_set>
using namespace std;
int  main(){
    int a[]={3,4,1,2,3,4,3};
    unordered_set<int>arr;
    for(int i:a){
        arr.insert(i);
    }
    arr.erase(3);
    for(int i:arr){
        cout<<i<<"\t";
    }
    if(arr.find(1)!=arr.end()){
        cout<<"\nElement found";
    }
}