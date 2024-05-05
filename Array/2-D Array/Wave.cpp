#include<iostream>
#include<vector>
using namespace std;
void solve(vector<vector<int>>& vp,int n,int m){
        for(int i=0;i<m;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                cout<<vp[j][i]<<" "<<endl;
                }
            }
            else{
                    for(int j=n-1;j>=0;j--){
                        cout<<vp[j][i]<<" "<<endl;
                    }
            }
            
        }
}
int main()
{   int n,m;
cin>>n;

cin>>m;

vector<vector<int>>vp(n,vector<int>(m));
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
        cin>>vp[i][j];
    }
   
    }  
    solve(vp,n,m);
    
 return 0;
}
