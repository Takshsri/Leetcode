//This is not the optimal way Time Complexity is (n log n)
/*
#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

int Consecutive(vector<int> &arr){
    int longest=1;
    int count = 1;
    sort(arr.begin(),arr.end());
    for(int i=1;i<arr.size();i++){
        if(arr[i] == arr[i-1]+1){
            count++;
        }
        else if(arr[i] == arr[i-1]){
            longest = 1;
        }
        count = max(count,longest);
    }
    return count;

}
int main(){
    vector<int> arr ={1,2,2,3};
    cout<<Consecutive(arr);
}
    */


// We can Solve in o(n) using unorderd_set
#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
int Consecutive(vector<int> &arr){

    unordered_set<int> s(arr.begin(),arr.end());
    
    int longest =0;
    for(int num : s){
        if(s.find(num -1) == s.end()){
            int currentNum = num;
            int count =1;
            while(s.find(currentNum+1)!=s.end()){
                currentNum++;
                count++;
            }
            longest = max(longest,count);
        }
    }
    return longest;
}

int main(){

    vector<int> arr = {1,2,2,3};
    cout<<Consecutive(arr);
}

