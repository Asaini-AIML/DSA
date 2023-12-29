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
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    int start=0;
    int end=n-1;
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;

    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
 return 0;
}