//Hollow Rectangle

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
    */
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

void Insta(){
    int rows = 6;
    int num = 1;
    for (int i = 1; i <= rows; i++) {
        int val = num;

        for (int j = i; j >= 1; j--) {
            cout<<(val + " ");
            num += (rows - i);
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
   Insta();
}

