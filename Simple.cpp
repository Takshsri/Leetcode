#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
int Largest(vector<int>& a){
    int n = a.size();
    int max = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

int secondLarge(vector<int>& a){
    int n = a.size();
    int max = a[0];
    int secondMax = a[0];//56,7,334,124
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
        else if(a[i]>secondMax && a[i] < max){
            secondMax = a[i];
        }
    }
    return secondMax;
}
bool reverse(string s){
    int l = 0;
    int r = s.size()-1;
    while(l<=r){
        if(s[l]!= s[r] ){
            return false;
        }
        l++;
        r--;
    }
    return true;

}
void countFreq(string s){
    unordered_map<char,int> map;
    for(char ch : s){
        map[ch]++;
    }
    for(auto const & pair : map){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}
int countDigits(int n){
    int sum = 0 ;
    while(n!=0){
        sum += n%10;
        n /= 10;

    }
    return sum;
}
bool Armstrong(string s){
    int n = s.size();
    int temp = stoi(s);
    int originalTemp = temp;
    int sum = 0 ;
    while(temp!=0){
        int d = temp%10;
        sum += pow(d,n);
        temp /= 10;
    }
    if(sum == originalTemp){
        return true;
    }
    else{
        return false;
    }


}

void Freq(string s){
    vector<int> freq(26,0);
    for(char ch : s){
        if(ch >='a' && ch <='z'){
            freq[ch - 'a']++;
        }
        else if (ch>='A' && ch<='Z'){
            freq[ch-'A']++;
        }
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            cout<<(char)('a'+i)<<": "<<freq[i]<<endl;
        }
    }
    
}
int main(){
    vector<int> arr = {4,2,67,8};
   // cout<<Largest(arr);
    //cout<<endl<<secondLarge(arr)<<endl;
    string s = "madamr";
   // cout<<reverse(s)<<endl;
   // countFreq(s);
    //cout<<countDigits(123)<<endl;
    //cout<<Armstrong("53");
    Freq("ramyaSurya");

}