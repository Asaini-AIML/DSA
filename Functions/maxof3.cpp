#include<iostream>
using namespace std;
int max(int a,int b,int c){
    if(a>b &&a>c){
        return a;
    }
    else if(b>a && b>c){
     return b;
    }
    else{
        return c;
    }
}
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int mux=max(a,b,c);
    cout<<mux;
 return 0;
}