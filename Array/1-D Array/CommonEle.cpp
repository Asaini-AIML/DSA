#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>& vp,int n){
    
    vector<int>hash(n);
    for(int i=0;i<n;i++){
        if(vp[i]<=n){
            hash[vp[i]-1]++;
        }
    }
    int m;
    for(int i=0;i<n-1;i++){
        if(hash[i]==0){
            m=i+1;  
        }
    }
    return m;
}
int main()
{   int n;
cin>>n;
    vector<int>vp(n);
    for(int i=0;i<n;i++){
        cin>>vp[i];
    }
   int r=solve(vp,n);
   cout<<"mila?"<<r;
 return 0;
}