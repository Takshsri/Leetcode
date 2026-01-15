//brute force brcause O(n*m (nm)+nm)
/*
#include<iostream>
using namespace std;
void SetMatrix(int a[3][3],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                cout<<i<<"\t"<<j<<"\n";
                for(int l=0;l<m;l++){
                    if(a[i][l]!=0){
                        a[i][l]=-1;
                    }
                }
                for(int k=0;k<m;k++){
                    if(a[k][j]!=0){
                        a[k][j]=-1;
                    }
                    }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==-1){
                a[i][j]=0;
            }
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    int a[3][3]={
        {1,1,1},{1,0,1},{1,1,1}
    };
    SetMatrix(a,3,3);


}

//Better solution
//time complexity 2mn
//space complexity is m*n

#include<iostream>
using namespace std;
void SetMatrix(int a[3][3],int n,int m){
    int row[n]={0};
    int col[m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){
                row[i]=1;
                col[j]=1;
                    }
            
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]||col[j]){
                a[i][j]=0;
            }
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int a[3][3]={
        {1,1,1},{1,0,1},{1,1,1}
    };
    SetMatrix(a,3,3);


}

*/
//optimal solution
#include<iostream>
using namespace std;
void SetMatrix(int a[3][3],int n,int m){
        int col0=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==0){
                    a[i][0]=0;
                    if(j!=0){
                        a[0][j]=0;       
                    }
                    else{
                        col0=0;
                    }
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(a[i][j]!=0){
                    if(a[0][j]==0 || a[i][0]==0){
                        a[i][j]=0;
                    }
                }
            }
        }
        if(a[0][0]==0){
            for(int j=0;j<n;j++){
                a[0][j]=0;
            }
        }
        if(col0==0){
            for(int i=0;i<n;i++){
                a[i][0]=0;
            }
        }
         for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

}

int main(){
    int a[3][3]={
        {1,1,1},{1,0,1},{1,1,1}
    };
    SetMatrix(a,3,3);


}