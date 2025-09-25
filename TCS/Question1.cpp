// You are given two integers m and n 
//find the mth prime number calculate the digit sum of that number until it becomes single digit
// then multiply the prime with that digit
//ex: 6 8 
//output :52 (6th prime is 13 -> 1+3 = 4->13 x 4 = 52 )

/*
#include<iostream>
#include<cmath>
using namespace std;
int Prime(int m){
    
   int count=0;
   int num=2;
   while ((count<m))
   {
    
    int times =0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            times++;
        }
    }
    if(times == 2 ){
        count++;
    }
    num++;
   }
   return num-1;
   
}
int SingleDigit(int num){
        int sum =0;
        while(num!=0){
            sum += num%10;
            num /= 10;
        }      

        if(sum > 9){
            return SingleDigit(sum) ;
        }
        return sum;
        

}
int Digit(int m,int n){
    int num = Prime(m);
    int sum = SingleDigit(num);
    return sum * num;

   
        
    
}
int main(){

    int m,n;
    cout<<"Enter Numbers:";
    cin>>m>>n;
    cout<<Digit(m,n);
}

*/



//optimal solution


#include<iostream>
#include<cmath>
using namespace std;
int SingleDigit(int num){
    int sum=0;
    while(num!=0){
        sum += num%10;
        num /= 10;
    }
    if(sum > 9){
        return SingleDigit(sum);
    }
    return sum;
}
bool IsPrime(int n){
    if(n <=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i<= sqrt(n);i+=2){
        if(n%i ==0) return false;
        
    }
    return true;

}
int Number(int n){

    int count =0;
    int num = 1;
    while(count < n){
        num ++;
        if(IsPrime(n)){
            count++;
        }
    }
    return num;
}
int main(){

    int m;
    cout<<"Enter Number:";
    cin>>m;
    cout<<Number(m);
}