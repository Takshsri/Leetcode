/*
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void Sum(vector<int>& a){
    int n=a.size();
    vector<int>res;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        res.push_back(sum-a[i]);
    }
     int min=INT_MAX,max=INT_MIN;
            for(int i=0;i<res.size();i++){
                if(res[i]>max){
                    max=res[i];
                }
                if(res[i]<min){
                    min=res[i];
                }
            }
            cout<<min<<endl<<max;
}
int main(){
    vector<int> a={1,2,3,4,5};
    Sum(a);
}

*/

#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

void SUm(vector<int>& a){
    int n=a.size();
    int totalSUm=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        totalSUm+=a[i];
    }
    long int min=totalSUm-a[n-1];
    long int max=totalSUm-a[0];
    cout<<min<<endl<<max;
}
int main(){
    vector<int>a={1,2,3,4,5};
    SUm(a);
}