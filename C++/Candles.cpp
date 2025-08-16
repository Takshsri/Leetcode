#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int Candle(vector<int>& a){
    sort(a.begin(),a.end());
    int m=a[a.size()-1];
    cout<<m;
    int count=0;
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]==m){
            count++;
        }
        else{
            break;
        }
    }
    return count;
} 
int main(){
    vector<int> a={4,4,1,3};
   cout<< Candle(a);
}