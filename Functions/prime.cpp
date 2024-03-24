#include<iostream>
using namespace std;
bool Prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        
    }
    }

}
int main()
{
int n;
cin>>n;
bool isprime=Prime(n);
  cout<<isprime;
  return 0;
}