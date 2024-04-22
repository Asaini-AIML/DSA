#include<iostream>
#include<vector>
using namespace std;
vector<int>solve(vector<int>& vp,int n){
    int i=0,j=0;
    while(j<n){
        if(vp[j]<0){
            swap(vp[j],vp[i]);
            i++;
            j++;
        }

        else {
            j++;
        }
    }
    return vp;
}
int main()
{   int n;
cin>>n;
    vector<int>vp(n);
    for(int i=0;i<n;i++){
        cin>>vp[i];
    }
    vector<int>rp;
   rp=solve(vp,n);
for(auto it:rp){
    cout<<it<<",";
}
 return 0;
}