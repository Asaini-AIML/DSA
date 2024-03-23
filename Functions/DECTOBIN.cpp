#include<iostream>
#include <cmath>
using namespace std;
int dectobin(int n){
    int num=0;
    int i=0;
    while(n>0){
        int bit=n%2;
        num=bit*pow(10,i)+num;
        n=n/2;
    }
    return num;
}
int main()
{
int n;
cin>>n;
int bin=dectobin(n);
 
}