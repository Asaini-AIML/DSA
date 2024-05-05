#include<iostream>
#include<vector>
using namespace std;
bool linearr(vector<int>& vp,int target){
    for(int i=0;i<vp.size();i++){
        if(vp[i]==target){
            return true;
        }
        
    }
    return false;
}
int main()
{
 int target;
 cin>>target;
 vector<int>vp{1,2,3,4,5};
 bool n=linearr(vp,target); 
 cout<<n;  
 return 0;
}