#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<" ";
    }
    for(int j=0;j<i+1;j++){
        cout<<i+j+1;
    }
    int t=2*i;
    for(int j=0;j<i;j++){
        cout<<t;
        t--;
    }
    cout<<endl;
 }
 return 0;
}