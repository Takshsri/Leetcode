#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subArray(vector<int>& a,int k){
    unordered_map<int,int> prefixCount ;
    prefixCount[0] =1;
    int sum =0,count =0;
    for(int i : a){
        sum+=i;
        if(prefixCount.find(sum-k)!=prefixCount.end()){
            count+=prefixCount[sum-k];
        }
        prefixCount[sum]++;
    }
    return count;
}

int main(){
    vector<int> a= {1,2,3};
    cout<<subArray(a,3);
}