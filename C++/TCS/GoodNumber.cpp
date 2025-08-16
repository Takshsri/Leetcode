#include <bits/stdc++.h>
using namespace std;

bool GoodNumber(int n){
    int original = n;
    int sumDigits = 0;
    
    while(n != 0){
        sumDigits += n % 10;
        n /= 10;
    }
    
    if(sumDigits != 0 && original % sumDigits == 0){
        return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter Number of test cases: ";
    cin >> n;
    
    while(n--){
        int num;
        cin >> num;
        
        if(GoodNumber(num)){
            cout << "Good Number" << endl;
        }
        else{
            cout << "Bad Number" << endl;
        }
    }
}
