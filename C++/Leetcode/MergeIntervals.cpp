#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Merge(vector<vector<int>> &a){
    vector<vector<int>> res;
    if(a.empty()) {
        cout<<"Intervals are empty";
    }
    sort(a.begin(),a.end());
    res.push_back(a[0]);
    for(int i=1;i<a.size();i++){
        vector<int> &last = res.back();
        if(a[i][0]<=last[1]){
            last[1] = max(last[1],a[i][1]); 
        }
        else{
            res.push_back(a[i]); 
        }
       
}
        for(const auto &interval : res){
            cout<<interval[0]<<"\t"<<interval[1]<<endl;
        }
}
int main(){
    vector<vector<int>> arr = {{1,4},{0,4}};

    for(const auto& interval :arr){
        cout<<'['<<interval[0]<<","<<interval[1]<<']'<<endl;   
    }
    Merge(arr);

}