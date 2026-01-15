//Reverse a Number or String

#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;
int Reverse(int num){
    long long reverse = 0;
    while(num!=0){
        int d = num%10;
        reverse = reverse*10 + d;
        num = num/10;
    }

    return (reverse > INT_MAX || reverse < INT_MIN)? 0 :(int) reverse;

    

}
string reverse(string s){
    int left =0,right = s.size()-1;
    while(left<=right){
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    return s;
}
bool Palindrome(int n){
    int num = Reverse(n);
    return (num == n)? 1:0;
}
bool PrimeNumber(int num){
    if(num <= 1) return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0) return false; 
    }
    return true;
}

long long factorial(int n){
    long long fact = 1;
    int i = 1;
    while(i<=n){
        fact = fact * i;
        i++;
    }
    return fact;
}
void  fibonacci(int n){
    int a = 0,b = 1;
    int c = 0;
    cout<<"0\t 1"<<"\t";
    for(int i=2;i<n;i++){
        c = a+b;
        cout<<c<<"\t";
        a = b;
        b = c;
    }
    
}
void vowels(string s){
    int vowels = 0,cons=0;

    for(char ch : s){
        if(isalpha(ch))
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'|| ch=='u' || ch=='A'|| ch=='E'||ch=='I'|| ch=='O'||ch=='U') vowels++;
        else cons++;
    


    }
    cout<<"Vowels="<<vowels<<endl;
    cout<<"Consonatnss="<<cons<<endl;
}
void maxAndmin(vector<int> &a){
    int max = a[0],min = a[0];
    for(int i :a){
        if(i>max){
            max = i;
        }
        if(i<min){
            min = i;
        }
    }
    cout<<"Max="<<max;
    cout<<endl<<"Min="<<min<<endl;

}
int sumDigits(int n){
    int sum =0;
    while(n!=0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
void Swap(int &a ,int &b){
     cout<<"Initail A = "<<a<<endl<<"B = "<<b<<endl;
     a = a^ b;
     b = a^b;
     a = a^b;
     cout<<"AFter Swapping A and B is:"<<a<<b<<endl;
}
bool LeapYear(int year){
    if(year%4 ==0) return true;
    if(year%100) return true;
    if(year%400) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    //string word;
    //cin>>word;
    // cout<<reverse(word)<<endl;
    // cout<<Palindrome(n)<<endl;
    // cout<<Reverse(n);
    //cout<<PrimeNumber(n);
    //cout<<factorial(n);
    vector<int> a = {34,56,7,8,9};
    fibonacci(n);
    vowels("sreeRam");
    maxAndmin(a);
    sumDigits(786);;
    int x = 6;
    int y = 7;
    Swap(x,y);
    cout<<LeapYear(2024);

}