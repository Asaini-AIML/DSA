#include<iostream>
using namespace std;
bool Check(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    bool m=Check(n);
    cout<<m;
    
 return 0;
}