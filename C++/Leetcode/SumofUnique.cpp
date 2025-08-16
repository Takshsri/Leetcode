#include<iostream>
#include<map>
#include<vector>

using namespace std;
int UniqueSum(vector<int> &a){
    map<int,int> res;
    for(int i: a){
        res[i]++;
    }
    for(auto pair : res){
        cout<<pair.first <<"\t"<<pair.second<<endl;
    }
    int sum=0;
    for(auto pair : res){
        if(pair.second==1){
            sum += pair.first;
        }
    }
    return sum;

}
int main(){
    vector<int> arr = {1,2,4,4};
    cout<<UniqueSum(arr);
}