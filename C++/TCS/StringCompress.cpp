/*
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

void Compression(string s){
       unordered_map<char,int> res;
       for(char ch : s){
        res[ch]++;
       }

       for(auto const  &pair:res){
        cout<<pair.first<<pair.second;
       }

}

int main(){
    string a = "rrraaccd";
    Compression(a);
}
   


    //lletcode 443

#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>

using namespace std;
class Solution{
     public:
         vector<char> Compress(vector<char>& a){
         

         unordered_map<char,int> res;
         vector<char> result;
         vector<char> arr;
         for(char ch : a){
            if(res[ch]==0){
                arr.push_back(ch);

            }
            res[ch]++;
         }

         for(char ch : arr){
            result.push_back(ch);
            if(res[ch]>1){
                string countStr = to_string(res[ch]);
                for(char digit : countStr){
                    result.push_back(digit);
                }
            }
         }
         return result;

         





         }


};
int main(){

    vector<char> arr = {'a','a','b','b','c','c','c'};
     Solution sol;
     vector<char> res = sol.Compress(arr);
     for(char i: res){
        cout<<i<<"\t";
     }
}

 
#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;
 class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0; 
        int i = 0;
        int n = chars.size();

        while (i < n) {
            char current = chars[i];
            int count = 0;

           
            while (i < n && chars[i] == current) {
                i++;
                count++;
            }

          
            chars[write++] = current;

           
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[write++] = c;
                }
            }
        }

        return write;  
    }
};

int main(){
    Solution sol;
    vector<char> res = {'a','a','a','b','b'};
    cout<<sol.compress(res);
}

*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int Count(vector<char>& a){
    int i =0;
    int write =0;
    int n = a.size();
    while(i<n){
        char curr = a[i];
        int count =0;
        while(i<n && a[i]== curr){
            i++;
            count++;
        }
        a[write++] = curr;

        if(count>1){
            string strCount = to_string(count);
            for(char i : strCount){
                a[write++] = i;
            }
        }
    }
    return write;
}

int main(){
    vector<char> a ={'a','b','b','c','d'};
    cout<<Count(a);
}