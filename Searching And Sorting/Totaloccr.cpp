#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int binary(vector<int>& vp,int target){
    int count=0;
       int s=0,e=vp.size()-1;
       int mid=s+(e-s)/2;
       while(s<=e){
        if(target==vp[mid]){
            count++;
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
}
int main()
{
    int target;
    cin>>target;
    vector<int>vp{1,2,3,4,5,6,7,8,9,15,11};
    sort(vp.begin(),vp.end());
    int n=binary(vp,target);
    cout<<n<<endl;
    
 return 0;
}