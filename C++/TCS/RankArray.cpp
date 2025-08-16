/*
#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
void Rank(vector<int> a){
    unordered_map<int,int > map;
    vector<int> res = a;
    sort(res.begin(),res.end());
    int rank =1;
    for(int i=0;i<res.size();i++){
        if(map.find(res[i])== map.end()){
                map[res[i]] = rank;
                rank++;
        }
    }
    for(int num :  a){
        cout<< num <<"\t"<< map[num];
        cout<<endl;
    }


}
int main(){
    vector<int> a = {1,5,8,15,8,25,9};
    Rank(a);

}

*/

#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
void Rank(vector<int> a){
    unordered_map<int,int> map;
    vector<int> res = a;
    sort(res.begin(),res.end());
    int rank = 1;
    for(int i=0;i<res.size();i++){
        if(map.find(res[i]) == map.end()){
            map[res[i]] = rank;
            rank++;

        }
    }

    for(int i : a){
        cout<<i<<"\t"<<map[i]<<endl;
    }


}

int main(){
    vector<int> a ={23,7,89,3};
    Rank(a);
}