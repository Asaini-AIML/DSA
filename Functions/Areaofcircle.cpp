#include<iostream>
using namespace std;
float area(float r){
   float pi=3.14;
   float a=pi*r*r;
   return a;
}
int main()
{
    float r;
    cin>>r;
float aarea=area(r);
cout<<aarea;
 return 0;
}