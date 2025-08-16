#include<iostream>
#include<vector>
using namespace std;

vector<int>grades(vector<int>& a){
    vector<int>res;
    for(int i=0;i<a.size();i++){
        int n=a[i]/5;
        int result=(n+1)*5;
        
         if(a[i] < 38){
           res.push_back(a[i]);
        }
        else if((result-a[i])<3){
            res.push_back(result);
        }
        else{
            res.push_back(a[i]);

        }
       
        
    }
    return res;
}
int main(){
    vector<int> a={84,29,57};
    vector<int>res=grades(a);
    for(int i:res){
        cout<<i<<"\t";
    }
}