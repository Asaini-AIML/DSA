#include<iostream>
using namespace std;
// void add(){
//     int n,m;
//     cout<<"enter the number";
//     cin>>n;
//     cin>>m;
//     int sum=n+m;
//     cout<<sum;
// }
int addd1(int a,int b){
int result=a+b;
 return result;
}
int main()
{
    int a,b;
    cout<<"enter the number";
    cin>>a;
    cin>>b;
    int sum=addd1(a,b);
    cout<<sum;
// add();
}