#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
    
    vector<vector<int>>rotate(vector<vector<int>>arr){
        
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<i;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int i=0;i<arr.size();i++){
            reverse(arr[i].begin(),arr[i].end());
        }
        return arr;
    }

int main()
{
    vector<vector<int>>r;
    vector<vector<int>>arr{{1,2,3},{4,5,6},{7,8,9}};
    r=rotate(arr);
     for(int i=0;i<arr.size();i++){
        cout<<"[";
            for(int j=0;j<arr[0].size();j++){
               cout<<r[i][j];
            }
            cout<<"]";
        }

 return 0;
}