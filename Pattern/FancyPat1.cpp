#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"enter the row no."<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n+3-i;j++){
          cout<<"*";
        }
        int t=0;
        for(int j=0;j<2*i+1;j++){
            if(j==2*t){
                cout<<i+1;
                t++;
            }
            else{
                cout<<"*";
            }
        }
         for(int j=0;j<n+3-i;j++){
          cout<<"*";
        }
       
        cout<<endl;
    }
 return 0;
}