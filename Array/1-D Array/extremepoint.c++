#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of element"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int start=0;
    int end=n-1;
    while(start<=end){    
    if(start==end){
        cout<<a[start]<<" ";
            break; }
        cout<<a[start]<<" ";
        cout<<a[end]<<" ";
        start++;
        end--;
    }
 return 0;
}