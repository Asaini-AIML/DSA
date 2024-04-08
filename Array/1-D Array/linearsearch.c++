#include<iostream>
using namespace std;
bool found(int a[],int n,int r){
    for(int i=0;i<n;i++){
        if(a[i]==r){
            return true;
        }  
           
        } 
         return false; 
    } 
int main()
{
     int n;
    cout<<"enter the no. of element"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the require element"<<endl;
    int r;
    cin>>r;
    if(found(a,n,r)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}


