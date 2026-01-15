#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int GCD(vector<int>a){
    int res=a[0];
    while(res>0){
        for(int i=0;i<a.size()-1;i++){
            if(a[i]%res !=0 ){
                break;
            }
        }
        res--;
        
    }
    return res;
}
int main(){
    vector<int> a={2,4};
    sort(a.begin(),a.end());
    int res=GCD(a);
    cout<<res;

}
