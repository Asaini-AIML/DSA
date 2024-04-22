#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int solve(vector<int>& vp,int n){
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[vp[i]]++;
    }
    int m = -1; // Initialize m to a default value
    for (int i = 0; i < n; i++) {
        if (mp[vp[i]] == 2) { // Check if the element occurs exactly twice
            m = vp[i];
            break; // Found the element occurring exactly twice, no need to continue
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