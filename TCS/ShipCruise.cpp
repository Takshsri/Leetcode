/*A party has been organised on cruise. The party is organised for a limited time(T). The number of guests entering (E[i]) and leaving (L[i]) the party at every hour is represented as elements of the array. The task is to find the maximum number of guests present on the cruise at any given instance within T hours.

Example 1:
Input :

5    -> Value of T
[7,0,5,1,3]  -> E[], Element of E[0] to E[N-1], where input each element is separated by new line 
[1,2,1,3,4]   -> L[], Element of L[0] to L[N-1], while input each element is separate by new line.
Output :
8     -> Maximum number of guests on cruise at an instance.
Explanation:
Explanation:

1st hour:
Entry : 7 Exit: 1
No. of guests on ship : 6

2nd hour :
Entry : 0 Exit : 2
No. of guests on ship : 6-2=4

Hour 3:
Entry: 5 Exit: 1
No. of guests on ship : 4+5-1=8

Hour 4:
Entry : 1 Exit : 3
No. of guests on ship : 8+1-3=6

Hour 5:
Entry : 3 Exit: 4
No. of guests on ship: 6+3-4=5
Hence, the maximum number of guests within 5 hours is 8.


*/

#include<iostream>
#include<vector>
using namespace std;
int presentAtCruise(vector<int>& enter, vector<int>& exit){
    int sum = 0,maxi = 0 ;
    for(int i=0;i<enter.size();i++){
        sum += enter[i] - exit[i];
        if(sum>maxi) maxi = sum;

    }
    return maxi;
}
int main(){
    vector<int> enter = {3,5,2,0};
    vector<int> exit = {0,2,4,4};
    cout<<presentAtCruise(enter,exit);

    return 0;
}
