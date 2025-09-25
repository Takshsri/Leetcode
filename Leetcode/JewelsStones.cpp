#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int Find(string jewels,string stones){
    unordered_set<char> res;
    for(auto i : jewels) res.insert(i);
    int count =0;
    for(auto i : stones){
        if(res.find(i)!= res.end()){
            count++;
        }
    }
    return count;

}
int main(){

    string jewels = "aA";
    string stones = "aAAbbb";
    cout<<Find(jewels,stones);
}