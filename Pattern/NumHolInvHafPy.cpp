#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
          if(j==0||j==n-i-1||i==0){
            cout<<j+i+1<<" ";
          }
          else{
            cout<<"  ";
          }
        }
        cout<<endl;
    }
 return 0;
}