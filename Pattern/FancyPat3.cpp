#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the row no"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int t=i<=n/2?2*i:0;
        for(int j=0;j<=t;j++){        
            if(j==0||j==2*i){
                cout<<"* ";
            }
            else{  
                cout<<t-j+1<<;
                
            }
            

        }
        cout<<endl;
    }
 return 0;
}