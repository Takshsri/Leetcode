#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>& a){
    int left =0;
    int right = 1;
    int n = a.size();
    while(left<n && right < n){
        if(a[left]%2==0) left+=2;
        if(a[right]%2!=0)right +=2;
        else{
            swap(a[left],a[right]);
        }
    }
}
void chatsort(vector<int>& a){
     int n = a.size();
        int left = 0;   // even indices
        int right = 1;  // odd indices

        while (left < n && right < n) {
            // find the first even index with odd value
            while (left < n && a[left] % 2 == 0) left += 2;

            // find the first odd index with even value
            while (right < n && a[right] % 2 == 1) right += 2;

            // swap mismatched elements
            if (left < n && right < n) {
                swap(a[left], a[right]);
                left += 2;
                right += 2;
            }
        }
}
int main(){
    vector<int> a = {9,8,0,7};
    sort(a);
    for(int i  : a){cout<<i<<" ";}
    vector<int> b = {9,8,0,7};

    //chatsort(b);
    //for(int i  : b){cout<<i<<" ";}

}