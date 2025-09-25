#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void Subset(vector<int> &a){
    vector<vector<int>> res(pow(2,a.size()));
    int n = pow(2,a.size());
    for(int i=0;i<n;i++){
        for(int j=0;j<a.size();j++){
            if((i >> j) & 1){
                res[i].push_back(a[j]);
            }
            
        }
    }
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    vector<int> a = {1,2,3};
    Subset(a);
}