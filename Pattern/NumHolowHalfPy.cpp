#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter the number "<<endl;
 cin>>n;
 for( int i=0 ;i<n;i++){
    for(int j=0;j<=i+1;j++){
        if(j==0||j==i+1||i==n-1){
          cout<<j+1;
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }
 return 0;
}