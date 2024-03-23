#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of row"<<endl;
    cin>>n;
    int k=1;
    for(int i=0;i<n;i++){
        int t=0;
        for(int j=0;j<2*i+1;j++){
            if(j==2*t){
                cout<<k;
                k++;
                t++;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    int s=k-n;
    for(int i=0;i<n;i++){
        int t=0;
        int d=s;
        for(int j=0;j<(2*n)-(2*i)-1;j++){
             if(j==2*t){
                cout<<d;
                d++;
                t++;
            }
            else{
                cout<<"*";
            }
        }
        s=s-(n-i-1);
        cout<<endl;
    }
 return 0;
}