#include<iostream>
#include<vector>

using namespace std;
int Product(vector<int> a){
    int maxProduct = a[0];
    int maxEnding = a[0];
    int minEnding = a[0];

    for(int i=1;i<a.size();i++){
        if(a[i]<0){
            swap(maxEnding,minEnding);
        }

        maxEnding = max(a[i] ,maxEnding * a[i]);
        minEnding = min(a[i] ,minEnding * a[i]);
        maxProduct = max(maxEnding,maxProduct);
    }
    return maxProduct;

}
int main(){
    vector<int> arr = {-2,0,-1};
    cout<<Product(arr);
}