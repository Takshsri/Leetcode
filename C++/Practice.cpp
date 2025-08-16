#include<iostream>
#include<vector>
using namespace std;
long long Gcd(long long a,long long b){
   while(b!=0){
    long long  temp = b;
    b = a%b;
    a = temp;
   }
   return a;
}
long long Lcm(long long  a,long long b){
    return (a)/Gcd(a,b) *b;
}
int VotingAlgo(vector<int>& a){
    int freq = 0;
    int ans = 0;
    for(int i=0;i<a.size();i++){
        if(freq==0){
            ans = a[i];
        }
        if(ans == a[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int> arr ={1,2};

    long a = 8;
    long b = 1000000000;
    cout<<Gcd(a,b)<<endl;
    cout<<Lcm(a,b)<<endl;

    cout<<"Majority Element is:"<<VotingAlgo(arr);

}