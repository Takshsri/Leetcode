/*
//another way
#include<iostream>
#include<vector>
using namespace std;
int Server(vector<vector<int>> & a){
    int n=a.size();
    int m=a[0].size();
    int row[n]={0};
    int col[m]={0};
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                row[i]++;
                col[j]++;
                count++;

            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] and (row[i]==1  && col[j]==1)){
               count--;
            }
        }
    }
    return count;
}
int main(){
    vector<vector<int>>a={{1,1,0,0},{0,0,0,0},{0,1,0,1},{0,0,1,0}};
    cout<<"No of Servers are :"<<Server(a);

}

*/

#include<iostream>
#include<vector>
using namespace std;
int Server(vector<vector<int>> & a){
    int n=a.size();
    int m=a[0].size();
    int row[n]={0};
    int col[m]={0};
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                row[i]++;
                col[j]++;
              

            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] and (row[i]  + col[j] >2)){
               count++;
            }
        }
    }
    return count;
}
int main(){
    vector<vector<int>>a={{1,1,0,0},{0,0,0,0},{0,1,0,1},{0,0,1,0}};
    cout<<"No of Servers are :"<<Server(a);

}