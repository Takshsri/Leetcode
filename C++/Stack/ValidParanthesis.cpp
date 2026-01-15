/*#include <iostream>
#include <stack>
using namespace std;

bool Isvalid(string a) {
    stack<char> res;
    
    for (char c : a) {
        if (c == '(' || c == '{' || c == '[') {
            res.push(c);
        } 
        else {
            if (res.empty()) {
                return false;
            }

            char top = res.top();
            if ((c == ')' && top == '(') || 
                (c == '}' && top == '{') || 
                (c == ']' && top == '[')) {
                res.pop(); 
            } 
            else {
                return false;
            }
        }
    }
    
    return res.empty(); 
}

int main() {
    string name;
    cout << "Enter The Expression: ";
    cin >> name;

    if (Isvalid(name)) {
        cout << "It is Balanced Well\n";
    } else {
        cout << "Not Balanced\n";
    }

    return 0;
}
*/

#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool valid(string name){

    stack<char> st;
    for(char c : name){
        if( c =='(' || c == '{' || c=='['){
            st.push(c);
        }
        else{
            if(st.empty()){
                return false;
            }

            char top = st.top();
            if(c == ')' && top == '(' || c =='}' && top =='{' || c == ']' && top =='['){
                st.pop();
            }
            else{
                return false;
            }
        }
    }

    return st.empty();
}

int main(){
    string name;
    cout<<"Enter the Expression:";
    cin>>name;
    if(valid(name)){
        cout<<"It is Balanced";
    }
    else{
        cout<<"Not Balanced";
    }

}