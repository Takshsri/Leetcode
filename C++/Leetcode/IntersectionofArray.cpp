/*
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int> &a, vector<int> &b) {
    unordered_set<int> setA(a.begin(), a.end());  // Store elements of 'a' in a set
    unordered_set<int> result;  // To store unique intersection values

    for (int num : b) {
        if (setA.count(num)) {  
            result.insert(num);
        }
    }

    return vector<int>(result.begin(), result.end());  // Convert set to vector
}

int main() {
    vector<int> a = {1, 2, 2, 1};
    vector<int> b = {2};

    vector<int> res = intersection(a, b);

    for (int i : res) {
        cout << i << "\t";
    }
}

*/

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution{
    public:
    vector<int> Intersection(vector<int>a ,vector<int> b){
        unordered_set<int> setA(a.begin(),a.end());
        unordered_set<int> res;
        for(int i : b){
            if(setA.count(i)){
                res.insert(i);
            }
        }
        return vector<int>(res.begin(),res.end());
    }
};
int main(){
    vector<int> a={2,3,6,7};
    vector<int> b={4,5};
    Solution sol;
    vector<int> res=sol.Intersection(a,b);
    for(int i: res){
        cout<<i<<"\t";
    }
}