/*Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.

 

Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
*/

#include<iostream>
#include<vector>
using namespace std;
void Sort(vector<int>& a){
    int left =0;
    int right = a.size()-1;
    while(left<=right){
        if(a[left]%2==0){
            left++;
        }
        else{
            swap(a[left],a[right]);
            right--;

        }
        

    }
}

int main(){
    vector<int> a = {1,0,3};
    Sort(a);
    for(int i : a){
        cout<<i<<" ";
    }
}