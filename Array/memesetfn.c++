#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cout<<"enter the sizre of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the element"<<endl;
for(int i=0;i<n;i++){
     cin>>a[i];
}
memset(a,0,sizeof(a));
cout<<"new array"<<endl;
for(int j=0;j<n;j++){  
cout<<a[j];
}
 return 0;
}