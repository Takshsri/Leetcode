#include<iostream>
#include<climits>
#include<vector>

using namespace std;
int HourGlass(vector<vector<int>> &a){
    int maxSum = INT_MIN;
    for(int i=0;i<=a.size()-3;i++){
        for(int j=0;j<=a[0].size()-3;j++){

            int sum = a[i][j]+a[i][j+1]+a[i][j+2]+
                        a[i+1][j+1]+
                        a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            maxSum = max(maxSum,sum);

        }

    }
    return maxSum;
}
int main(){
    vector<vector<int>> a = {{1,1,1,0,0,0},{0,1,0,0,0,0},{1,1,1,0,0,0},{0,0,2,4,4,0},{0,0,0,2,0,0},{0,0,1,2,4,0}};
    cout<<HourGlass(a);
}