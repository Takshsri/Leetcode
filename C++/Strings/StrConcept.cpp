//operations in Strings

#include<iostream>
#include<string>
#include<algorithm>
#include<map>

using namespace std;
void Palindrome(string s){
    if(s.empty()){
        cout<<"String is Empty";
    }
    int l = 0;
    int r = s.length()-1;
    int Palin = false;
    while(l<=r){
        if(s[l] != s[r]){
            break;
        }
        else{
            l++;
            r--;
            Palin = true;
        }
       
    }
    
    if(Palin){
        cout<<"Palindrome";

    }
    else{
        cout<<"Not Palindrome";
    }

}
bool Anagram(string s1,string s2){
    if(s1.length() != s2.length()) return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1 == s2)? true : false;

}
bool AnagramFun(string s1,string s2){
    if(s1.length() != s2.length()) return false;
    map<char,int>  res1;
    map<char,int> res2;
    for(char c : s1){
        res1[c]++;
    }
    for(char c : s2){
        res2[c]++;
    }
    for(auto [str,num] : res1){
        cout<<str<<"\t"<<num<<endl;
    }
     for(auto [str,num] : res2){
        cout<<str<<"\t"<<num<<endl;
    }
    return (res1 == res2) ? true:false;
    
   

}

bool AnagramsOpt(string s1,string s2){
    if(s1.length() != s2.length()) return false;
    map<char,int> res;
    for(char c: s1)res[c]++;
    for(char c:s2) res[c]--;
    for(auto[str,num]: res){
        if(num!=0) return false;
    }
    return true;
}
int main(){

    string str1 ;
    string str2;
   
     //In strings cin function is read untill space character to avoid we use getline() function to read entire line
   // getline(cin,str3);
    //cout<<str3<<endl;
    //cout<<str1<<endl<<str2;

    //Palindrome Question

    cout<<"ENter a String:";
    cin>> str1>>str2;
    //Palindrome(str3);
   
   /* if(Anagram(str1,str2)){
        cout<<"Anagrams";
    }
    else{
        cout<<"Anagrams";
    }
        */
    if(AnagramsOpt(str1,str2)){
        cout<<"Anagrams";
    }
    else{
        cout<<"Not Anagrams";
    }
}