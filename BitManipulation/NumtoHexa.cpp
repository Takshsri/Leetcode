#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
string Convert(int num){
    
   
       if(num == 0) return "0";
       string HexaDec;
       unsigned int n = num;
       while(n!=0){
        int rem = n%16;
        if(rem < 10){
            HexaDec += ('0' + rem);
        }
       else {
        HexaDec += ('a' +(rem-10));
       }

       n /= 16;
    }
    reverse(HexaDec.begin(),HexaDec.end());
    return HexaDec;
}
int main(){
    int num;
    cout<<"Enter Num to convert HexaDecimal:";
    cin>>num;
    cout<<Convert(num);
}