#include<iostream>
#include<vector>

using namespace std;
int MagicNum(int n){
    int ans =0;
    int power =1;
    while(n!=0){
        int temp = n & 1;
        power *= 5;
        ans += power * temp ;
        n = n >> 1;
    }
    return ans;

}
int main(){
    int num;
    cout<<"Enter a number to Find the Nth Magic Number : ";
    cin>> num;
    cout<<"Magic Number is "<<MagicNum(num);
}