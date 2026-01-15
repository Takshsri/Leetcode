/*At a fun fair, a street vendor is selling different colours of balloons. He sells N number of different colours of balloons (B[]). The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.

Note: If there is more than one colour which is odd in number, then the first colour in the array which is present odd number of times is displayed. The colours of the balloons can all be either upper case or lower case in the array. If all the inputs are even in number, display the message “All are even”.

Example 1:

7  -> Value of N
[r,g,b,b,g,y,y]  -> B[] Elements B[0] to B[N-1], where each input element is sepārated by ṉew line.
Output :

r -> [r,g,b,b,g,y,y]  -> “r” colour balloon is present odd number of times in the bunch.
Explanation:
From the input array above:

r: 1 balloon 
g: 2 balloons
b:  2 balloons
y : 2 balloons
Hence , r is only the balloon which is odd in number.
*/

#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
char FirstNonRepeat(string str){
    unordered_map<char,int> map;
    for(char ch : str){
        map[ch]++;
    }
    for(char ch : str){
        if(map[ch]==1){
            return ch;
        }
    }
    return char(-1);
}
int main(){
   /* int n ;
    cout<<"Enter Number:";
    cin>>n;
    vector<char> str(n);
    unordered_map<char,int> map;
    for(int i=0;i<n;i++){
        cin>>str[i];
        map[str[i]]++;

    }
    bool found = false;
    for(int i=0;i<n;i++){
        if(map[str[i]]%2!=0){
            cout<<"Odd Color:"<<str[i]<<endl;
            found = true;
            break;
        }
    }
        */
    

    string  str1 = "swiss";
    cout<<FirstNonRepeat(str1);
}