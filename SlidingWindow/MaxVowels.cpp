#include<iostream>
#include<vector>
using namespace std;
bool IsVowel(char c){
    return c =='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
int Vowels(vector<char> &a,int k){
    int count = 0,maxCount=0;
    for(int i=0;i<a.size();i++){
        if(IsVowel(a[i])){
            count++;
        }
    }
        maxCount = count;
    for(int i=k;i<a.size();i++){
        if(IsVowel(a[i-k])){
            count--;
        }
        if(IsVowel(a[i])){
            count++;
        }

        maxCount = max(maxCount,count);
    }
    return maxCount;
    
}
int main(){
    vector<char> arr = {'t','h','i','s','i','s','a','l','o','n','g','x'};
    int k = 4;
    cout<<Vowels(arr,k);

}