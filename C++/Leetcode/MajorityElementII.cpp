#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> Majority(vector<int>&a){
            vector<int> res;
            int n = a.size();
            int count1 =0,count2=0;
            int cand1 =0,cand2 = 0;
            for(int i:a){
                if(i == cand1) count1++;
                else if(i == cand2) count2++;
                else if(count1 ==0){
                    cand1 = i;
                    count1 =1;
                }
                else if(count2==0){
                    cand2 = i;
                    count2 =1;
                }
                else{

                count1--;
                count2--;
                }
            }
            count1=count2=0;
            for(int i : a){
                if(i==cand1) count1++;
                else if(i==cand2) count2++;
            }
            if(count1>n/3) res.push_back(cand1);
            if(count2>n/3) res.push_back(cand2);



            return res;

        }
};
int Peak(vector<int> &a){
    int l =0;
    int r = a.size()-1;

    while(l<=r){
        int mid = l+(r-l)/2;
        if(a[mid-1]<a[mid] && a[mid]>a[mid+1]){
            return a[mid];
        }
        else if(a[mid-1]<a[mid]){
            l= mid+1;
        }
        else{
            r= mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> a = {1,3,6,7,1,3,1,1};
    Solution sol;
   // vector<int> res = sol.Majority(a);
   // for(int i :res){
   //     cout<<i<<" ";
   // }
    cout<<Peak(a);

}