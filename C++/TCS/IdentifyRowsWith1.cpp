#include<iostream>
#include<vector>
using namespace std;

int Identify(vector<vector<int>> &a){
    int count = INT_MIN;
    int idx = -1;
   for(int i=0;i<a.size();i++){
        int count1=0;
    for(int j=0;j<a[0].size();j++){
            if(a[i][j]==1){
                count1++;
            }

        }
        if(count1>count){
            count = count1;
            idx = i;
        }
    }
    return idx;
}
int main(){
    vector<vector<int>> a = {{1,1,1,0},{0,1,1,0},{0,0,0,1},{0,0,1,1}};
    cout<<Identify(a);
}