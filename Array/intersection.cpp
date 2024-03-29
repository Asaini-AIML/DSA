#include<iostream>
#include<vector>
#include<map>
#include<limits>
using namespace std;
int main()
{
  int c;
    cin >> c;
    vector<int> a(c);
    vector<int> b(c);
    for(int i = 0; i < c; i++){
        cin >> a[i];
    }
    for(int j = 0; j < c; j++){
        cin >> b[j];
    }  
    map<int,int>mp1;
    map<int,int>mp2;
    for(auto it:a){
        mp1[it]++;
    } 
    for(auto it:mp1){
        if(it.second>1){
            it.second=1;
        }
    }
    for(auto it:b){
        mp2[it]++;
    } 
    for(auto it:mp2){
        if(it.second>1){
            it.second=1;
        }
    }
    for(auto it:mp2){
        mp1[it.first];
    }
    for(auto it:mp1){
        if(it.second==2){
            cout<<"this is intersection"<<it.first;
        }
        else{
            cout<<"?";
        }
    }

 return 0;
}