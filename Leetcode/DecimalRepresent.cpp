#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> res;
        long long  place = 1;
        while(n!=0){
            int rem = n % 10;
            if(rem != 0){
            res.push_back(place * rem);

            }
            n/= 10;
            place *= 10;
            
        }
       
        reverse(res.begin(),res.end());
        return res;
        
    }
};


int main(){
    Solution sol;
    vector<int> res = sol.decimalRepresentation(701);
    for(int i : res){
        cout<<i<<" ";
    }
}