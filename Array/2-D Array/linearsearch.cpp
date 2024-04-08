#include<iostream>
#include<vector>
using namespace std;
bool search(vector<vector<int>>arr,int r){
    int s=arr.size();
    int t=arr[0].size();
    for(int i=0;i<s;i++){
        for(int j=0;j<t;j++){
            if(arr[i][j]==r){
                return true;
            }
           
        }
    }
    return false;
}
int main()
{
    vector<vector<int>>arr{{1,2,3,4},{5,6,7,8}};
    int r=0;
    bool c=search(arr,r);
    cout<<c;
 return 0;
}