#include<iostream>
#include<vector>
using namespace std;
vector<int> Count(vector<int>& a,vector<vector<int>>& b){
    vector<int> res;
    for(int i=0;i<b.size();i++){
        int c = 0;
        int l = b[i][0];
        int h = b[i][1];
        for(int j=0;j<a.size();j++){
            if(l<=a[j] && a[j]<=h) {c+=1;}
        }
        res.push_back(c);

    }

    return res;
   
}
int main(){
    vector<int> a = {400,350,567,890,765,987};
    vector<vector<int>> b = {{300,380},{800,1000}};
    vector<int> res = Count(a,b);
    for(int i : res){
        cout<<i<<" ";
    }

}