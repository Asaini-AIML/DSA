#include<iostream>
#include<vector>
#include<map>
using namespace std;
int solve(vector<int>& vp,vector<int>& gp,vector<int>& lp,int n){
    
    map<int,int>rp;
    map<int,int>mp1;
    
}
int main()
{   int n;
cin>>n;
    vector<int>vp(n);
    for(int i=0;i<n;i++){
        cin>>vp[i];
    }
     vector<int>gp(n);
    for(int i=0;i<n;i++){
        cin>>gp[i];
    }
     vector<int>lp(n);
    for(int i=0;i<n;i++){
        cin>>lp[i];
    }
   int r=solve(vp,gp,lp,n);
   cout<<"mila?"<<r;
 return 0;
}