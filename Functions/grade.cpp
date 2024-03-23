#include<iostream>
using namespace std;
char grade(int n){
    
    if(n>=90){
         return 'A';
    }
    else if(90>n>=80){
        return 'B';
    }
    else if(80>n>=70){
        return 'C';
    }
    else{
        return 'D';
    }
}
int main()
{
    int n;
    cin>>n;
    char g=grade(n);
cout<<g;
return 0;
}