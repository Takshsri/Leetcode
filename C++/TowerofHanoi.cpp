#include<iostream>
#include<cmath>
using namespace std;
void Tower(int n,char source,char auxilary,char destination){
    if(n==1){
        cout<<source <<" Move  1 to "<< destination<<endl;
        return;
    }
    Tower(n-1,source,destination,auxilary);
    cout<<"Move disk from "<<n<<" from "<<source<<" to "<<destination<<endl;

    Tower(n-1,auxilary,source,destination);
    
}
int main(){

    int n;
    cin>>n;
    Tower(n,'A','B','C');
}