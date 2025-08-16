//Hollow Rectangle

\
/*
#include<iostream>
using namespace std;

void hollowRectangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<"\n";
    }

}

//Half Pyramid Pattern

void halfPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

//inverted Half Pyramid
void InvertedPyramid(int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

//Half Pyramid after 180 degree rotation
void Rotation180(int n){
    /*for(int i=0;i<n;i++){
        for(int j=n-1-i;j>=0;j--){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
   //or

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j<n-i-1){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
    }
    cout<<"\n";
   }
}

void floydsTriagle(int n){
    int f=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<f<<" ";
            f++;
        }
        cout<<endl;
    }
}

void Pattern01(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;

    }
}

void palindromidPat(int n){
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=0;j--){
            cout<<"  ";
        }
        for(int k=i;k>=1;k--){
            cout<<" "<<k;
        }
        for(int l=1;l<i;l++){
            cout<<" "<<l+1;
        }
         cout<<endl;

    }
}


void DiamondPattern(int n){
    for(int i=0;i<n;i++){
        for(int j=n-1-i;j>=0;j--){
            cout<<" ";
        }
        for(int j=0;j<=2*i;j++){
            cout<<"*";
        }
        cout<<endl;

    }

    for(int i=n-1;i>=0;i--){
        for(int j=n-1-i;j>=0;j--){
            cout<<" ";
        }
        for(int j=0;j<=2*i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}
void hollowDiamondPatt(int n){
    for(int i=0;i<n;i++){
        for(int j=n-1-i;j>=0;j--){
            cout<<" ";
        }
        for(int j=0;j<=2*i;j++){
            if(j==0 || j==2*i){
            cout<<"*";
            }
            else{ 
                cout<<" ";
            }
        }
        cout<<endl;

    }

    for(int i=n-1;i>=0;i--){
        for(int j=n-1-i;j>=0;j--){
            cout<<" ";
        }
        for(int j=0;j<=2*i;j++){
            if(j==0 || j==2*i){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }

}


void solidRhombus(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>=0;j--){
            cout<<" ";
        }
        for(int j=0;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void hollowRhombus(int n){
    for(int i=0;i<n;i++){
        for(int j=n-1-i;j>=0;j--){
            cout<<" ";
        }
        for(int j=0;j<n;j++){
            if(j==0 || j==n-1 || i==0 || i==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pyramidNumbers(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void PascalTriangle(int n){
    int coef=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if(j==0 || i==0 ){
                coef=1;
            }
            else{
                coef=coef*(i-j+1)/j;

            }
            cout<<coef<<" ";
        }
        cout<<endl;
    }
}
int main(){
    //hollowRectangle(5);
   // halfPyramid(5);

   //InvertedPyramid(5);
  // Rotation180(5);
  //floydsTriagle(5);
  //Pattern01(5);
  //palindromidPat(5);
  //DiamondPattern(5);
  //hollowDiamondPatt(5);
   //solidRhombus(5);
   //hollowRhombus(5);
   //pyramidNumbers(5);
   //PascalTriangle(5);
}



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool Find(vector<int>& a,int x){
    int n=a.size();
    int l=0,r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid]==x){
            return true;
        }
        else if(a[mid]>x){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
        
    }
    return false;
}


int main() {
   vector<int>a={2,4,5,6,1};
   sort(a.begin(),a.end());
   int x=1;
   bool found=Find(a,x);
   if(found){
       cout<<"Yes";
   }
   else{
       cout<<"No";
   }


}


#include<iostream>
using namespace  std;
void Reverse(int a[],int n){
    int l=0;
    int r=n-1;
    while(l<=r){
        int temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        l++;
        r--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
int main(){
 
 int a[]={1,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    Reverse(a,n);
}



#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> solution(vector<int> &a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        int count1 = 0, count2 = 0;
        int i = 0, j = 0;
        
        while(i < n && j < m) {
            if(a[i] > b[j]) {
                count1 += 1;
            }
            else if(a[i] == b[j]) {
                count1 += 0;
                count2 += 0;
            }
            else {
                count2 += 1;
            }
            i++, j++;
        }

        vector<int> res(2); 
        res[0] = count1;
        res[1] = count2;
        return res;
    } 

}; 

int main() {
    vector<int> a = {5, 6, 7};
    vector<int> b = {3, 6, 10};
    Solution sol;
    vector<int> res = sol.solution(a, b);
    
    for(int i : res) {
        cout << i << "\t";
    }
    return 0;
}

#include<iostream>
using namespace std;
void staircase(int n) {
        for(int i=0;i<n;i++){
            for(int j=n-i;j>=0;j--){
                cout<<" ";
            }
            for(int j=0;j<=i;j++){
                cout<<"#";
            }
            cout<<endl;
        }
}
int main(){
    staircase(4);
}

#include <iostream>

using namespace std;

int main() {
    int n = 6; 

    for (int i = 1; i <= n; i++) {
       
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
       
        for (int k = 1; k <= i; k++) {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}


#include<iostream>
using namespace std;
void PascalTriangle(int n){
    int coef=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if(j==0 || i==0 ){
                coef=1;
            }
            else{
                coef=coef*(i-j+1)/j;

            }
            cout<<coef<<" ";
        }
        cout<<endl;
    }
}
int main(){
PascalTriangle(5);
}

*/

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> Pascal(int n) {
    vector<vector<int>> res(n);

    for (int i = 0; i < n; i++) {
        vector<int> v(i + 1, 1); 
        for (int j = 1; j < i; j++) {
            v[j] = res[i - 1][j - 1] + res[i - 1][j];
        }
        res[i] = v; 
    }

    return res;
}

int main() {
    int n = 5;
    vector<vector<int>> res = Pascal(n);

    for (const auto &row : res) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}
