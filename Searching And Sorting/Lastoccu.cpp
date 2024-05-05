#include<vector>
#include<bits/stdc++.h>
using namespace std;
int stli(vector<int>& vp,int target){
    auto it = upper_bound(vp.begin(), vp.end(), target);
    return it - vp.begin();
}
int binary(vector<int>& vp,int target){
       int ans=-1;
       int s=0,e=vp.size()-1;
       int mid=s+(e-s)/2;
       while(s<=e){
        if(target==vp[mid]){
            ans=mid;
            s=mid+1;
        }
        else if(target<vp[mid]){
           e=mid-1;
        }
         else if(target>vp[mid]){
           s=mid+1;
        }
        mid=s+(e-s)/2;
       }
       if(ans>=0){
        return ans;
       }
       else{
        return -1;
       }
}
int main()
{
    int target=4;
    vector<int>vp{1,2,3,4,4,4,7,8,9,15,11};
    sort(vp.begin(),vp.end());
    int n=binary(vp,target);
    cout<<n<<endl;
    int m=stli(vp,target);
    cout<<m;
 return 0;
}