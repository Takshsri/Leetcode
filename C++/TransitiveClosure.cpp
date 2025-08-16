#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>> mat){
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void TransitiveClosure(vector<vector<int>> &mat){
    int n = mat.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(mat[i][k] || mat[i][j] && mat[j][k]){
                    mat[i][k] = 1;
                }
            }
        }
    }
}
int main(){
    vector<vector<int>> mat(3,vector<int> (3));
    mat = {{0,1,0},{0,0,1},{0,0,0}};
    print(mat);
    cout<<"After Transitive Closure: "<<endl;
    TransitiveClosure(mat);
    print(mat);

    
    





}
