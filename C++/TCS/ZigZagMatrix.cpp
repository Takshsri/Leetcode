#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        void Reverse(vector<int>& a){
            int l=0,r=a.size()-1;
            while(l<=r){
                int temp = a[l];
                a[l] = a[r];
                a[r] = temp;
                l++;
                r--;
            }
        }
        vector<vector<int>> ZigZag(vector<vector<int>> &a){
            if(a.empty()) return {};
            int n = a.size();
            int m= a[0].size();
            for(int i=0;i<n;i++){
                if(i%2!=0){
                    Reverse({a[i]});
                }
            }
            return a;
        }
};
int main(){
    vector<vector<int>> a ={{1,2,3},{4,5,6},{7,8,9}};
    Solution sol;
    a = sol.ZigZag(a);
    for(auto &res :a){
        for(auto &er:res){
            cout<<er<<" ";
        }
        cout<<endl;
    }

}