#include<iostream>
using namespace std;
int main()
{
    int temp=INT16_MIN;
    int n; 
    cout<<"Enter the Element"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(temp<=a[i]){
        temp=a[i];
        }
    }
    cout<<"max no is"<<temp<<endl;
 return 0;
}
