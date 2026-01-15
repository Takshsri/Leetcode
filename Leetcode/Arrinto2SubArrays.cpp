#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void splitArr(vector<int>& a){
    sort(a.begin(),a.end());
    int n = a.size();
    int mid = (n+1)/2;
    vector<int> left(a.begin(),a.begin()+mid);
    vector<int> right(a.begin()+mid,a.end());

    reverse(right.begin(),right.end());

    cout<<"Left is "<<endl;
    
    for(int i : left){
        cout<<i<<" ";
    }
    cout<<endl<<"Right is "<<endl;
    for(int i : right){
        cout<<i<<" ";
    }


}
int main(){

    vector<int> arr = {5,2,3,1,7};
    splitArr(arr);
}