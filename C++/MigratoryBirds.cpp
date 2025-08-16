/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
      string word="   fly me   to   the moonSea  ";
      int length=word.size();
      int count=0;
      for(int i=length-1;i>=0;i--){
            if(word[i]!=' '){
                  count++;
            }
            else if(word[i]==' ' && count){
                  break;
            }
      }
      cout<<(count);

      
}
*/
//125 leetcode
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
      string str="A man, a plan, a canal: Panama";
      string res="";
    
   for(char c : str){
      if(isalnum(c)){
           
            res+=tolower(c);
      }
   }
   int length=res.size();
   int st=0,end=length-1;
   bool found=true;
   while(st<end){
      if(res[st]!=res[end]){
            found=false;
            break;
      }
      st++;
      end--;
   }
   if(found){
      cout<<"Match";
   }
   else{
      cout<<"Not Match";
   }
      //cout<<res;
}