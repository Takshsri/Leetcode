#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> Sort(vector<int> a){
        vector<int> res;
        int c1=0,c2=0,c3=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                c1++;
            }
            else if(a[i]==1){
                c2++;
            }
            else{
                c3++;
            }
        }
        for(int i=0;i<c1;i++){
            res[i]=0;
        }
        for(int i=c1;i<c2;i++){
            res[i]=1;
        }
    }
};
int main(){

    vector<int> a={2,1,0,2,1,2,1,2,0};
    Solution sol;
    vector<int> res=sol.Sort(a);
}