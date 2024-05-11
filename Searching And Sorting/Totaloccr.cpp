#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int Last(vector<int>& vp,int target){
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
int first(vector<int>& vp,int target){
       int ans=-1;
       int s=0,e=vp.size()-1;
       int mid=s+(e-s)/2;
       while(s<=e){
        if(target==vp[mid]){
            ans=mid;
            e=mid-1;
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
       }}
int main()
{
    int target;
    cin>>target;
    vector<int>vp{1,2,3,4,4,4,7,8,9,15,11};
    sort(vp.begin(),vp.end());
    int n=first(vp,target);
    int m=Last(vp,target);
    cout<<m-n+1;
    
 return 0;
}