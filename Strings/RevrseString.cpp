#include<iostream>
#include<vector>
#include<string>

using namespace std;
void Reverse(vector<char>& s){
    if(s.size() <=0){
        cout<<"String is EMpty";
    }
    int l= 0;
    int r = s.size()-1;
    while(l<=r){
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    
    }

}
int main(){
    vector<char> s = {'h','e','l','l','o'};
    for(char c :s){
        cout<<c<<"\t";
    }
    cout<<endl;
    Reverse(s);
 for(char c :s){
        cout<<c<<"\t";
    }


}