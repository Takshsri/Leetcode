/*
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int Solution(int arr[], int len) {
    if (len == 0) return 0; // Edge case: No elements

    int sol = arr[0];  // Initialize with the first element
    for (int i = 1; i < len; i++) {
        if (abs(arr[i]) < abs(sol) || (abs(arr[i]) == abs(sol) && arr[i] > sol)) {
            sol = arr[i];
        }
    }
    return sol;
}

int main() {
    int num;
    cin >> num; // Reading input from STDIN
    cout << "Input number is " << num << endl;

    if (num <= 0) {
        cout << "Invalid array size" << endl;
        return 0;
    }

    int array[num];
    for (int i = 0; i < num; i++) {
        cin >> array[i]; // Reading array elements
    }

    int Answer = Solution(array, num);
    cout << "Number Close to Zero is " << Answer << endl;

    return 0;
}

*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int Solution(vector<int> & a){
    int len=a.size();
    int closest=1e9;
    int ans=1e9;
    for(int i=0; i< len; i++){
        if( abs(a[i]-0) < closest){
            closest = abs(a[i]-0);
            ans = abs(a[i]);
        }
        else if(abs(a[i]- 0) == closest){
            ans= max(ans, a[i]);
            ans=abs(ans);
        }
    }
    return ans;

}

int main(){
    vector<int> a={-50,-56,-78,90};
    cout<<Solution(a);
}