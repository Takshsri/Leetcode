#include<iostream>
#include<vector>
using namespace std;
int CountGreater(vector<int> a){
    int nums=1;
    int max = a[0];
    for(int i=1;i<a.size();i++){
        if(a[i] >= max){
            max = a[i];
            nums++;
        }

    }
    return nums;
}
int main(){
    vector<int> a ={1,2,1,1,0};
    int res = CountGreater(a);
    cout<<res;
}
