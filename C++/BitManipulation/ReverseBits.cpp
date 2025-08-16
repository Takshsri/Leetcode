
/*#include<iostream>
using namespace std;
int Reverse(int n){
    int res =0;
    for(int i=0;i<32;i++){
        int d = n & 1;
        res = (res << 1) | d;
        n >>= 1;
    }
    return res;
}
int main(){

    int n;
    cout<<"Enter Number:";
    cin>>n;
    cout<<Reverse(n);
}
    */


    #include<iostream>
    #include<cstdint>
    using namespace std;
    int Reverse(uint32_t n){
        uint32_t res =0;
        for(int i=0;i<32;i++){
            res <<= 1;
            res |= (n & 1);
            n >>= 1;
        }
        return res;
    }
    int main(){
        int n;
        cin>>n;
        cout<<Reverse(n);
    }