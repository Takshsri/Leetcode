/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int missing(vector<int>& a){
     sort(a.begin(),a.end());
     int num=1;
     for(int i: a){
        if(i>0){
            if(i==num){
                num++;
            }
            else if(i>num){
                break;
            }
        }
     }
     return num;


}

int main(){
    vector<int> a={1,-1,2,3,4};
    cout<<missing(a);
} 
    



#include <iostream>
#include <vector>
using namespace std;

int missing(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    return n + 1;
}

int main() {
    vector<int> a =  {1, -1, 2, 3, 4};
    cout << missing(a) << endl;
}
*/

