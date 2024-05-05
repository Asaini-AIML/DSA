#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool stli(vector<int>& vp,int target){
    int c=binary_search(vp.begin(),vp.end(),target);
    return c;
}
bool binary(vector<int>& vp,int target){
     int start=0;
     int end=vp.size()-1;
    int  mid=start+(end-start)/2;
    while(start<=end){
        int element=vp[mid];
        if(element==target){
            return 1;
        }
        if(target<mid){
          end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return 0;

}
int main()
{
    int target;
    cin>>target;
    vector<int>vp{1,2,3,4,5,6,7,8,9,15,11};
    sort(vp.begin(),vp.end());
    bool n=binary(vp,target);
    cout<<n<<endl;
     bool m=stli(vp,target);
    cout<<m;
 return 0;
}